/*******************************************************************************
Autor: Francisco Tito Silva Santos Pereira (16111203)
Componente Curricular: MI- Algoritmos 
Concluido em: 22/10/2016
Declaro que este código foi elaborado por mim de forma individual e não contém nenhum
trecho de código de outro colega ou de outro autor, tais como provindos de livros e
apostilas, e páginas ou documentos eletrônicos da Internet. Qualquer trecho de código
de outra autoria que não a minha está destacado com uma citação para o autor e a fonte
do código, e estou ciente que estes trechos não serão considerados para fins de avaliação.
******************************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct sist { //Declaração da Struct
int id; 
char tabela[50];
char tipo[100];
char horario[20];
char usuario[50];
struct sist *proximo; //Ponteiro que irá apontar para o próximo
}sistema; //Apelido para a struct 
sistema *InsereElemento(FILE *arquivo,sistema *ponteiro) { //Nessa função irá ser inserido na lista o que está dentro do arquivo
	sistema *novo; //Declaração de um ponteiro do tipo sistema 
	while(!feof(arquivo)) { //Enquanto o arquivo não acabar
		novo=(sistema *) malloc(sizeof(sistema)); //Alocar dinamicamente um espaço para novo
		novo->proximo=ponteiro; //Digo que o proximo de novo aponta para quem ponteiro aponta
		ponteiro=novo; //Digo que ponteiro aponta para novo
		fscanf(arquivo,"%d %s %s %s %s\n",&novo->id,novo->tabela,novo->tipo,novo->horario,novo->usuario); /*Neste caso é colocado
	o conteudo do arquivo dentro da lista*/
	}
	return novo; // Irá retornar a nova lista
}
void busca(sistema *l,char nome[50]) { //Nesta função será listada todas as alterações ocorridas em uma determinada tabela
sistema *aux; //Declaração de um ponteiro do tipo sistema
	for(aux=l;aux!=NULL;aux=aux->proximo){ //Laço for
		if(strcmp(aux->tabela,nome)==0) { //Comparação: O usuario digitará uma tabela,se ela for encontrada, irá ser printada na tela
			printf("Tipo: %s\t Horário: %s\t Usuário: %s\n",aux->tipo,aux->horario,aux->usuario); }
}
}
void busca2(sistema *l,char tipo[100], char tabela[50]) { /*Nesta função será listada todas as alterações de um tipo ocorridas em uma
	determinada tabela */
	sistema *aux; //Declaração de um ponteiro do tipo sistema
	for(aux=l;aux!=NULL;aux=aux->proximo){ //Laço for
		if(strcmp(aux->tipo,tipo)==0 && strcmp(aux->tabela,tabela)==0){ /*Comparação: O usuário irá digitar um "tipo" e uma "tabela",
			se eles forem encontrados, irá ser printado na tela o horario e o usuario*/
			printf("\nHorário: %s\t Usuário: %s\n",aux->horario,aux->usuario);
}
}
}
int QtdBusca(sistema *l,char nome[50]) { //Nessa função irá ser retornado a quantidade de itens com uma informação existem na lista
int numero=0; //Declaração de uma variavel 
sistema* aux=l; //Declaração de um ponteiro do tipo sistema, que aponta para l
for(aux=l;aux!=NULL;aux=aux->proximo){ //Laço for
		if(strcmp(aux->tabela,nome)==0) //Se o conteudo de lista->tabela for o mesmo que "nome"
			numero++; } //Acrescendo 1 a variável numero
return numero; //Retorno a variável numero
}

sistema *removertabela(sistema *l,char nome[50]) { //Nessa função irá ser possível remover todos os registros de uma determinada tabela
sistema *ele=NULL; //Declaração de um ponteiro do tipo sistema
sistema *ponteiro=l; //Declaraçãp de um ponteiro do tipo sistema, e digo que ele irá apontar para a lista 
while(ponteiro!=NULL && strcmp(ponteiro->tabela,nome)!=0) { /*Enquanto o ponteiro não apontar para null e o conteúdo de 
ponteiro->tabela e "nome" não forem iguais*/
	ele=ponteiro; //Digo que ele aponta para ponteiro
	ponteiro=ponteiro->proximo; } //Ponteiro aponta para o seu proximo
if(ponteiro==NULL) //Caso ponteiro apontar para nulo
return l; //A propria lista será retornada, pois não foi encontrada aquela tabela
if(ele==NULL) //Caso "ele" apontar para nulo, ou seja, o conteudo estiver no inicio da lista
l=ponteiro->proximo; //A lista aponta para o proximo de ponteiro
else //Caso não for nenhum desses, ou seja, o que se deseja apagar está entre duas celulas
ele->proximo=ponteiro->proximo;//Digo que o proximo de "ele" aponta para o proximo de ponteiro
free(ponteiro); //É dado um free na variavel ponteiro
return l;} //A lista é retornada

int LocalizaIgual(sistema *ponteiro, sistema *num) { //Com essa função, será possivel saber se o usuario informou uma id já existente
while(ponteiro!=NULL) { //Enquanto o ponteiro não apontar para NULO
	if(ponteiro->id==num->id) //Faz a verificação
		return 1; //Caso já exista aquela id na lista ele irá retornar 1
	else // Caso ainda não achou
		ponteiro=ponteiro->proximo; //O ponteiro aponta para próximo
	}
return 0; //Caso não encontre, ele irá retornar 0
}	

void imprime(sistema *ponteiro) //Função que imprime uma lista
{
	sistema *p; //Declaração de um ponteiro do tipo sistema 
	for(p=ponteiro;p!=NULL;p=p->proximo) //Laço for
	printf("%d\t%s\t%s\t%s\t%s\t\n",p->id,p->tabela,p->tipo,p->horario,p->usuario); //Impressão dos dados
}
sistema* InsereNoFinal(sistema *ponteiro) { //Com essa função o usuário poderá inserir novos itens
	sistema *novo; //Declaração de um ponteiro do tipo novo
	int resultado; //Declaração de uma variavel do tipo int 
novo=(sistema*) malloc(sizeof(sistema)); //Alocando dinamicamente espaço para o ponteiro 
printf("Informe a id da operação\n"); //O usuário irá digitar uma id  
scanf("%d",&novo->id); 
resultado=LocalizaIgual(ponteiro,novo); //Invocação da função LocalizaIgual
if(resultado==1){ //Se já existir aquela id na lista
printf("\nVocê informou um id já existente, portanto o sistema não irá permitir a inclusão do registro\n"); //Aparece o aviso
novo->proximo=ponteiro; }
else{ //Caso contrario, as outras informações serão inseridas
printf("\nInforme o nome da tabela\n"); //O usuário irá digitar o nome da tabela
getchar();
gets(novo->tabela);
printf("\nInforme o tipo da operação\n"); //O usuário irá digitar o tipo da operação
gets(novo->tipo);
printf("\nInforme o horário que a operação aconteceu\n"); //O usuário irá informar o horário que a operação aconteceu
gets(novo->horario);
printf("\nInforme o usuário que efetuou a operação\n"); //O usuário irá informar o usuário que efetuou a operação
gets(novo->usuario);
novo->proximo=ponteiro; //Digo que o proximo de novo irá apontar para ponteiro
}
return novo; //Irá ser retornado o ponteiro novo
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
FILE *file; //Declaração do ponteiro do tipo file 
int def,numero,i,qtds,opcao; //Declaração de variaveis
sistema *ponteiro=NULL; //Declaração de um ponteiro do tipo sistema que aponta para nulo
char dia[9],modelo[]= {"logTabela_"},log[]={".log"},tabela[55],tipo[100],endereco[150]; //Declaração de variaveis do tipo char
//Menu inicial
printf("=============== SEJA-BEM VINDO USUARIO ===============\n");
printf("\nComo você deseja abrir o arquivo?\n");
printf("\n[1]- Digitando somente o nome do arquivo\n");
printf("\n[2]- Digitando o endereço onde se encontra o arquivo\n");
//O usuário irá escolher como deseja abrir o arquivo, digitando somente o nome ou o endereço onde se encontra o arquivo
scanf("%d",&opcao);
switch(opcao) {
case 1: //Caso ele queira abrir pelo nome
printf("\nLembre que o código fonte deve estar no mesmo local que o arquivo!\n");
printf("\nDigite o dia que você deseja saber as informações, modelo: ddMMyyyy (Dia,Mês e Ano\n");
getchar();
fgets(dia,9,stdin);
fflush(stdin); //O buffer é limpado
strcat(dia,log); //A string log é adicionada ao final da string dia
strcat(modelo,dia); //A string dia é adicionada ao final da string modelo
file=fopen(modelo,"r"); //É aberto o arquivo
	if (file==NULL) { //Caso o ponteiro aponte para nulo
		printf("O Arquivo não pode ser aberto,verifique se você ofereceu as informações corretas\n"); //Aparece o aviso
			return 0; } //O programa irá fechar 
ponteiro=InsereElemento(file,ponteiro); //É inserido o conteúdo do arquivo dentro da lista 
break;
case 2: //Caso ele queira abrir pelo endereço de onde se encontra o arquivo
printf("Digite o endereço onde se encontra o arquivo\n");
getchar();
gets(endereco);
file=fopen(endereco,"r"); //O arquivo é aberto
	if (file==NULL) { //Caso o ponteiro aponte para nulo
		printf("O Arquivo não pode ser aberto,verifique se você ofereceu as informações corretas\n"); //Aparece o aviso
			return 0; } //O programa irá fechar 
ponteiro=InsereElemento(file,ponteiro); //É inserido o conteúdo do arquivo dentro da lista
break;
case 3:
printf("Escolha a opção correta!"); //Caso o usuário não escolha a opção correta um aviso aparece
break; }
do{ //Laço de repetição
//Menu principal
printf("O que você gostaria de fazer?\n");
printf("\n [1] - Listar todas as alterações ocorridas em uma determinada tabela do arquivo log\n");
printf("\n [2] - Listar todas as alterações de um tipo ocorridas em uma determinada tabela do arquivo log \n");
printf("\n [3] - Remover todos os registros de uma determinada tabela do arquivo log\n");
printf("\n [4] - Incluir manualmente um novo registro \n");
printf("\n [0] - Sair\n");
scanf("%d",&def);
switch (def) {
	case 0:
	break;
	case 1:	//Caso o usuário deseje listar todas as alterações ocorridas em uma determinada tabela
		printf("Digite a tabela que você deseja saber as alterações\n");
		getchar();
		gets(tabela);
		fflush(stdin);
		system("clear"); //A tela é limpada
		busca(ponteiro,tabela); //É invocada a função
		printf("\n"); //Quebra de linha
	break;
	case 2: //Caso o usuário deseje listar todas as alterações de um tipo ocorridas em uma determinada tabela
		printf("\nDigite o tipo de operação que se deseja saber as alterações:\n");
		getchar();
		gets(tipo);
		printf("\nDigite a tabela que se deseja saber as alterações\n");
		gets(tabela);
		system("clear"); //A tela é limpada
		busca2(ponteiro,tipo,tabela); //É invocada a função
		printf("\n"); //Quebra de linha
	break;
	case 3: //Caso o usuário deseje remover todos os registros de uma determinada tabela
	printf("Digite o nome da tabela que você deseja remover\n");
	getchar();
	gets(tabela);
	numero=QtdBusca(ponteiro,tabela); /*É invocada a função QtdBusca que irá retornar a quantidade de celulas que contem no seu campo
	tabela a mesma tabela que o usuário deseja encontrar, será útil para o laço for a seguir*/
	for(i=0;i<numero;i++) {
	ponteiro=removertabela(ponteiro,tabela); } //Será removida os registros com o nome da tabela
	system("clear"); //A tela é limpada
	printf("A tabela %s foi removida com sucesso, abaixo segue a sua lista com a tabela removida:\n\n",tabela); 
	imprime(ponteiro); //É mostrada ao usuário a lista com a tabela removida
	printf("\n"); //Quebra de linha
	break;
	case 4: //Caso o usuário deseje incluir manualmente um novo registro
	printf("\nDigite a quantidade de registros que você deseja incluir\n"); //Será perguntado quantos registros o usuário quer incluir
	scanf("%d",&qtds); 
	printf("\n"); //Quebra de linha 
	system("clear"); //A tela é limpada 
	for(i=0;i<qtds;i++) { //Laço for
	ponteiro=InsereNoFinal(ponteiro); //É invocada a função InsereNoFinal	
	}
	printf("\nSua nova lista:\n"); //Será mostrada ao usuário a nova lista
	system("clear"); //A tela é limpada
	imprime(ponteiro); 
	printf("\n"); //Quebra de linha 
	break;
	default: //Caso o usuário não digite nenhuma das opções anteriores
	system("clear"); //A tela é limpada
	printf("Escolha uma alternativa correta!"); //É mostrado o aviso
	printf("\n"); //Quebra de linha
	break;
}
}while(def==1 || def==2 || def==3 ||def==4); //Irá se repetir enquanto o usuário ainda quiser, ou seja, quando ele não quiser sair 
fclose(file); //O arquivo é fechado
}
