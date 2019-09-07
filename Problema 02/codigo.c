/*******************************************************************************
Autor: Francisco Tito Silva Santos Pereira (16111203)
Componente Curricular: MI- Algoritmos
Concluido em: 11/09/2016
Declaro que este código foi elaborado por mim de forma individual e não contém nenhum
trecho de código de outro colega ou de outro autor, tais como provindos de livros e
apostilas, e páginas ou documentos eletrônicos da Internet. Qualquer trecho de código
de outra autoria que não a minha está destacado com uma citação para o autor e a fonte
do código, e estou ciente que estes trechos não serão considerados para fins de avaliação.
******************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
FILE *file; /*Inicialização do ponteiro do tipo FILE, o qual irá apontar para um arquivo */
    file = fopen("ent.txt","r"); //Abrindo o arquivo localizado no mesmo local que o código. Iremos lê-lo.
    if (file== NULL) { //Caso o ponteiro aponte para nulo
    printf("O Arquivo não pode ser aberto,verifique se o nome do arquivo de entrada é ent.txt\n"); //Aparece o aviso
    return 0; } //O programa irá fechar
    int tamanho; //Declaração da variavel tamanho, que é o primeiro numero do arquivo,o qual diz a quantidade de jogadores
    fscanf(file ,"%d", &tamanho); //Escaneando o numero inteiro e armazenando-o na variável tamanho
    char nomes[tamanho][100]; //Declaração da string que irá armazenar os nomes dos jogadores
	float numeros[tamanho][22]; //Declaração da matriz que armazenará os números do arquivo
		int i,j;
for (i=0;i<tamanho;i++) {
            fscanf(file,"%[^\t]",nomes[i]); //Escaneando os nomes e armazenando na string nomes
		for(j=0;j<22;j++) {
            fscanf(file,"%f",&numeros[i][j]); } } //Escaneando os numeros e armazenando na matriz de numeros
       fclose(file); //Fechando o arquivo
     file = fopen("Relatorio.txt", "w"); //Agora irá escrever em um arquivo chamado Relatório

 //A partir daqui é a declaração das funções
void CalculoOposto (float x[tamanho][22],int t,char nomes[][100],FILE *file); //Aponta o jogador mais eficiente para o cargo de oposto
void CalculoLevantador (float x[tamanho][22],int t,char nomes[][100],FILE *file);//Aponta o jogador mais eficiente para o cargo de levantador
void QtdSaques (float x[][22],int tamanho, char nomes[][100],FILE *file); //Quantidade total de saques realizadas pela equipe
void RankingAtaque (float x[][22], int tamanho, char nomes[][100],FILE *file); //Ranking dos jogadores segundo a taxa de sucesso dos ataques
void MelhoresBloqueadoresQtdPontos(float x[][22],int tamanho, char nomes[][100],FILE *file); //Aponta os 3 melhores bloqueadores por quantidade de pontos
void MelhoresBloqueadoresQtdBloqueios(float x[][22],int tamanho, char nomes[][100],FILE *file); //Aponta os 3 melhores bloqueadores por quantidade de bloqueios
void QtdTotal(float x[][22],int tamanho, char nomes[][100],FILE *file); //Quadro com a quantidade total de ataques,bloqueios,saques,levantamentos,defesas e recepções por jogador
void MeritoJogador(float x[][22],int tamanho, char nomes[][100],FILE *file); //Um quadro com os pontos conquistados por merito do jogador
//A partir daqui é a invocação das funções
CalculoOposto (numeros,tamanho,nomes,file);
CalculoLevantador (numeros,tamanho,nomes,file);
RankingAtaque (numeros,tamanho,nomes,file);
QtdSaques (numeros,tamanho,nomes,file);
MelhoresBloqueadoresQtdPontos(numeros,tamanho,nomes,file);
MelhoresBloqueadoresQtdBloqueios(numeros,tamanho,nomes,file);
QtdTotal(numeros,tamanho,nomes,file);
MeritoJogador(numeros,tamanho,nomes,file);
//Fim da invocação das funções
printf("\n O código foi compilado com sucesso, o arquivo .txt foi gerado contendo o seu relatório"); //Recado que irá aparecer se tudo ocorrer bem- o relatório será gerado
fclose(file); //Fecho o arquivo
return 0; //Fecho o programa
}
void CalculoOposto (float x[][22],int tamanho,char nomes[][100],FILE *file) { //Função que irá calcular o jogador mais eficiente para a posição de oposto
    int i,j,maior,indiceoposto; //Declaração das variáveis
	float oposto[tamanho][3],calculooposto[tamanho];  //Declaração de matrizes
	for (i=0;i<tamanho;i++) {
		for(j=0;j<3;j++) {
			oposto[i][j]=x[i][j]; } } //Farei a matriz oposto receber os números do arquivo que correspondem ao quadro de ataque
	for (i=0;i<tamanho;i++) {
			if(oposto[i][0]==0 && oposto[i][1]==0 && oposto[i][2]==0)
				calculooposto[i]=0; //Para não dar nenhum erro, estou assumindo que se algum número for zero,a variavel calculooposto=0
			else
			calculooposto[i]=(oposto[i][0]+oposto[i][2])-oposto[i][1]; } //É feito o calculo para descobrir o melhor oposto
			maior=calculooposto[0]; //Assumo que o maior é o calculooposto[0] para em seguida encontrar o maior número
			for(i=0;i<tamanho;i++) {
                if(calculooposto[i]>=maior) {
                    maior=calculooposto[i];
                    indiceoposto=i; //Feito esses calculos acima, é possível encontrar o índice do melhor jogador
                }
			}
				fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
				fprintf(file,"\t\tO jogador mais eficiente para a posicao de oposto e: %s\n",nomes[indiceoposto]);
}
void CalculoLevantador (float x[][22],int tamanho,char nomes[][100],FILE *file) { //Função que irá calcular o jogador mais eficiente para a posição de levantador
    int i,indicelevantador; //Declaração das variáveis
	float levantador[tamanho],maior; //Declaração da matriz
	for (i=0;i<tamanho;i++) {
			levantador[i]=x[i][14]; } //Para o cálculo do levantador,assumi o "Average Per Set" como termo decisivo para o calculo
			maior=levantador[0];  //Assumo que o maior é o levantador[0] para em seguida encontrar o maior número
			for(i=0;i<tamanho;i++) {
                if(levantador[i]>=maior) {
                    maior=levantador[i];
                    indicelevantador=i; //Feito esses calculos acima, é possível encontrar o índice do melhor jogador

                }

			}
				fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
				fprintf(file,"\t\tO jogador mais eficiente para a posicao de levantador e: %s\n",nomes[indicelevantador]);

}
void BubbleSort(float vetor[],int tamanho) { //Função que ordena números de forma crescente
	int i,j;
	float auxiliar;
	for(i=0;i<tamanho;i++) {
	for(j=i+1;j<tamanho;j++){
		if(vetor[i]<vetor[j]) {
		auxiliar=vetor[i];
		vetor[i]=vetor[j];
		vetor[j]=auxiliar; } } }
}
void AcharIndice(float vetor[],int tamanho,int indice[],float aux[]) { //Função que irá achar o índice do vetor
	int i,j; //Declaração das variáveis
	 for(i=0;i<tamanho;i++) {
		for(j=0;j<tamanho;j++) {
		if(vetor[i]==aux[j]) //Se o valor de comparacao(ja ordenado) for igual ao de aux(não ordenado)
			indice[i]=j; }} //Assim irá ser  encontrado o indice já ordenado para a impressao
}
void RankingAtaque (float x[][22], int tamanho, char nomes[][100],FILE *file) { //Função que irá calcular o ranking de atacantes
	int i,j; //Declaração de variáveis
	float ataque[tamanho][3],comparacao[tamanho],aux[tamanho]; //Declaração de matrizes
		for(i=0;i<tamanho;i++) {
			for(j=0;j<3;j++) {
				ataque[i][j]=x[i][j]; }} //Farei a matriz oposto receber os números do arquivo que correspondem ao quadro de ataque
	 for(i=0;i<tamanho;i++) {
				if(ataque[i][0]>=10) { //Como é requerido os jogadores que tenham mais de 10 pontos de ataque
					comparacao[i]=ataque[i][0]/((ataque[i][0]+ataque[i][2]+ataque[i][1])/3); }
				else if(ataque[i][0]<10) { //Caso o jogador tenha menos de 10 pontos de ataque
					comparacao[i]=0; } } //Assumo que irá ter valor 0 para fazer a comparação logo em seguir
			int t=tamanho; //Declaração da variável t
			for(i=0;i<tamanho;i++) {
				aux[i]=comparacao[i]; //Passo o  valor do vetor comparacao para o aux, que será usada em diante.
				if(aux[i]==0) //Com isso, saberei quantas pessoas irão aparecer no ranking, como é desejado jogadores com mais de 10 pontos
					t--;}
		BubbleSort(comparacao,tamanho); //Invocação da função BubbleSort
		int indice[t];
		AcharIndice(comparacao,tamanho,indice,aux);
				fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
		fprintf(file,"\n\t\tRanking dos jogadores segundo a taxa de sucesso dos ataques realizados\n");
			for(i=0;i<t;i++) {
		fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
		fprintf(file,"\n Em %dº lugar = %s\n",i+1,nomes[indice[i]]); }
}

void QtdSaques (float x[][22],int tamanho, char nomes[][100],FILE *file) { //Função que irá calcular a quantidade total de saques realizados pela equipe
	int i,j,soma=0,somaERROS=0,auxnomes,ordenacao[tamanho]; //Declaração das variáveis;
	float porcentagem[tamanho],total[tamanho],porcentagemERROS[tamanho]; //Declaração dos vetores
	for(i=0;i<tamanho;i++) {
		total[i]=x[i][7]+x[i][8]+x[i][9];} //Colocando os valores relacionados ao calculo do saque no vetor total
	for(i=0;i<tamanho;i++) {
		soma=soma+total[i]; //Faço a soma dos valores de saque total
		somaERROS=somaERROS+x[i][8]; } //Faço a soma dos erros de saque
	for(i=0;i<tamanho;i++) {
		porcentagem[i]=(total[i]/soma)*100; //É atribuido o valor da porcentagem
		porcentagemERROS[i]=(x[i][8]/somaERROS)*100; } //É atribuido o valor da porcentagem de erros
	for(i=0;i<tamanho;i++)
	ordenacao[i]=i; //Declaração da variável ordenação que irá ordenar os valores e os nomes ao mesmo tempo
	for(i=0;i<tamanho;i++){
		for(j=i+1;j<tamanho;j++) {
			if(!(strcmp(nomes[ordenacao[i]],nomes[ordenacao[j]]) <0)){ //Comparo duas strings e caso uma seja menor que a outra
				auxnomes=ordenacao[i]; // É realizado uma ordenação do tipo BubbleSort
				ordenacao[i]=ordenacao[j];
				ordenacao[j]=auxnomes; } } }
fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
fprintf(file,"\n\t\tO total de saques:\n");
fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
for(i=0;i<tamanho;i++) {
		if(total[ordenacao[i]] != 0)
	fprintf(file,"%s ------------- %.0f Saques(%.1f%%) - Porcentagem de erros-%.1f%%",nomes[ordenacao[i]],total[ordenacao[i]],porcentagem[ordenacao[i]],porcentagemERROS[ordenacao[i]]);
}
}

void MelhoresBloqueadoresQtdPontos(float x[][22],int tamanho, char nomes[][100],FILE *file) { //Função que irá calcular os melhores bloqueadores por quantidade de pontos
	int i,indice[tamanho]; //Declaração das variáveis
	float aux[tamanho],bloqueadores[tamanho]; //Declaração dos vetores
	for(i=0;i<tamanho;i++) {
	bloqueadores[i]=x[i][3]; //Atribuo valores para o vetor bloqueadores
	aux[i]=bloqueadores[i]; }
	BubbleSort(aux,tamanho); //Invocação da função BubbleSort
	AcharIndice(aux,tamanho,indice,bloqueadores); //Invocação a função Achar Indice
			fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
			fprintf(file,"\n\t\tOs 3 melhores bloqueadores por quantidade de pontos\n");
			fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
	for(i=0;i<3;i++) {
		fprintf(file,"\n %s\n",nomes[indice[i]]); }
			}

void MelhoresBloqueadoresQtdBloqueios(float x[][22],int tamanho, char nomes[][100],FILE *file) { //Função que irá calcular os melhores bloqueadores pro bloqueios
	int i,indice[tamanho]; //Declaração das variáveis
	float bloqueios[tamanho],aux[tamanho]; //Declaração das variáveis
	for (i=0;i<tamanho;i++) {
		bloqueios[i]=(x[i][3]+x[i][4]+x[i][5]); //Atribuo valores para  vetor  bloqueios
		aux[i]=bloqueios[i]; }
		BubbleSort(bloqueios,tamanho); //Invoco a função Bubble Sort
		AcharIndice(bloqueios,tamanho,indice,aux); //Invoco a Função AcharrIndice
		fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
		fprintf(file,"\n\t\tOs 3 melhores bloqueadores por quantidade de bloqueios\n");
		fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
		for(i=0;i<3;i++) {
		fprintf(file,"\n %s\n",nomes[indice[i]]); }
			}
	float *totalataque(float x[][22],int tamanho, float ataque[]){ //Função que calcula a quantidade de ataques por jogador
	int i;
	for(i=0;i<tamanho;i++)
	ataque[i]=(x[i][0]+x[i][1]+x[i][2]);
	return ataque;
	}
	float *totalbloqueio(float x[][22],int tamanho,float bloqueio[]){ //Função que calcula a quantidade de bloqueios por jogador
	int i;
	for(i=0;i<tamanho;i++) {
	bloqueio[i]=(x[i][3]+x[i][4]+x[i][5]);}
	return bloqueio;  }
	float *totalsaque(float x[][22],int tamanho,float saque[]){ //Função que calcula a quantidade de saques por jogador
	int i;
	for(i=0;i<tamanho;i++) {
	saque[i]=(x[i][7]+x[i][8]+x[i][9]);}
	return saque;  }
	float *totallevantamento (float x[][22],int tamanho, float levantamento[]){ //Função que calcula a quantidade de levantamentos por jogador
	int i;
	for(i=0;i<tamanho;i++) {
	levantamento[i]=(x[i][11]+x[i][12]+x[i][13]);}
	return levantamento; }
	float *totaldefesa(float x[][22],int tamanho, float defesa[]){ //Função que calcula a quantidade de defesas por jogador
	int i;
	for(i=0;i<tamanho;i++) {
	defesa[i]=(x[i][15]+x[i][16]+x[i][17]);}
	return defesa; }
	float *totalrecepcao(float x[][22],int tamanho, float recepcao[]){ //Função que calcula a quantidade de recepções por jogador
	int i;
	for(i=0;i<tamanho;i++) {
	recepcao[i]=(x[i][19]+x[i][20]+x[i][21]);}
	return recepcao; }

void QtdTotal(float x[][22],int tamanho, char nomes[][100],FILE *file) { //Função que irá calcular a quantidade total
	//Declaração de funções e variáveis//
	float atacar[tamanho],bloquear[tamanho],sacar[tamanho],levantar[tamanho],defender[tamanho],receber[tamanho];
	int i;
	//Invocação das funções
	totalataque(x,tamanho,atacar);
	totalbloqueio(x,tamanho,bloquear);
	totalsaque(x,tamanho,sacar);
	totallevantamento(x,tamanho,levantar);
	totaldefesa(x,tamanho,defender);
	totalrecepcao(x,tamanho,receber);
	//Aqui só irá imprimir os resultados
				fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
	fprintf(file,"\n\t\tTotal de ataques\n");
	fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
	for(i=0;i<tamanho;i++)
		fprintf(file,"\n%s ------------------ %.0f ataque(s)\n",nomes[i],atacar[i]);
				fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
	fprintf(file,"\n\t\tTotal de bloqueios\n");
	fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
	for(i=0;i<tamanho;i++)
		fprintf(file,"\n%s ------------------ %.0f bloqueio(s)\n",nomes[i],bloquear[i]);
				fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
	fprintf(file,"\n\t\tTotal de saques\n");
	fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
	for(i=0;i<tamanho;i++)
		fprintf(file,"\n%s ------------------ %.0f saque(s)\n",nomes[i],sacar [i]);
				fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
	fprintf(file,"\n\t\tTotal de levantamentos\n");
	fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
	for(i=0;i<tamanho;i++)
		fprintf(file,"%s ------------------ %.0f levantamento(s)\n",nomes[i],levantar[i]);
				fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
	fprintf(file,"\n\t\tTotal de defesas\n");
	fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
	for(i=0;i<tamanho;i++)
		fprintf(file,"%s ------------------ %.0f defesa(s)\n",nomes[i],defender[i]);
				fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
	fprintf(file,"\n\t\tTotal de recepcoes\n");
	fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
	for(i=0;i<tamanho;i++)
		fprintf(file,"%s ------------------ %.0f recepcao(oes)\n",nomes[i],receber[i]);
				fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
	}
float *TotaldePontos(float x[][22],int tamanho, char nomes[][100],float total[]) {
	//Função que calcula a quantidade total de pontos, somando todos os pontos
	float atacar[tamanho],bloquear[tamanho],sacar[tamanho],levantar[tamanho],defender[tamanho],receber[tamanho];
	//Invocação das funções
	totalataque(x,tamanho,atacar);
	totalbloqueio(x,tamanho,bloquear);
	totalsaque(x,tamanho,sacar);
	totallevantamento(x,tamanho,levantar);
	totaldefesa(x,tamanho,defender);
	totalrecepcao(x,tamanho,receber);
	int i;
	for(i=0;i<tamanho;i++)
	total[i]=atacar[i]+bloquear[i]+sacar[i]+levantar[i]+defender[i]+receber[i]; //A soma é realizda e armazenada em total
	return total;
}
float *averageperset(float x[][22],int tamanho,float media[]) {
//O Average per set será utilizada no caso de empate. Caso o total empate, o average per set será utilizado como desempate
int i;
for(i=0;i<tamanho;i++)
media[i]=(x[i][6]+x[i][10]+x[i][14]+x[i][18])*10; //É calculado o average per set e armazenado em media
return media;
}

void MeritoJogador(float x[][22],int tamanho, char nomes[][100],FILE *file) { //Função que irá mostrar os pontos do jogador
//Declaração das Funções e variáveis
float totalJogador[tamanho],aux[tamanho],media[tamanho];
int i,j,indice[tamanho];
//Invocação das funções
TotaldePontos(x,tamanho,nomes,totalJogador);
averageperset(x,tamanho,media);
 for(i=0;i<tamanho;i++) {
	for(j=i+1;j<tamanho;j++){
	if(totalJogador[i]==totalJogador[j]) { //Questão de desempate baseado no "average per set"
			if(media[i]>media[j])
			totalJogador[i]=totalJogador[i]+media[i];
			else
			totalJogador[j]=totalJogador[j]+media[j]; }}}
for(i=0;i<tamanho;i++)
aux[i]=totalJogador[i];
BubbleSort(aux,tamanho);
AcharIndice(aux,tamanho,indice,totalJogador);

	fprintf(file,"\n\t\tPontos Conquistados por merito do jogador.\n");
	fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
	for(i=0;i<tamanho;i++) {
		fprintf(file,"\n %s------------------------%.0f pontos\n",nomes[indice[i]],aux[i]); }
	fprintf(file,"\n////////////////////////////////////////////////////////////////////////////////////////////\n");
}
