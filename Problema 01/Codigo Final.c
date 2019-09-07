/*******************************************************************************
Autor: Francisco Tito Silva Santos Pereira (16111203)
Componente Curricular: MI- Algoritmos 
Concluido em: 09/08/2016
Declaro que este código foi elaborado por mim de forma individual e não contém nenhum
trecho de código de outro colega ou de outro autor, tais como provindos de livros e
apostilas, e páginas ou documentos eletrônicos da Internet. Qualquer trecho de código
de outra autoria que não a minha está destacado com uma citação para o autor e a fonte
do código, e estou ciente que estes trechos não serão considerados para fins de avaliação.
******************************************************************************************/
	
	#include <stdio.h>
	int main() {
		//Declaração de variáveis
		int destino,menu,passageiros,idade1,idade2,idade3,idade4,idade5,age2dest1,age3dest1,age4dest1,age5dest1,
		age6dest1,age7dest1,age2dest2,age3dest2,age4dest2,age5dest2,age6dest2,age7dest2,age2dest3,age3dest3,age4dest3,age5dest3,
		age6dest3,age7dest3,age2dest4,age3dest4,age4dest4,age5dest4,age6dest4,age7dest4,age2dest5,age3dest5,age4dest5,age5dest5,
		age6dest5,age7dest5,idadecrianca,idadecrianca2, idadecrianca3, idadecrianca4, idadecrianca5, icri11, icri12, icri13, icri14, icri21, icri22, icri23,
		 icri24,icri31,icri32,icri33,icri34,icri41,icri42,icri43,icri44,icri51,icri52,icri53,icri54, sexo1,sexo2,sexo3,sexo4,sexo5, 
		fem1=0,masc1=0,fem2=0,masc2=0,fem3=0,masc3=0,fem4=0,masc4=0,fem5=0,masc5=0,etnia1,etnia2,etnia3,etnia4,etnia5,trimestre,cri1fem1=0,cri1masc1=0,cri2fem1=0,cri2masc1=0,
		cri1fem3=0,cri1masc3=0,cri2fem3=0,cri2masc3=0,cri3fem3=0,cri3masc3=0,cri4fem3=0,cri4masc3=0,cri4fem4=0,cri4masc4=0,
		cri3fem1=0,cri3masc1=0,cri4fem1=0,cri4masc1=0,cri1fem2=0,cri1masc2=0,cri2fem2=0,cri2masc2=0,cri3fem2=0,cri3masc2=0,
		cri4fem2=0,cri4masc2=0,cri1fem4=0,cri1masc4=0,cri2fem4=0,cri2masc4=0,cri3fem4=0,cri3masc4=0,cri5fem1=0,cri5masc1=0,cri6fem1=0,
		cri6masc1=0,cri7fem1=0,cri7masc1=0,cri8fem1=0,cri8masc1=0,cri5fem2=0,cri5masc2=0,cri6fem2=0,
		cri6masc2=0,cri7fem2=0,cri7masc2=0,cri8fem2=0,cri8masc2=0,cri5fem3=0,cri5masc3=0,cri6fem3=0,
		cri6masc3=0,cri7fem3=0,cri7masc3=0,cri8fem3=0,cri8masc3=0,cri5fem4=0,cri5masc4=0,cri6fem4=0,
		cri6masc4=0,cri7fem4=0,cri7masc4=0,cri8fem4=0,cri8masc4=0,
		cri9fem1=0,cri9masc1=0,cri10fem1=0,cri10masc1=0,cri11fem1=0,cri11masc1=0,cri12fem1=0,cri12masc1=0,
		cri9fem2=0,cri9masc2=0,cri10fem2=0,cri10masc2=0,cri11fem2=0,cri11masc2=0,cri12fem2=0,cri12masc2=0,
		cri9fem3=0,cri9masc3=0,cri10fem3=0,cri10masc3=0,cri11fem3=0,cri11masc3=0,cri12fem3=0,cri12masc3=0,
		cri9fem4=0,cri9masc4=0,cri10fem4=0,cri10masc4=0,cri11fem4=0,cri11masc4=0,cri12fem4=0,cri12masc4=0,
		cri13fem1=0,cri13masc1=0,cri14fem1=0,cri14masc1=0,cri15fem1=0,cri15masc1=0,cri16fem1=0,cri16masc1=0,
		cri13fem2=0,cri13masc2=0,cri14fem2=0,cri14masc2=0,cri15fem2=0,cri15masc2=0,cri16fem2=0,cri16masc2=0,
		cri13fem3=0,cri13masc3=0,cri14fem3=0,cri14masc3=0,cri15fem3=0,cri15masc3=0,cri16fem3=0,cri16masc3=0,
		cri13fem4=0,cri13masc4=0,cri14fem4=0,cri14masc4=0,cri15fem4=0,cri15masc4=0,cri16fem4=0,cri16masc4=0,
		cri17fem1=0,cri17masc1=0,cri18fem1=0,cri18masc1=0,cri19fem1=0,cri19masc1=0,cri20fem1=0,cri20masc1=0,
		cri17fem2=0,cri17masc2=0,cri18fem2=0,cri18masc2=0,cri19fem2=0,cri19masc2=0,cri20fem2=0,cri20masc2=0,
		cri17fem3=0,cri17masc3=0,cri18fem3=0,cri18masc3=0,cri19fem3=0,cri19masc3=0,cri20fem3=0,cri20masc3=0,
		cri17fem4=0,cri17masc4=0,cri18fem4=0,cri18masc4=0,cri19fem4=0,cri19masc4=0,cri20fem4=0,cri20masc4=0,
		dest1tri1=0,dest1tri2=0,
		dest1tri3=0,dest1tri4=0,dest2tri1=0,dest2tri2=0,dest2tri3=0,dest2tri4=0,dest3tri1=0,dest3tri2=0, dest3tri3=0,dest3tri4=0,
		dest4tri1=0,dest4tri2=0,dest4tri3=0,dest4tri4=0,dest5tri1=0,dest5tri2=0,dest5tri3=0,dest5tri4=0,total1,
		total2,total3,total4,total5,total6,total7,total8,total9,total10,total11,total12,total13,total14,total15,total16,total17,total18,
		total19,total20,total21,total22,total23,total24,total25,total26,total27,total28,total29,total30,total31,total32,total33,total34,
		total35,total36,total37,total38,total39,total40,total41,total42,total43,total44,
		menutrim1,menutrim2,menutrim3,menutrim4,opcao1,opcao2,opcao3,opcao4,
		bra1tri1=0,bra1tri2=0,bra1tri3=0,bra1tri4=0,bra2tri1=0,bra2tri2=0,bra2tri3=0,bra2tri4=0,bra3tri1=0,bra3tri2=0,bra3tri3=0,
		bra3tri4=0,bra4tri1=0,bra4tri2=0,bra4tri3=0,bra4tri4=0,bra5tri1=0,bra5tri2=0,bra5tri3=0,bra5tri4=0,ne1tri1=0,ne1tri2=0,
		ne1tri3=0,ne1tri4=0,ne2tri1=0,ne2tri2=0,ne2tri3=0,ne2tri4=0,ne3tri1=0,ne3tri2=0,ne3tri3=0,ne3tri4=0,ne4tri1=0,ne4tri2=0,
		ne4tri3=0,ne4tri4=0,ne5tri1=0,ne5tri2=0,ne5tri3=0,ne5tri4=0,in1tri1=0,in1tri2=0,in1tri3=0,in1tri4=0,in2tri1=0,in2tri2=0,
		in2tri3=0,in2tri4=0,in3tri1=0,in3tri2=0,in3tri3=0,in3tri4=0,in4tri1=0,in4tri2=0,in4tri3=0,in4tri4=0,in5tri1=0,in5tri2=0,
		in5tri3=0,in5tri4=0,pa1tri1=0,pa1tri2=0,pa1tri3=0,pa1tri4=0,pa2tri1=0,pa2tri2=0,pa2tri3=0,pa2tri4=0,pa3tri1=0,pa3tri2=0,
		pa3tri3=0,pa3tri4=0,pa4tri1=0,pa4tri2=0,pa4tri3=0,pa4tri4=0,pa5tri1=0,pa5tri2=0,pa5tri3=0,pa5tri4=0,mu1tri1=0,mu1tri2=0,
		mu1tri3=0,mu1tri4=0,mu2tri1=0,mu2tri2=0,mu2tri3=0,mu2tri4=0,mu3tri1=0,mu3tri2=0,mu3tri3=0,mu3tri4=0,mu4tri1=0,mu4tri2=0,
		mu4tri3=0,mu4tri4=0,mu5tri1=0,mu5tri2=0,mu5tri3=0,mu5tri4=0,cab1tri1=0,cab1tri2=0,cab1tri3=0,cab1tri4=0,cab2tri1=0,cab2tri2=0,
		cab2tri3=0,cab2tri4=0,cab3tri1=0,cab3tri2=0,cab3tri3=0,cab3tri4=0,cab4tri1=0,cab4tri2=0,cab4tri3=0,cab4tri4=0,cab5tri1=0,
		cab5tri2=0,cab5tri3=0,cab5tri4=0,caf1tri1=0,caf1tri2=0,caf1tri3=0,caf1tri4=0,caf2tri1=0,caf2tri2=0,caf2tri3=0,caf2tri4=0,
		caf3tri1=0,caf3tri2=0,caf3tri3=0,caf3tri4=0,caf4tri1=0,caf4tri2=0,caf4tri3=0,caf4tri4=0,caf5tri1=0,caf5tri2=0,caf5tri3=0,
		caf5tri4=0;
		float porc1,porc2,porc3,porc4,porc5,porc6,porc7,porc8,porc9,porc10,porc11,porc12,porc13,porc14,porc15,porc16,porc17,porc18,porc19,
		porc20,porc21,porc22,porc23,porc24,porc25,porc26,porc27,porc28,porc29,porc30,porc31,porc32,porc33,porc34,porc35,porc36,porc37,
		porc38,porc39,porc40,porc41,porc42,porc43,porc44,porc45,porc46,porc47,porc48,porc49,porc50,porc51,porc52,porc53,porc54,porc55,
		porc56,porc57,porc58,porc59,porc60,porc61,porc62,porc63,porc64,porc65,porc66,porc67,porc68,porc69,porc70,porc71,porc72,porc73,
		porc74,porc75,porc76,porc77,porc78,porc79,porc80,porc81,porc82,porc83,porc84,porc85,porc86,porc87,porc88,porc89,porc90,porc91,
		porc92,porc93,porc94,porc95,porc96,porc97,porc98,porc99,porc100,porc101,porc102,porc103,porc104,porc105,porc106,porc107,porc108,
		porc109,porc110,porc111,porc112,porc113,porc114,porc115,porc116,porc117,porc118,porc119,porc120,porc121,porc122,porc123,porc124,
		porc125,porc126,porc127,porc128,porc129,porc130,porc131,porc132,porc133,porc134,porc135,porc136,porc137,porc138,porc139,porc140,
		porc141,porc142,porc143,porc144,porc145,porc146,porc147,porc148,porc149,porc150,porc151,porc152,porc153,porc154,porc156,
		porc157,porc158,porc159,porc160,porc161,porc162,porc163,porc164,porc165,porc166,porc167,porc168,porc169,porc170,porc171,porc172,
		porc173,porc174,porc175,porc176,porc177,porc178,porc179,porc180,porc181,porc182,porc183,porc184,porc185,porc186,porc187,
		porc188,porc189,porc190,porc191,porc192,porc193,porc194,porc195,porc196,porc197,porc198,porc199,porc200,porc201,porc202,
		porc203,porc204,porc205,porc206,porc207,porc208,porc209,porc210,porc211,porc212,porc213,porc214,porc215,porc216,porc217,
		porc218,porc219,porc220,porc221,porc222,porc223,porc224,porc225,porc226,porc227,porc228,porc229,porc230,porc231,porc232,
		porc233,porc234,porc235,porc236,porc237,porc238,porc239,porc240,porc241,porc242,porc243,porc244,porc245,porc246,porc247,
		porc248,porc249,porc250,porc251,porc252,porc253,porc254,porc255,porc256,porc257,porc258,porc259,porc260,porc261,porc262,
		porc263,porc264,porc265,porc266,porc267,porc268,porc269,porc270,porc271,porc272,porc273,porc274,porc275,porc276,porc277,
		porc278,porc279,porc280,porc281,porc282,porc283,porc284,porc285,porc286,porc287,porc288,porc289,porc290,porc291,porc292,
		porc293,porc294,porc295,porc296,porc297,porc298,porc299,porc300,porc301,porc302,porc303,porc304,porc305,porc306,porc307,
		porc308,porc309,porc310,porc311,porc7a,porc7b,porc7c,porc7d,porc7e,porc7f,porc7g,porc7h,porc7i,porc7j;

			for (trimestre=0;trimestre<=3;trimestre++) { //Com essa repetição, farei com que o código se repita 4 vezes (1 ano)
			
		printf("\nVOE SEM MEDO\n");
		printf("Bem vindo administrador! Digite a quantidade de passageiros para o voo por trimestre\n");
		// Aqui em cima tem a parte do administrador, o qual irá determinar a quantidade de passageiros tem um voo no trimestre
		scanf("%d",&passageiros);
		int cont=0; //Esse cont será utilizado para ser testado com a variavel passageiros
		while (cont<passageiros) { /*Enquanto o cont for menor que a qtd de passageiros digitadas pelo administrador ,
			ou seja vai determinar quantas vezes vai se repetir os comandos abaixo; */
			cont++;
		//Menu de compra - agora o passageiro que irá utilizar esse menu
		printf("\n\nSeja bem vindo(a) à companhia aérea VOE SEM MEDO! O que você gostaria de fazer?!\n");
		printf("[0]- Comprar Passagens\n[1]- Sair\n");
		scanf("%d",&menu); //A variavel que irá armazenar a opção do passageiro
			switch(menu) { //Com essa variavel o passageiro pode escolher 0 ou 1
				case 0: // Caso seja 0 ele vai comprar as passagens
				
		printf("\n################################################################################\n");
		printf("Qual o seu destino? \n [1]- Salvador-São Paulo\n [2]- Salvador- Recife\n [3]- Salvador- Manaus\n");
		printf(" [4]- Salvador-Porto Alegre\n [5]- Salvador- Rio de Janeiro\n\n");	
		//Aqui o passageiro irá escolher o seu destino 
		scanf("%d",&destino); 
		  if(destino==1) { //Caso o destino escolhido seja o 1:
			printf("\nSeu destino é Salvador-São Paulo\n");
				if(trimestre==0) { //Caso esteja no primeiro trimestre
					dest1tri1++; } //Irá acrescentar 1 ao dest1tri1 (irá ser utilizado para o relatório)
				else if(trimestre==1) { // Caso esteja no segundo trimestre
					dest1tri2++; } //Irá acrescentar 1 ao dest1tri2 (irá ser utilizado para o relatório)
				else if(trimestre==2) { //Caso esteja no terceiro semestre
					dest1tri3++; } //Irá acrescentar 1 ao dest1tri3 (irá ser utilizado para o relatório)
				else if(trimestre==3) { //Caso esteja no quarto semestre
					dest1tri4++; } //Irá acrescentar 1 ao dest1tri4 (irá ser utilizado para o relatório)
			  printf("\n****************************************************************************\n");
	   printf("Qual é a sua faixa etária? \n[1]- 0 a 12 anos\n[2]- 13 a 19 anos\n[3]- 20 a 29 anos\n[4]- 30 a 40 anos\n");
	   printf("[5]- 41 a 50 anos\n[6]- 51 a 60 anos\n[7]- Mais de 61 anos\n");
	   //Aqui o passageiro irá declarar a sua faixa etária
	   scanf("%d",&idade1);
			if(idade1==1) {
			 //Caso a faixa etária escolhida seja a 1, irá ser feita uma nova pergunta:
			printf("\n****************************************************************************\n");
			printf("\nVocê é uma criança, nos informe novamente qual faixa etária você aparece:\n[0]- 0 a 24 meses(colo)\n"); 
			printf("[1]- 0 a 24 meses(assento)\n[2]- 2 a 10 anos\n[3]- 10 a 12 anos\n");
		scanf("%d",&idadecrianca); 
			if(idadecrianca==0) { //Caso a criança esteja enre 0 a 24 meses no colo.
				icri11=0; //icri11 será utilizada para o relatório
				icri11++;
			} 
			else if(idadecrianca==1) { //Caso a criança esteja enre 0 a 24 meses no assento.
				icri12=0; //icri12 será utilizada para o relatório
				icri12++;
			}
			else if(idadecrianca==2) { //Caso a criança esteja entre 2 e 10 anos.
				icri13=0; //icri13 será utilizada para o relatório
				icri13++;
			}
			else { // Caso a criança esteja entre 10 e 12 anos.
				icri14=0; //icri14 será utilizada para o relatório
				icri14++;
			}	
		}
		else if(idade1==2) { //Caso a idade da pessoa esteja entre 13 e 19 anos
			age2dest1=0;
			age2dest1++;
		}
		else if(idade1==3) { // Caso a idade da pessoa esteja entre 20 e 29 anos
			age3dest1=0;
			age3dest1++;
		}
		else if(idade1==4) { // Caso a idade da pessoas esteja entre 30 e 40 anos
			age4dest1=0;
			age4dest1++;
		}
		else if(idade1==5) { // Caso a idade da pessoa esteja entre 41 e 50 anos
			age5dest1=0;
			age5dest1++;
		}
		else if(idade1==6) { // Caso a idade da pessoas esteja entre 51 a 60 anos
			age6dest1=0;
			age6dest1++;
		}
		else { //Caso a pessoa tenha mais de 60 anos
			age7dest1=0;
			age7dest1++;
		}
				printf("\n################################################################################\n");
				printf("\nInforme seu sexo:\n[1]- Feminino\n[2]- Masculino\n");
				//Aqui a pessoa irá dizer o seu sexo
		scanf("%d",&sexo1);
			if(sexo1==1){ //Caso o sexo da pessoa seja feminino
				fem1++;
			}
			else if(sexo1==2) { //Caso o sexo da pessoa seja masculino
				masc1++;
				} 
				//Agora vem a parte que é necessaria para o relatorio: envolve sexo e idade da criança
					if(trimestre==0) { 
						if(idadecrianca==0 && sexo1==1) {
						cri1fem1++;  } // Crianças de 0 a 24 meses de idade no colo do sexo feminino do primeiro trimestre
						else if(idadecrianca==0 && sexo1==2) {
						cri1masc1++; } // Crianças de 0 a 24 meses de idade no colo do sexo masculino do primeiro trimestre
						else if(idadecrianca==1 && sexo1==1) {
						cri2fem1++; } // Crianças de 0 a 24 meses de idade no assento do sexo feminino do primeiro trimestre
						else if(idadecrianca==1 && sexo1==2) {
						cri2masc1++; } // Crianças de 0 a 24 meses de idade no assento do sexo masculino do primeiro trimestre
						else if(idadecrianca==2 && sexo1==1) {
						cri3fem1++; } // Crianças de 2 a 10 anos do sexo feminino do primeiro trimestre
						else if(idadecrianca==2 && sexo1==2) {
						cri3masc1++; } // Crianças de 2 a 10 anos do sexo masculino do primeiro trimestre
						else if(idadecrianca==3 && sexo1==1) {
						cri4fem1++; } // Crianças de 10 a 12 anos do sexo feminino do primeiro trimestre
						else if(idadecrianca==3 && sexo1==2) {
						cri4masc1++; } // Crianças de 10 a 12 anos do sexo masculino do primeiro trimestre
					}
					else if(trimestre==1) {
						if(idadecrianca==0 && sexo1==1) {
						cri1fem2++;  } // Crianças de 0 a 24 meses de idade no colo do sexo feminino do segundo trimestre
						else if(idadecrianca==0 && sexo1==2) {
						cri1masc2++; } // Crianças de 0 a 24 meses de idade no colo do sexo masculino do segundo trimestre
						else if(idadecrianca==1 && sexo1==1) {
						cri2fem2++; } // Crianças de 0 a 24 meses de idade no assento do sexo feminino do segundo trimestre
						else if(idadecrianca==1 && sexo1==2) {
						cri2masc2++; } // Crianças de 0 a 24 meses de idade no assento do sexo masculino do segundo trimestre
						else if(idadecrianca==2 && sexo1==1) {
						cri3fem2++; } // Crianças de 2 a 10 anos do sexo feminino do segundo trimestre
						else if(idadecrianca==2 && sexo1==2) {
						cri3masc2++; } // Crianças de 2 a 10 anos do sexo masculino do segundo trimestre
						else if(idadecrianca==3 && sexo1==1) {
						cri4fem2++; } // Crianças de 10 a 12 anos do sexo feminino do segundo trimestre
						else if(idadecrianca==3 && sexo1==2) {
						cri4masc2++; } // Crianças de 10 a 12 anos do sexo masculino do segundo trimestre
										}
					else if(trimestre==2) {
						if(idadecrianca==0 && sexo1==1) {
						cri1fem3++;  } // Crianças de 0 a 24 meses de idade no colo do sexo feminino do terceiro trimestre
						else if(idadecrianca==0 && sexo1==2) {
						cri1masc3++; } // Crianças de 0 a 24 meses de idade no colo do sexo masculino do terceiro trimestre
						else if(idadecrianca==1 && sexo1==1) {
						cri2fem3++; } // Crianças de 0 a 24 meses de idade no assento do sexo feminino do terceiro trimestre
						else if(idadecrianca==1 && sexo1==2) {
						cri2masc3++; } // Crianças de 0 a 24 meses de idade no assento do sexo masculino do terceiro trimestre
						else if(idadecrianca==2 && sexo1==1) {
						cri3fem3++; } // Crianças de 2 a 10 anos do sexo feminino do terceiro trimestre
						else if(idadecrianca==2 && sexo1==2) {
						cri3masc3++; } // Crianças de 2 a 10 anos do sexo masculino do terceiro trimestre
						else if(idadecrianca==3 && sexo1==1) {
						cri4fem3++; } // Crianças de 10 a 12 anos do sexo feminino do terceiro trimestre
						else if(idadecrianca==3 && sexo1==2) {
						cri4masc3++; } // Crianças de 10 a 12 anos do sexo masculino do terceiro trimestre
					}
				else if(trimestre==3) {
					if(idadecrianca==0 && sexo1==1) {
						cri1fem4++;  } // Crianças de 0 a 24 meses de idade no colo do sexo feminino do quarto trimestre
						else if(idadecrianca==0 && sexo1==2) {
						cri1masc4++; } // Crianças de 0 a 24 meses de idade no colo do sexo masculino do quarto trimestre
						else if(idadecrianca==1 && sexo1==1) {
						cri2fem4++; } // Crianças de 0 a 24 meses de idade no assento do sexo feminino do quarto trimestre
						else if(idadecrianca==1 && sexo1==2) {
						cri2masc4++; } // Crianças de 0 a 24 meses de idade no assento do sexo masculino do quarto trimestre
						else if(idadecrianca==2 && sexo1==1) {
						cri3fem4++; } // Crianças de 2 a 10 anos do sexo feminino do quarto trimestre
						else if(idadecrianca==2 && sexo1==2) {
						cri3masc4++; } // Crianças de 2 a 10 anos do sexo masculino do quarto trimestre
						else if(idadecrianca==3 && sexo1==1) {
						cri4fem4++; } // Crianças de 10 a 12 anos do sexo feminino do quarto trimestre
						else if(idadecrianca==3 && sexo1==2) {
						cri4masc4++; } // Crianças de 10 a 12 anos do sexo masculino do quarto trimestre
					}
					
			printf("\n################################################################################\n");
			printf("Informe a sua etnia:\n[1]-Branco\n[2]-Negro\n[3]-Indigena\n[4]-Pardo\n[5]-Mulato\n[6]-Caboclo\n[7]-Cafuzo\n");
			// Agora o passageiro irá informar a sua etnia
			scanf("%d",&etnia1);
				if(etnia1==1) { //Caso a etnia seja Branco
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
					bra1tri1++; 
					}
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
					bra1tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
					bra1tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
					bra1tri4++; }
			}
				else if(etnia1==2) { //Caso a etnia seja Negro
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
					ne1tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
					ne1tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
					ne1tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
					ne1tri4++; }
				}
				else if(etnia1==3) { //Caso a etnia seja indigena
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
						in1tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
						in1tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
						in1tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
						in1tri4++; }
				}
				else if(etnia1==4) { //Caso a etnia seja pardo
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
					pa1tri1++;}
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
					pa1tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
					pa1tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
					pa1tri4++; }
				}
				else if(etnia1==5) { //Caso a etnia seja mulato
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
						mu1tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
						mu1tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
						mu1tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
						mu1tri4++;}
				}
				else if(etnia1==6) { //Caso a etnia seja caboclo
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
						cab1tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
						cab1tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
						cab1tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
						cab1tri4++; }
				}
				else { //Caso a etnia seja Cafuzo
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
						caf1tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
						caf1tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
						caf1tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
						caf1tri4++; }
				}
			printf("\n****************************************************************************\n");
			printf("\nObrigado por suas informações. Boa viagem e volte sempre!\n");
			//Fim do armazenamento de dados do voo 1
					
		  }
		 else if(destino==2) { //Caso o destino escolhido seja o 2:
			printf("\nSeu destino é Salvador-Recife");
			if(trimestre==0) { //Caso esteja no primeiro trimestre
					dest2tri1++; } //Irá acrescentar 1 ao dest2tri1 (irá ser utilizado para o relatório)
				else if(trimestre==1) { //Caso esteja no segundo trimestre
					dest2tri2++; }//Irá acrescentar 1 ao dest2tri1 (irá ser utilizado para o relatório)
				else if(trimestre==2) { //Caso esteja no terceiro trimestre
					dest2tri3++; }//Irá acrescentar 1 ao dest2tri1 (irá ser utilizado para o relatório)
				else if(trimestre==3) { //Caso esteja no quarto trimestre
					dest2tri4++; }//Irá acrescentar 1 ao dest2tri1 (irá ser utilizado para o relatório)	
			printf("\n################################################################################\n");
			printf("Qual é a sua faixa etária? \n[1]- 0 a 12 anos\n[2]- 13 a 19 anos\n[3]- 20 a 29 anos\n[4]- 30 a 40 anos\n");
			printf("[5]- 41 a 50 anos\n[6]- 51 a 60 anos\n[7]- Mais de 61 anos\n");
				   //Aqui o passageiro irá declarar a sua faixa etária
	   scanf("%d",&idade2);
			if(idade2==1) { //Caso a faixa etária escolhida seja a 1, irá ser feita uma nova pergunta:
			printf("\n****************************************************************************\n");
			printf("\nVocê é uma criança, nos informe novamente qual faixa etária você aparece:\n[0]- 0 a 24 meses(colo)\n"); 
			printf("[1]- 0 a 24 meses(assento)\n[2]- 2 a 10 anos\n[3]- 10 a 12 anos\n");
		scanf("%d",&idadecrianca2);
			if(idadecrianca2==0) { //Caso a criança esteja enre 0 a 24 meses no colo.
				icri21=0; //icri21 será utilizada para o relatório
				icri21++;
			}
			else if(idadecrianca2==1) { //Caso a criança esteja enre 0 a 24 meses no assento
				icri22=0; //icri22 será utilizada para o relatório
				icri22++;
			}
			else if(idadecrianca2==2) { //Caso a criança esteja entre 2 e 10 anos.
				icri23=0; //icri23 será utilizada para o relatório
				icri23++;
			}
			else if(idadecrianca2==3) { //Caso a criança esteja entre 10 e 12 anos.
				icri24=0; //icri24 será utilizada para o relatório
				icri24++;
			}	
		}
		else if(idade2==2) { //Caso a idade da pessoa esteja entre 13 e 19 anos
			age2dest2=0;
			age2dest2++;
		}
		else if(idade2==3) { // Caso a idade da pessoa esteja entre 20 e 29 anos
			age3dest2=0;
			age3dest2++;
		}
		else if(idade2==4) { // Caso a idade da pessoas esteja entre 30 e 40 anos
			age4dest2=0;
			age4dest2++;
		}
		else if(idade2==5) { // Caso a idade da pessoa esteja entre 41 e 50 anos
			age5dest2=0;
			age5dest2++;
		}
		else if(idade2==6) { // Caso a idade da pessoas esteja entre 51 a 60 anos
			age6dest2=0;
			age6dest2++;
		}
		else {  //Caso a pessoa tenha mais de 60 anos
			age7dest2=0;
			age7dest2++;
		}
				printf("\n################################################################################\n");
				printf("\nInforme seu sexo:\n[1]- Feminino\n[2]- Masculino\n");
				//Aqui a pessoa irá dizer o seu sexo
		scanf("%d",&sexo2);
			if(sexo2==1){ //Caso o sexo da pessoa seja feminino
				fem2++;
			}
			else{ //Caso o sexo da pessoa seja masculino
				masc2++;
				}
				//Agora vem a parte que é necessaria para o relatorio: envolve sexo e idade da criança
				if(trimestre==0) {
						if(idadecrianca2==0 && sexo2==1) {
						cri5fem1++;  } // Crianças de 0 a 24 meses de idade no colo do sexo feminino do primeiro trimestre
						else if(idadecrianca2==0 && sexo2==2) {
						cri5masc1++; } // Crianças de 0 a 24 meses de idade no colo do sexo masculino do primeiro trimestre
						else if(idadecrianca2==1 && sexo2==1) {
						cri6fem1++; } // Crianças de 0 a 24 meses de idade no assento do sexo feminino do primeiro trimestre
						else if(idadecrianca2==1 && sexo2==2) {
						cri6masc1++; } // Crianças de 0 a 24 meses de idade no assento do sexo masculino do primeiro trimestre
						else if(idadecrianca2==2 && sexo2==1) {
						cri7fem1++; } // Crianças de 2 a 10 anos do sexo feminino do primeiro trimestre
						else if(idadecrianca2==2 && sexo2==2) {
						cri7masc1++; } // Crianças de 2 a 10 anos do sexo masculino do primeiro trimestre
						else if(idadecrianca2==3 && sexo2==1) {
						cri8fem1++; } // Crianças de 10 a 12 anos do sexo feminino do primeiro trimestre
						else if(idadecrianca2==3 && sexo2==2) {
						cri8masc1++; } // Crianças de 10 a 12 anos do sexo masculino do primeiro trimestre
					}
					else if(trimestre==1) {
						if(idadecrianca2==0 && sexo2==1) {
						cri5fem2++;  } // Crianças de 0 a 24 meses de idade no colo do sexo feminino do segundo trimestre
						else if(idadecrianca2==0 && sexo2==2) {
						cri5masc2++; } // Crianças de 0 a 24 meses de idade no colo do sexo masculino do segundo trimestre
						else if(idadecrianca2==1 && sexo2==1) {
						cri6fem2++; } // Crianças de 0 a 24 meses de idade no assento do sexo feminino do segundo trimestre
						else if(idadecrianca2==1 && sexo2==2) {
						cri6masc2++; } // Crianças de 0 a 24 meses de idade no assento do sexo masculino do segundo trimestre
						else if(idadecrianca2==2 && sexo2==1) {
						cri7fem2++; } // Crianças de 2 a 10 anos do sexo feminino do segundo trimestre
						else if(idadecrianca2==2 && sexo2==2) {
						cri7masc2++; } // Crianças de 2 a 10 anos do sexo masculino do segundo trimestre
						else if(idadecrianca2==3 && sexo2==1) {
						cri8fem2++; } // Crianças de 10 a 12 anos do sexo feminino do segundo trimestre
						else if(idadecrianca2==3 && sexo2==2) {
						cri8masc2++; } // Crianças de 10 a 12 anos do sexo masculino do segundo trimestre
										}
					else if(trimestre==2) {
						if(idadecrianca2==0 && sexo2==1) {
						cri5fem3++;  } // Crianças de 0 a 24 meses de idade no colo do sexo feminino do terceiro trimestre
						else if(idadecrianca2==0 && sexo2==2) {
						cri5masc3++; } // Crianças de 0 a 24 meses de idade no colo do sexo masculino do terceiro trimestre
						else if(idadecrianca2==1 && sexo2==1) {
						cri6fem3++; } // Crianças de 0 a 24 meses de idade no assento do sexo feminino do terceiro trimestre
						else if(idadecrianca2==1 && sexo2==2) {
						cri6masc3++; } // Crianças de 0 a 24 meses de idade no assento do sexo masculino do terceiro trimestre
						else if(idadecrianca2==2 && sexo2==1) {
						cri7fem3++; } // Crianças de 2 a 10 anos do sexo feminino do terceiro trimestre
						else if(idadecrianca2==2 && sexo2==2) {
						cri7masc3++; } // Crianças de 2 a 10 anos do sexo masculino do terceiro trimestre
						else if(idadecrianca2==3 && sexo2==1) {
						cri8fem3++; } // Crianças de 10 a 12 anos do sexo feminino do terceiro trimestre
						else if(idadecrianca2==3 && sexo2==2) {
						cri8masc3++; } // Crianças de 10 a 12 anos do sexo masculino do terceiro trimestre
					}
				else if(trimestre==3) {
					if(idadecrianca2==0 && sexo2==1) {
						cri5fem4++;  } // Crianças de 0 a 24 meses de idade no colo do sexo feminino do quarto trimestre
						else if(idadecrianca2==0 && sexo2==2) {
						cri5masc4++; } // Crianças de 0 a 24 meses de idade no colo do sexo masculino do quarto trimestre
						else if(idadecrianca2==1 && sexo2==1) {
						cri6fem4++; } // Crianças de 0 a 24 meses de idade no assento do sexo feminino do quarto trimestre
						else if(idadecrianca2==1 && sexo2==2) {
						cri6masc4++; } // Crianças de 0 a 24 meses de idade no assento do sexo masculino do quarto trimestre
						else if(idadecrianca2==2 && sexo2==1) {
						cri7fem4++; } // Crianças de 2 a 10 anos do sexo feminino do quarto trimestre
						else if(idadecrianca2==2 && sexo2==2) {
						cri7masc4++; } // Crianças de 2 a 10 anos do sexo masculino do quarto trimestre
						else if(idadecrianca2==3 && sexo2==1) {
						cri8fem4++; } // Crianças de 10 a 12 anos do sexo feminino do quarto trimestre
						else if(idadecrianca2==3 && sexo2==2) {
						cri8masc4++; } // Crianças de 10 a 12 anos do sexo masculino do quarto trimestre
					}
			printf("\n################################################################################\n");
			printf("Informe a sua etnia:\n[1]-Branco\n[2]-Negro\n[3]-Indigena\n[4]-Pardo\n[5]-Mulato\n[6]-Caboclo\n[7]-Cafuzo\n");
			// Agora o passageiro irá informar a sua etnia
			scanf("%d",&etnia2);
				if(etnia2==1) { //Caso a etnia seja Branco
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
					bra2tri1++;
					}
					else if(trimestre==1) {//Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
					bra2tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
					bra2tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
					bra2tri4++; }
			}
				else if(etnia2==2) { //Caso a etnia seja Negro
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
					ne2tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
					ne2tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
					ne2tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
					ne2tri4++; }
				}
				else if(etnia2==3) { //Caso a etnia seja indigena
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
						in2tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
						in2tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
						in2tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
						in2tri4++; }
				}
				else if(etnia2==4) { //Caso a etnia seja pardo
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
					pa2tri1++;}
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
					pa2tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
					pa2tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
					pa2tri4++; }
				}
				else if(etnia2==5) { //Caso a etnia seja mulato
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
						mu2tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
						mu2tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
						mu2tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
						mu2tri4++;}
				}
				else if(etnia2==6) {  //Caso a etnia seja caboclo
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
						cab2tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
						cab2tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
						cab2tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
						cab2tri4++; }
				}
				else { //Caso a etnia seja Cafuzo
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
						caf2tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
						caf2tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
						caf2tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
						caf2tri4++; }
				}
			printf("\n****************************************************************************\n");
			printf("\nObrigado por suas informações. Boa viagem e volte sempre!\n"); 			
		  }
		  //Fim do armazenamento de dados do voo 2
		  
		  else if(destino==3) { //Caso o destino escolhido seja o 3:
			printf("\nSeu destino é Salvador-Manaus");
			if(trimestre==0) { //Caso esteja no primeiro trimestre
					dest3tri1++; } //Irá acrescentar 1 ao dest3tri1 (irá ser utilizado para o relatório)
				else if(trimestre==1) { //Caso esteja no segundo trimestre
					dest3tri2++; } //Irá acrescentar 1 ao dest3tri2 (irá ser utilizado para o relatório)
				else if(trimestre==2) { //Caso esteja no terceiro trimestre
					dest3tri3++; } //Irá acrescentar 1 ao dest3tri3 (irá ser utilizado para o relatório)
				else if(trimestre==3) { //Caso esteja no quarto trimestre
					dest3tri4++; } //Irá acrescentar 1 ao des31tri4 (irá ser utilizado para o relatório)

			printf("\n################################################################################\n");
			printf("Qual é a sua faixa etária? \n[1]- 0 a 12 anos\n[2]- 13 a 19 anos\n[3]- 20 a 29 anos\n[4]- 30 a 40 anos\n");
			printf("[5]- 41 a 50 anos\n[6]- 51 a 60 anos\n[7]- Mais de 61 anos\n");
			//Aqui o passageiro irá declarar a sua faixa etária
	   scanf("%d",&idade3);
			if(idade3==1) {
			//Caso a faixa etária escolhida seja a 1, irá ser feita uma nova pergunta:
			printf("\n****************************************************************************\n");
			printf("\nVocê é uma criança, nos informe novamente qual faixa etária você aparece:\n[0]- 0 a 24 meses(colo)\n"); 
			printf("[1]- 0 a 24 meses(assento)\n[2]- 2 a 10 anos\n[3]- 10 a 12 anos\n");
		scanf("%d",&idadecrianca3);
			if(idadecrianca3==0) { //Caso a criança esteja enre 0 a 24 meses no colo.
				icri31=0; //icri31 será utilizada para o relatório
				icri31++;
			}
			else if(idadecrianca3==1) { //Caso a criança esteja enre 0 a 24 meses no assento
				icri32=0; //icri32 será utilizada para o relatório
				icri32++;
			}
			else if(idadecrianca3==2) { //Caso a criança esteja entre 2 e 10 anos.
				icri33=0; //icri33 será utilizada para o relatório
				icri33++;
			}
			else { //Caso a criança esteja entre 10 e 12 anos.
				icri34=0; //icri34 será utilizada para o relatório
				icri34++;
			}	
		}
		else if(idade3==2) { //Caso a idade da pessoa esteja entre 13 e 19 anos
			age2dest3=0;
			age2dest3++;
		}
		else if(idade3==3) { // Caso a idade da pessoa esteja entre 20 e 29 anos
			age3dest3=0;
			age3dest3++;
		}
		else if(idade3==4) { // Caso a idade da pessoa esteja entre 30 e 40 anos
			age4dest3=0;
			age4dest3++;
		}
		else if(idade3==5) { // Caso a idade da pessoa esteja entre 41 e 50 anos
			age5dest3=0;
			age5dest3++;
		}
		else if(idade3==6) { // Caso a idade da pessoa esteja entre 51 a 60 anos
			age6dest3=0;
			age6dest3++;
		}
		else { //Caso a pessoa tenha mais de 60 anos
			age7dest3=0;
			age7dest3++;
		}
				printf("\n################################################################################\n");
				printf("\nInforme seu sexo:\n[1]- Feminino\n[2]- Masculino\n");
				//Aqui a pessoa irá dizer o seu sexo
		scanf("%d",&sexo3);
			if(sexo3==1){ //Caso o sexo da pessoa seja feminino
				fem3++;
			}
			else if (sexo3==2) { //Caso o sexo da pessoa seja masculino
				masc3++;
				}
				//Agora vem a parte que é necessaria para o relatorio: envolve sexo e idade da criança
					if(trimestre==0) {
						if(idadecrianca3==0 && sexo3==1) {
						cri9fem1++;  } // Crianças de 0 a 24 meses de idade no colo do sexo feminino do primeiro trimestre
						else if(idadecrianca3==0 && sexo3==2) {
						cri9masc1++; } // Crianças de 0 a 24 meses de idade no colo do sexo masculino do primeiro trimestre
						else if(idadecrianca3==1 && sexo3==1) {
						cri10fem1++; } // Crianças de 0 a 24 meses de idade no assento do sexo feminino do primeiro trimestre
						else if(idadecrianca3==1 && sexo3==2) {
						cri10masc1++; } // Crianças de 0 a 24 meses de idade no assento do sexo masculino do primeiro trimestre
						else if(idadecrianca3==2 && sexo3==1) {
						cri11fem1++; } // Crianças de 2 a 10 anos do sexo feminino do primeiro trimestre
						else if(idadecrianca3==2 && sexo3==2) {
						cri11masc1++; } // Crianças de 2 a 10 anos do sexo masculino do primeiro trimestre
						else if(idadecrianca3==3 && sexo3==1) {
						cri12fem1++; } // Crianças de 10 a 12 anos do sexo feminino do primeiro trimestre
						else if(idadecrianca3==3 && sexo3==2) {
						cri12masc1++; } // Crianças de 10 a 12 anos do sexo masculino do primeiro trimestre
					}
					else if(trimestre==1) {
						if(idadecrianca3==0 && sexo3==1) {
						cri9fem2++;  } // Crianças de 0 a 24 meses de idade no colo do sexo feminino do segundo trimestre
						else if(idadecrianca3==0 && sexo3==2) {
						cri9masc2++; } // Crianças de 0 a 24 meses de idade no colo do sexo masculino do segundo trimestre
						else if(idadecrianca3==1 && sexo3==1) {
						cri10fem2++; } // Crianças de 0 a 24 meses de idade no assento do sexo feminino do segundo trimestre
						else if(idadecrianca3==1 && sexo3==2) {
						cri10masc2++; } // Crianças de 0 a 24 meses de idade no assento do sexo masculino do segundo trimestre
						else if(idadecrianca3==2 && sexo3==1) {
						cri11fem2++; } // Crianças de 2 a 10 anos do sexo feminino do segundo trimestre
						else if(idadecrianca3==2 && sexo3==2) {
						cri11masc2++; } // Crianças de 2 a 10 anos do sexo masculino do segundo trimestre
						else if(idadecrianca3==3 && sexo3==1) {
						cri12fem2++; } // Crianças de 10 a 12 anos do sexo feminino do segundo trimestre
						else if(idadecrianca3==3 && sexo3==2) {
						cri12masc2++; } // Crianças de 10 a 12 anos do sexo masculino do segundo trimestre
										}
					else if(trimestre==2) {
						if(idadecrianca3==0 && sexo3==1) {
						cri9fem3++;  } // Crianças de 0 a 24 meses de idade no colo do sexo feminino do terceiro trimestre
						else if(idadecrianca3==0 && sexo3==2) {
						cri9masc3++; } // Crianças de 0 a 24 meses de idade no colo do sexo masculino do terceiro trimestre
						else if(idadecrianca3==1 && sexo3==1) {
						cri10fem3++; } // Crianças de 0 a 24 meses de idade no assento do sexo feminino do terceiro trimestre
						else if(idadecrianca3==1 && sexo3==2) {
						cri10masc3++; } // Crianças de 0 a 24 meses de idade no assento do sexo masculino do terceiro trimestre
						else if(idadecrianca3==2 && sexo3==1) {
						cri11fem3++; } // Crianças de 2 a 10 anos do sexo feminino do terceiro trimestre
						else if(idadecrianca3==2 && sexo3==2) {
						cri11masc3++; } // Crianças de 2 a 10 anos do sexo masculino do terceiro trimestre
						else if(idadecrianca3==3 && sexo3==1) {
						cri12fem3++; } // Crianças de 10 a 12 anos do sexo feminino do terceiro trimestre
						else if(idadecrianca3==3 && sexo3==2) {
						cri12masc3++; } // Crianças de 10 a 12 anos do sexo masculino do terceiro trimestre
					}
				else if(trimestre==3) {
					if(idadecrianca3==0 && sexo3==1) {
						cri9fem1++;  } // Crianças de 0 a 24 meses de idade no colo do sexo feminino do quarto trimestre
						else if(idadecrianca3==0 && sexo3==2) {
						cri9masc1++; } // Crianças de 0 a 24 meses de idade no colo do sexo masculino do quarto trimestre
						else if(idadecrianca3==1 && sexo3==1) {
						cri10fem1++; } // Crianças de 0 a 24 meses de idade no assento do sexo feminino do quarto trimestre
						else if(idadecrianca3==1 && sexo3==2) {
						cri10masc1++; } // Crianças de 0 a 24 meses de idade no assento do sexo masculino do quarto trimestre
						else if(idadecrianca3==2 && sexo3==1) {
						cri11fem1++; } // Crianças de 2 a 10 anos do sexo feminino do quarto trimestre
						else if(idadecrianca3==2 && sexo3==2) {
						cri11masc1++; } // Crianças de 2 a 10 anos do sexo masculino do quarto trimestre
						else if(idadecrianca3==3 && sexo3==1) {
						cri12fem1++; } // Crianças de 10 a 12 anos do sexo feminino do quarto trimestre
						else if(idadecrianca3==3 && sexo3==2) {
						cri12masc1++; } // Crianças de 10 a 12 anos do sexo masculino do quarto trimestre
					}
			printf("\n################################################################################\n");
			printf("Informe a sua etnia:\n[1]-Branco\n[2]-Negro\n[3]-Indigena\n[4]-Pardo\n[5]-Mulato\n[6]-Caboclo\n[7]-Cafuzo\n");
			// Agora o passageiro irá informar a sua etnia
			scanf("%d",&etnia3);
				if(etnia3==1) { //Caso a etnia seja Branco
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
					bra3tri1++;
					}
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
					bra3tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
					bra3tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
					bra3tri4++; }
			}
				else if(etnia3==2) { //Caso a etnia seja Negro
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
					ne3tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
					ne3tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
					ne3tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
					ne3tri4++; }
				}
				else if(etnia3==3) { //Caso a etnia seja indigena
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
						in3tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
						in3tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
						in3tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
						in3tri4++; }
				}
				else if(etnia3==4) { //Caso a etnia seja pardo
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
					pa3tri1++;}
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
					pa3tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
					pa3tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
					pa3tri4++; }
				}
				else if(etnia3==5) { //Caso a etnia seja mulato
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
						mu3tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
						mu3tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
						mu3tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
						mu3tri4++;}
				}
				else if(etnia3==6) { //Caso a etnia seja caboclo
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
						cab3tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
						cab3tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
						cab3tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
						cab3tri4++; }
				}
				else { //Caso a etnia seja Cafuzo
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
						caf3tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
						caf3tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
						caf3tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
						caf3tri4++; }
				}
				
			printf("\n****************************************************************************\n");
			printf("\nObrigado por suas informações. Boa viagem e volte sempre!\n");	
				//Fim do armazenamento de dados do voo 3	
		  }
		
			
			 else if(destino==4) { //Caso o destino escolhido seja o 4:
			printf("\nSeu destino é Salvador-Porto Alegre");
			if(trimestre==0) { //Caso esteja no primeiro trimestre
					dest4tri1++; } //Irá acrescentar 1 ao dest4tri1 (irá ser utilizado para o relatório)
				else if(trimestre==1) { //Caso esteja no segundo trimestre
					dest4tri2++; } //Irá acrescentar 1 ao dest4tri2 (irá ser utilizado para o relatório)
				else if(trimestre==2) { //Caso esteja no terceiro trimestre
					dest4tri3++; } //Irá acrescentar 1 ao dest4tri3 (irá ser utilizado para o relatório)
				else if(trimestre==3) { //Caso esteja no quarto trimestre
					dest4tri4++; } //Irá acrescentar 1 ao dest4tri4 (irá ser utilizado para o relatório)
			printf("\n################################################################################\n");
			printf("Qual é a sua faixa etária? \n[1]- 0 a 12 anos\n[2]- 13 a 19 anos\n[3]- 20 a 29 anos\n[4]- 30 a 40 anos\n");
			printf("[5]- 41 a 50 anos\n[6]- 51 a 60 anos\n[7]- Mais de 61 anos\n");
			  //Aqui o passageiro irá declarar a sua faixa etária
	   scanf("%d",&idade4);
			if(idade4==1) { //Caso a faixa etária escolhida seja a 1, irá ser feita uma nova pergunta:
			printf("\n****************************************************************************\n");
			printf("\nVocê é uma criança, nos informe novamente qual faixa etária você aparece:\n[0]- 0 a 24 meses(colo)\n"); 
			printf("[1]- 0 a 24 meses(assento)\n[2]- 2 a 10 anos\n[3]- 10 a 12 anos\n");
		scanf("%d",&idadecrianca4);
			if(idadecrianca4==0) { //Caso a criança esteja enre 0 a 24 meses no colo.
				icri41=0; //icri41 será utilizada para o relatório
				icri41++;
			}
			else if(idadecrianca4==1) { //Caso a criança esteja enre 0 a 24 meses no assento
				icri42=0; //icri42 será utilizada para o relatório
				icri42++;
			}
			else if(idadecrianca4==2) { //Caso a criança esteja entre 2 e 10 anos.
				icri43=0; //icri43 será utilizada para o relatório
				icri43++;
			}
			else {  // Caso a criança esteja entre 10 e 12 anos.
				icri44=0; //icri44 será utilizada para o relatório
				icri44++;
			} }
		
		else if(idade4==2) { //Caso a idade da pessoa esteja entre 13 e 19 anos
			age2dest4=0;
			age2dest4++;
		}
		else if(idade4==3) { // Caso a idade da pessoa esteja entre 20 e 29 anos
			age3dest4=0;
			age3dest4++;
		}
		else if(idade4==4) { // Caso a idade da pessoas esteja entre 30 e 40 anos
			age4dest4=0;
			age4dest4++;
		}
		else if(idade4==5) { // Caso a idade da pessoa esteja entre 41 e 50 anos
			age5dest4=0;
			age5dest4++;
		}
		else if(idade4==6) { // Caso a idade da pessoas esteja entre 51 a 60 anos
			age6dest4=0;
			age6dest4++;
		}
		else { //Caso a pessoa tenha mais de 60 anos
			age7dest4=0;
			age7dest4++;
		}
				printf("\n################################################################################\n");
				printf("\nInforme seu sexo:\n[1]- Feminino\n[2]- Masculino\n");
				//Aqui a pessoa irá dizer o seu sexo
		scanf("%d",&sexo4);
			if(sexo4==1){ //Caso o sexo da pessoa seja feminino
				fem4++;
			}
			else if(sexo4==2) { //Caso o sexo da pessoa seja masculino
				masc4++;
				}
			//Agora vem a parte que é necessaria para o relatorio: envolve sexo e idade da criança
				
			if(trimestre==0) {
						if(idadecrianca4==0 && sexo4==1) {
						cri13fem1++;  } // Crianças de 0 a 24 meses de idade no colo do sexo feminino do primeiro trimestre
						else if(idadecrianca4==0 && sexo4==2) {
						cri13masc1++; } // Crianças de 0 a 24 meses de idade no colo do sexo masculino do primeiro trimestre
						else if(idadecrianca4==1 && sexo4==1) {
						cri14fem1++; } // Crianças de 0 a 24 meses de idade no assento do sexo feminino do primeiro trimestre
						else if(idadecrianca4==1 && sexo4==2) {
						cri14masc1++; } // Crianças de 0 a 24 meses de idade no assento do sexo masculino do primeiro trimestre
						else if(idadecrianca4==2 && sexo4==1) {
						cri15fem1++; } // Crianças de 2 a 10 anos do sexo feminino do primeiro trimestre
						else if(idadecrianca4==2 && sexo4==2) {
						cri15masc1++; } // Crianças de 2 a 10 anos do sexo masculino do primeiro trimestre
						else if(idadecrianca4==3 && sexo4==1) {
						cri16fem1++; } // Crianças de 10 a 12 anos do sexo feminino do primeiro trimestre
						else if(idadecrianca4==3 && sexo4==2) {
						cri16masc1++; } // Crianças de 10 a 12 anos do sexo masculino do primeiro trimestre
					}
					else if(trimestre==1) {
						if(idadecrianca4==0 && sexo4==1) {
						cri13fem2++;  } // Crianças de 0 a 24 meses de idade no colo do sexo feminino do segundo trimestre
						else if(idadecrianca4==0 && sexo4==2) {
						cri13masc2++; } // Crianças de 0 a 24 meses de idade no colo do sexo masculino do segundo trimestre
						else if(idadecrianca4==1 && sexo4==1) {
						cri14fem2++; } // Crianças de 0 a 24 meses de idade no assento do sexo feminino do segundo trimestre
						else if(idadecrianca4==1 && sexo4==2) {
						cri14masc2++; } // Crianças de 0 a 24 meses de idade no assento do sexo masculino do segundo trimestre
						else if(idadecrianca4==2 && sexo4==1) {
						cri15fem2++; } // Crianças de 2 a 10 anos do sexo feminino do segundo trimestre
						else if(idadecrianca4==2 && sexo4==2) {
						cri15masc2++; } // Crianças de 2 a 10 anos do sexo masculino do segundo trimestre
						else if(idadecrianca4==3 && sexo4==1) {
						cri16fem2++; } // Crianças de 10 a 12 anos do sexo feminino do segundo trimestre
						else if(idadecrianca4==3 && sexo4==2) {
						cri16masc2++; } // Crianças de 10 a 12 anos do sexo masculino do segundo trimestre
										}
					else if(trimestre==2) {
						if(idadecrianca4==0 && sexo4==1) {
						cri13fem3++;  } // Crianças de 0 a 24 meses de idade no colo do sexo feminino do terceiro trimestre
						else if(idadecrianca4==0 && sexo4==2) {
						cri13masc3++; } // Crianças de 0 a 24 meses de idade no colo do sexo masculino do terceiro trimestre
						else if(idadecrianca4==1 && sexo4==1) {
						cri14fem3++; } // Crianças de 0 a 24 meses de idade no assento do sexo feminino do terceiro trimestre
						else if(idadecrianca4==1 && sexo4==2) {
						cri14masc3++; } // Crianças de 0 a 24 meses de idade no assento do sexo masculino do terceiro trimestre
						else if(idadecrianca4==2 && sexo4==1) {
						cri15fem3++; } // Crianças de 2 a 10 anos do sexo feminino do terceiro trimestre
						else if(idadecrianca4==2 && sexo4==2) {
						cri15masc3++; } // Crianças de 2 a 10 anos do sexo masculino do terceiro trimestre
						else if(idadecrianca4==3 && sexo4==1) {
						cri16fem3++; } // Crianças de 10 a 12 anos do sexo feminino do terceiro trimestre
						else if(idadecrianca4==3 && sexo4==2) {
						cri16masc3++; } // Crianças de 10 a 12 anos do sexo masculino do terceiro trimestre
					}
				else if(trimestre==3) {
					if(idadecrianca4==0 && sexo4==1) {
						cri13fem1++;  } // Crianças de 0 a 24 meses de idade no colo do sexo feminino do quarto trimestre
						else if(idadecrianca4==0 && sexo4==2) {
						cri13masc4++; } // Crianças de 0 a 24 meses de idade no colo do sexo masculino do quarto trimestre
						else if(idadecrianca4==1 && sexo4==1) {
						cri14fem4++; } // Crianças de 0 a 24 meses de idade no assento do sexo feminino do quarto trimestre
						else if(idadecrianca4==1 && sexo4==2) {
						cri14masc4++; } // Crianças de 0 a 24 meses de idade no assento do sexo masculino do quarto trimestre
						else if(idadecrianca4==2 && sexo4==1) {
						cri15fem4++; } // Crianças de 2 a 10 anos do sexo feminino do quarto trimestre
						else if(idadecrianca4==2 && sexo4==2) {
						cri15masc4++; } // Crianças de 2 a 10 anos do sexo masculino do quarto trimestre
						else if(idadecrianca4==3 && sexo4==1) {
						cri16fem4++; } // Crianças de 10 a 12 anos do sexo feminino do quarto trimestre
						else if(idadecrianca4==3 && sexo4==2) {
						cri16masc4++; } // Crianças de 10 a 12 anos do sexo masculino do quarto trimestre
					}
			printf("\n################################################################################\n");
			printf("Informe a sua etnia:\n[1]-Branco\n[2]-Negro\n[3]-Indigena\n[4]-Pardo\n[5]-Mulato\n[6]-Caboclo\n[7]-Cafuzo\n");
			// Agora o passageiro irá informar a sua etnia
			scanf("%d",&etnia4);
				if(etnia4==1) { //Caso a etnia seja Branco
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
					bra4tri1++;
					}
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
					bra4tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
					bra4tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
					bra4tri4++; }
			}
				else if(etnia4==2) { //Caso a etnia seja Negro
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
					ne4tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
					ne4tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
					ne4tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
					ne4tri4++; }
				}
				else if(etnia4==3) { //Caso a etnia seja indigena
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
						in4tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
						in4tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
						in4tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
						in4tri4++; }
				}
				else if(etnia4==4) { //Caso a etnia seja pardo
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
					pa4tri1++;}
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
					pa4tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
					pa4tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
					pa4tri4++; }
				}
				else if(etnia4==5) { //Caso a etnia seja mulato
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
						mu4tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
						mu4tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
						mu4tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
						mu4tri4++;}
				}
				else if(etnia4==6) { //Caso a etnia seja caboclo
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
						cab4tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
						cab4tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
						cab4tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
						cab4tri4++; }
				}
				else { //Caso a etnia seja cafuzo
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
						caf4tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
						caf4tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
						caf4tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
						caf4tri4++; }
				}
				
			printf("\n****************************************************************************\n");
			printf("\nObrigado por suas informações. Boa viagem e volte sempre!\n"); 	}	
			//Fim do armazenamento de dados do voo 4	
		  
			 else if (destino==5) { //Caso o destino escolhido seja o 5:
			printf("\nSeu destino é Salvador-Rio de Janeiro");
			if(trimestre==0) { //Caso esteja no primeiro trimestre
					dest5tri1++; } //Irá acrescentar 1 ao dest5tri1 (irá ser utilizado para o relatório)
				else if(trimestre==1) { //Caso esteja no segundo trimestre
					dest5tri2++; } //Irá acrescentar 1 ao dest5tri2 (irá ser utilizado para o relatório)
				else if(trimestre==2) { //Caso esteja no terceiro trimestre
					dest5tri3++; } //Irá acrescentar 1 ao dest5tri3 (irá ser utilizado para o relatório)
				else if(trimestre==3) { //Caso esteja no quarto trimestre
					dest5tri4++; } //Irá acrescentar 1 ao dest5tri4 (irá ser utilizado para o relatório)
			printf("\n################################################################################\n");
			printf("Qual é a sua faixa etária? \n[1]- 0 a 12 anos\n[2]- 13 a 19 anos\n[3]- 20 a 29 anos\n[4]- 30 a 40 anos\n");
			printf("[5]- 41 a 50 anos\n[6]- 51 a 60 anos\n[7]- Mais de 61 anos\n");
			 //Aqui o passageiro irá declarar a sua faixa etária
	   scanf("%d",&idade5);
			if(idade5==1) {
			//Caso a faixa etária escolhida seja a 1, irá ser feita uma nova pergunta:
			printf("\n****************************************************************************\n");
			printf("\nVocê é uma criança, nos informe novamente qual faixa etária você aparece:\n[0]- 0 a 24 meses(colo)\n"); 
			printf("[1]- 0 a 24 meses(assento)\n[2]- 2 a 10 anos\n[3]- 10 a 12 anos\n");
		scanf("%d",&idadecrianca5);
			if(idadecrianca5==0) { //Caso a criança esteja enre 0 a 24 meses no colo.
				icri51=0; //icri51 será utilizada para o relatório
				icri51++;
			}
			else if(idadecrianca5==1) { //Caso a criança esteja enre 0 a 24 meses no assento.
				icri52=0; //icri52 será utilizada para o relatório
				icri52++;
			}
			else if(idadecrianca5==2) { //Caso a criança esteja entre 2 e 10 anos.
				icri53=0; //icri53 será utilizada para o relatório
				icri53++;
			}
			else { // Caso a criança esteja entre 10 e 12 anos.
				icri54=0; //icri54 será utilizada para o relatório
				icri54++;
			}	
		}
		else if(idade5==2) { //Caso a idade da pessoa esteja entre 13 e 19 anos
			age2dest5=0;
			age2dest5++;
		}
		else if(idade5==3) { // Caso a idade da pessoa esteja entre 20 e 29 anos
			age3dest5=0;
			age3dest5++;
		}
		else if(idade5==4) { // Caso a idade da pessoas esteja entre 30 e 40 anos
			age4dest5=0;
			age4dest5++;
		}
		else if(idade5==5) { // Caso a idade da pessoa esteja entre 41 e 50 anos
			age5dest5=0;
			age5dest5++;
		}
		else if(idade5==6) { // Caso a idade da pessoas esteja entre 51 a 60 anos
			age6dest5=0;
			age6dest5++;
		}
		else { //Caso a pessoa tenha mais de 60 anos
			age7dest5=0;
			age7dest5++;
		}
				printf("\n################################################################################\n");
				printf("\nInforme seu sexo:\n[1]- Feminino\n[2]- Masculino\n");
				//Aqui a pessoa irá dizer o seu sexo
		scanf("%d",&sexo5);
			if(sexo5==1){ //Caso o sexo da pessoa seja feminino
				fem5++;
			}
			else{ //Caso o sexo da pessoa seja masculino
				masc5++;
				}
			//Agora vem a parte que é necessaria para o relatorio: envolve sexo e idade da criança
				if(trimestre==0) {
						if(idadecrianca5==0 && sexo5==1) {
						cri17fem1++;  } // Crianças de 0 a 24 meses de idade no colo do sexo feminino do primeiro trimestre
						else if(idadecrianca5==0 && sexo5==2) {
						cri17masc1++; } // Crianças de 0 a 24 meses de idade no colo do sexo masculino do primeiro trimestre
						else if(idadecrianca5==1 && sexo5==1) {
						cri18fem1++; } // Crianças de 0 a 24 meses de idade no assento do sexo feminino do primeiro trimestre
						else if(idadecrianca5==1 && sexo5==2) {
						cri18masc1++; } // Crianças de 0 a 24 meses de idade no assento do sexo masculino do primeiro trimestre
						else if(idadecrianca5==2 && sexo5==1) {
						cri19fem1++; } // Crianças de 2 a 10 anos do sexo feminino do primeiro trimestre
						else if(idadecrianca5==2 && sexo5==2) {
						cri19masc1++; } // Crianças de 2 a 10 anos do sexo masculino do primeiro trimestre
						else if(idadecrianca5==3 && sexo5==1) {
						cri20fem1++; } // Crianças de 10 a 12 anos do sexo feminino do primeiro trimestre
						else if(idadecrianca5==3 && sexo5==2) {
						cri20masc1++; } // Crianças de 10 a 12 anos do sexo masculino do primeiro trimestre
					}
					else if(trimestre==1) {
						if(idadecrianca5==0 && sexo5==1) {
						cri17fem2++;  } // Crianças de 0 a 24 meses de idade no colo do sexo feminino do segundo trimestre
						else if(idadecrianca5==0 && sexo5==2) {
						cri17masc2++; } // Crianças de 0 a 24 meses de idade no colo do sexo masculino do segundo trimestre
						else if(idadecrianca5==1 && sexo5==1) {
						cri18fem2++; } // Crianças de 0 a 24 meses de idade no assento do sexo feminino do segundo trimestre
						else if(idadecrianca5==1 && sexo5==2) {
						cri18masc2++; } // Crianças de 0 a 24 meses de idade no assento do sexo masculino do segundo trimestre
						else if(idadecrianca5==2 && sexo5==1) {
						cri19fem2++; } // Crianças de 2 a 10 anos do sexo feminino do segundo trimestre
						else if(idadecrianca5==2 && sexo5==2) {
						cri19masc2++; } // Crianças de 2 a 10 anos do sexo masculino do segundo trimestre
						else if(idadecrianca5==3 && sexo5==1) {
						cri20fem2++; } // Crianças de 10 a 12 anos do sexo feminino do segundo trimestre
						else if(idadecrianca5==3 && sexo5==2) {
						cri20masc2++; } // Crianças de 10 a 12 anos do sexo masculino do segundo trimestre
										}
					else if(trimestre==2) {
						if(idadecrianca5==0 && sexo5==1) {
						cri17fem3++;  } // Crianças de 0 a 24 meses de idade no colo do sexo feminino do terceiro trimestre
						else if(idadecrianca5==0 && sexo5==2) {
						cri17masc3++; } // Crianças de 0 a 24 meses de idade no colo do sexo masculino do terceiro trimestre
						else if(idadecrianca5==1 && sexo5==1) {
						cri18fem3++; } // Crianças de 0 a 24 meses de idade no assento do sexo feminino do terceiro trimestre
						else if(idadecrianca5==1 && sexo5==2) {
						cri18masc3++; } // Crianças de 0 a 24 meses de idade no assento do sexo masculino do terceiro trimestre
						else if(idadecrianca5==2 && sexo5==1) {
						cri19fem3++; } // Crianças de 2 a 10 anos do sexo feminino do terceiro trimestre
						else if(idadecrianca5==2 && sexo5==2) {
						cri19masc3++; } // Crianças de 2 a 10 anos do sexo masculino do terceiro trimestre
						else if(idadecrianca5==3 && sexo5==1) {
						cri20fem3++; } // Crianças de 10 a 12 anos do sexo feminino do terceiro trimestre
						else if(idadecrianca5==3 && sexo5==2) {
						cri20masc3++; } // Crianças de 10 a 12 anos do sexo masculino do terceiro trimestre
					}
				else if(trimestre==3) {
					if(idadecrianca5==0 && sexo5==1) {
						cri17fem1++;  } // Crianças de 0 a 24 meses de idade no colo do sexo feminino do quarto trimestre
						else if(idadecrianca5==0 && sexo5==2) {
						cri17masc4++; } // Crianças de 0 a 24 meses de idade no colo do sexo masculino do quarto trimestre
						else if(idadecrianca5==1 && sexo5==1) {
						cri18fem4++; } // Crianças de 0 a 24 meses de idade no assento do sexo feminino do quarto trimestre
						else if(idadecrianca5==1 && sexo5==2) {
						cri18masc4++; } // Crianças de 0 a 24 meses de idade no assento do sexo masculino do quarto trimestre
						else if(idadecrianca5==2 && sexo5==1) {
						cri19fem4++; } // Crianças de 2 a 10 anos do sexo feminino do quarto trimestre
						else if(idadecrianca5==2 && sexo5==2) {
						cri19masc4++; } // Crianças de 2 a 10 anos do sexo masculino do quarto trimestre
						else if(idadecrianca5==3 && sexo5==1) {
						cri20fem4++; } // Crianças de 10 a 12 anos do sexo feminino do quarto trimestre
						else if(idadecrianca5==3 && sexo5==2) {
						cri20masc4++; } // Crianças de 10 a 12 anos do sexo masculino do quarto trimestre
					}
			printf("\n################################################################################\n");
			printf("Informe a sua etnia:\n[1]-Branco\n[2]-Negro\n[3]-Indigena\n[4]-Pardo\n[5]-Mulato\n[6]-Caboclo\n[7]-Cafuzo\n");
			scanf("%d",&etnia5);
			// Agora o passageiro irá informar a sua etnia
				if(etnia5==1) { //Caso a etnia seja Branco
					if(trimestre==0) {  //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
					bra5tri1++;
					}
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
					bra5tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
					bra5tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
					bra5tri4++; }
			}
				else if(etnia5==2) { //Caso a etnia seja Negro
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
					ne5tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
					ne5tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
					ne5tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
					ne5tri4++; }
				}
				else if(etnia5==3) { //Caso a etnia seja indigena
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
						in5tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
						in5tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
						in5tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
						in5tri4++; }
				}
				else if(etnia5==4) { //Caso a etnia seja pardo
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
					pa5tri1++;}
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
					pa5tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
					pa5tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
					pa5tri4++; }
				}
				else if(etnia5==5) { //Caso a etnia seja mulato
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
						mu5tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
						mu5tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
						mu5tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
						mu5tri4++;}
				}
				else if(etnia5==6) {  //Caso a etnia seja caboclo
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
						cab5tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
						cab5tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
						cab5tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
						cab5tri4++; }
				}
				else { //Caso a etnia seja Cafuzo
					if(trimestre==0) { //Se estiver no primeiro trimestre: irá armazenar os dados para o relatorio
						caf5tri1++; }
					else if(trimestre==1) { //Se estiver no segundo trimestre: irá armazenar os dados para o relatorio
						caf5tri2++; }
					else if(trimestre==2) { //Se estiver no terceiro trimestre: irá armazenar os dados para o relatorio
						caf5tri3++; }
					else if(trimestre==3) { //Se estiver no quarto trimestre: irá armazenar os dados para o relatorio
						caf5tri4++; }
				}
				
			printf("\n****************************************************************************\n");
			printf("\nObrigado por suas informações. Boa viagem e volte sempre!\n"); 	
			//Fim do armazenamento de dados do voo 5		
		  }
		  //Total de crianças do sexo masculino e feminino dos voos 1-5 do semestre 1-4
	total1=cri1fem1+cri1masc1+cri2fem1+cri2masc1+cri3fem1+cri3masc1+cri4fem1+cri4masc1; 
	total2=cri1fem2+cri1masc2+cri2fem2+cri2masc2+cri3fem2+cri3masc2+cri4fem2+cri4masc2; 
	total3=cri1fem3+cri1masc3+cri2fem3+cri2masc3+cri3fem3+cri3masc3+cri4fem3+cri4masc3; 
	total4=cri1fem4+cri1masc4+cri2fem4+cri2masc4+cri3fem4+cri3masc4+cri4fem4+cri4masc4; 
	total5=cri5fem1+cri5masc1+cri6fem1+cri6masc1+cri7fem1+cri7masc1+cri8fem1+cri8masc1; 
	total6=cri5fem2+cri5masc2+cri6fem2+cri6masc2+cri7fem2+cri7masc2+cri8fem2+cri8masc2; 
	total7=cri5fem3+cri5masc3+cri6fem3+cri6masc3+cri7fem3+cri7masc3+cri8fem3+cri8masc3; 
	total8=cri5fem4+cri5masc4+cri6fem4+cri6masc4+cri7fem4+cri7masc4+cri8fem4+cri8masc4; 
	total9=cri9fem1+cri9masc1+cri10fem1+cri10masc1+cri11fem1+cri11masc1+cri12fem1+cri12masc1; 
	total10=cri9fem2+cri9masc2+cri10fem2+cri10masc2+cri11fem2+cri11masc2+cri12fem2+cri12masc2; 
	total11=cri9fem3+cri9masc3+cri10fem3+cri10masc3+cri11fem3+cri11masc3+cri12fem3+cri12masc3; 
	total12=cri9fem4+cri9masc4+cri10fem4+cri10masc4+cri11fem4+cri11masc4+cri12fem4+cri12masc4; 
	total13=cri13fem1+cri13masc1+cri14fem1+cri14masc1+cri15fem1+cri15masc1+cri16fem1+cri16masc1; 
	total14=cri13fem2+cri13masc2+cri14fem2+cri14masc2+cri15fem2+cri15masc2+cri16fem2+cri16masc2; 
	total15=cri13fem3+cri13masc3+cri14fem3+cri14masc3+cri15fem3+cri15masc3+cri16fem3+cri16masc3; 
	total16=cri13fem4+cri13masc4+cri14fem4+cri14masc4+cri15fem4+cri15masc4+cri16fem4+cri16masc4; 
	total17=cri17fem1+cri17masc1+cri18fem1+cri18masc1+cri19fem1+cri19masc1+cri20fem1+cri20masc1; 
	total18=cri17fem2+cri17masc2+cri18fem2+cri18masc2+cri19fem2+cri19masc2+cri20fem2+cri20masc2; 
	total19=cri17fem3+cri17masc3+cri18fem3+cri18masc3+cri19fem3+cri19masc3+cri20fem3+cri20masc3; 
	total20=cri17fem4+cri17masc4+cri18fem4+cri18masc4+cri19fem4+cri19masc4+cri20fem4+cri20masc4; 
	//Total de passageiros dos voos 1-5 do semestre 1-4
	total21=dest1tri1+dest2tri1+dest3tri1+dest4tri1+dest5tri1; 
	total22=dest1tri2+dest2tri2+dest3tri2+dest4tri2+dest5tri2;
	total23=dest1tri3+dest2tri3+dest3tri3+dest4tri3+dest5tri3;
	total24=dest1tri4+dest2tri4+dest3tri4+dest4tri4+dest5tri4;
	//Total de etnias dos voos 1-5 do semestre 1-4
	total25=bra1tri1+ne1tri1+in1tri1+pa1tri1+mu1tri1+cab1tri1+caf1tri1;
	total26=bra1tri2+ne1tri2+in1tri2+pa1tri2+mu1tri2+cab1tri2+caf1tri2;
	total27=bra1tri3+ne1tri3+in1tri3+pa1tri3+mu1tri3+cab1tri3+caf1tri3;
	total28=bra1tri4+ne1tri4+in1tri4+pa1tri4+mu1tri4+cab1tri4+caf1tri4;
	total29=bra2tri1+ne2tri1+in2tri1+pa2tri1+mu2tri1+cab2tri1+caf2tri1;
	total30=bra2tri2+ne2tri2+in2tri2+pa2tri2+mu2tri2+cab2tri2+caf2tri2;
	total31=bra2tri3+ne2tri3+in2tri3+pa2tri3+mu2tri3+cab2tri3+caf2tri3;
	total32=bra2tri4+ne2tri4+in2tri4+pa2tri4+mu2tri4+cab2tri4+caf2tri4;
	total33=bra3tri1+ne3tri1+in3tri1+pa3tri1+mu3tri1+cab3tri1+caf3tri1;
	total34=bra3tri2+ne3tri2+in3tri2+pa3tri2+mu3tri2+cab3tri2+caf3tri2;
	total35=bra3tri3+ne3tri3+in3tri3+pa3tri3+mu3tri3+cab3tri3+caf3tri3;
	total36=bra3tri4+ne3tri4+in3tri4+pa3tri4+mu3tri4+cab3tri4+caf3tri4;
	total37=bra4tri1+ne4tri1+in4tri1+pa4tri1+mu4tri1+cab4tri1+caf4tri1;
	total38=bra4tri2+ne4tri2+in4tri2+pa4tri2+mu4tri2+cab4tri2+caf4tri2;
	total39=bra4tri3+ne4tri3+in4tri3+pa4tri3+mu4tri3+cab4tri3+caf4tri3;
	total40=bra4tri4+ne4tri4+in4tri4+pa4tri4+mu4tri4+cab4tri4+caf4tri4;
	total41=bra5tri1+ne5tri1+in5tri1+pa5tri1+mu5tri1+cab5tri1+caf5tri1;
	total42=bra5tri2+ne5tri2+in5tri2+pa5tri2+mu5tri2+cab5tri2+caf5tri2;
	total43=bra5tri3+ne5tri3+in5tri3+pa5tri3+mu5tri3+cab5tri3+caf5tri3;
	total44=bra5tri4+ne5tri4+in5tri4+pa5tri4+mu5tri4+cab5tri4+caf5tri4;
	//Aqui estão os calculos das porcentagens que são pedidas no relatório
	//Porcentagem das crianças:
	porc1=(float)cri1fem1/total1*100;
	porc2=(float)cri1masc1/total1*100;
	porc3=(float)cri2fem1/total1*100;
	porc4=(float)cri2masc1/total1*100;
	porc5=(float)cri3fem1/total1*100;
	porc6=(float)cri3masc1/total1*100;
	porc7=(float)cri4fem1/total1*100;
	porc8=(float)cri4masc1/total1*100;
	porc9=(float)cri5fem1/total5*100;
	porc10=(float)cri5masc1/total5*100;
	porc11=(float)cri6fem1/total5*100;
	porc12=(float)cri6masc1/total5*100;
	porc13=(float)cri7fem1/total5*100;
	porc14=(float)cri7masc1/total5*100;
	porc15=(float)cri8fem1/total5*100;
	porc16=(float)cri8masc1/total5*100;
	porc17=(float)cri9fem1/total9*100;
	porc18=(float)cri9masc1/total9*100;
	porc19=(float)cri10fem1/total9*100;
	porc20=(float)cri10masc1/total9*100;
	porc21=(float)cri11fem1/total9*100;
	porc22=(float)cri11masc1/total9*100;
	porc23=(float)cri12fem1/total9*100;
	porc24=(float)cri12masc1/total9*100;
	porc25=(float)cri13fem1/total13*100;
	porc26=(float)cri13masc1/total13*100;
	porc27=(float)cri14fem1/total13*100;
	porc28=(float)cri14masc1/total13*100;
	porc29=(float)cri15fem1/total13*100;
	porc30=(float)cri15masc1/total13*100;
	porc31=(float)cri16fem1/total13*100;
	porc32=(float)cri16masc1/total13*100;
	porc33=(float)cri17fem1/total17*100;
	porc34=(float)cri17masc1/total17*100;
	porc35=(float)cri18fem1/total17*100;
	porc36=(float)cri18masc1/total17*100;
	porc37=(float)cri19fem1/total17*100;
	porc38=(float)cri19masc1/total17*100;
	porc39=(float)cri20fem1/total17*100;
	porc40=(float)cri20masc1/total17*100;
	porc41=(float)cri1fem2/total2*100;
	porc42=(float)cri1masc2/total2*100;
	porc43=(float)cri2fem2/total2*100;
	porc44=(float)cri2masc2/total2*100;
	porc45=(float)cri3fem2/total2*100;
	porc46=(float)cri3masc2/total2*100;
	porc47=(float)cri4fem2/total2*100;
	porc48=(float)cri4masc2/total2*100;
	porc49=(float)cri5fem2/total6*100;
	porc50=(float)cri5masc2/total6*100;
	porc51=(float)cri6fem2/total6*100;
	porc52=(float)cri6masc2/total6*100;
	porc53=(float)cri7fem2/total6*100;
	porc54=(float)cri7masc2/total6*100;
	porc55=(float)cri8fem2/total6*100;
	porc56=(float)cri8masc2/total6*100;
	porc57=(float)cri9fem2/total10*100;
	porc58=(float)cri9masc2/total10*100;
	porc59=(float)cri10fem2/total10*100;
	porc60=(float)cri10masc2/total10*100;
	porc61=(float)cri11fem2/total10*100;
	porc62=(float)cri11masc2/total10*100;
	porc63=(float)cri12fem2/total10*100;
	porc64=(float)cri12masc2/total10*100;
	porc65=(float)cri13fem2/total14*100;
	porc66=(float)cri13masc2/total14*100;
	porc67=(float)cri14fem2/total14*100;
	porc68=(float)cri14masc2/total14*100;
	porc69=(float)cri15fem2/total14*100;
	porc70=(float)cri15masc2/total14*100;
	porc71=(float)cri16fem2/total14*100;
	porc72=(float)cri16masc2/total14*100;
	porc73=(float)cri17fem2/total18*100;
	porc74=(float)cri17masc2/total18*100;
	porc75=(float)cri18fem2/total18*100;
	porc76=(float)cri18masc2/total18*100;
	porc77=(float)cri19fem2/total18*100;
	porc78=(float)cri19masc2/total18*100;
	porc79=(float)cri20fem2/total18*100;
	porc7a=(float)cri20masc2/total18*100;
	porc7b=(float)cri1fem3/total3*100;
	porc7c=(float)cri1masc3/total3*100;
	porc7d=(float)cri2fem3/total3*100;
	porc7e=(float)cri2masc3/total3*100;
	porc7f=(float)cri3fem3/total3*100;
	porc7g=(float)cri3masc3/total3*100;
	porc7h=(float)cri4fem3/total3*100;
	porc7i=(float)cri4masc3/total3*100;
	porc7j=(float)cri5fem3/total7*100;
	porc80=(float)cri5masc3/total7*100;
	porc81=(float)cri6fem3/total7*100;
	porc82=(float)cri6masc3/total7*100;
	porc83=(float)cri7fem3/total7*100;
	porc84=(float)cri7masc3/total7*100;
	porc85=(float)cri8fem3/total7*100;
	porc86=(float)cri8masc3/total7*100;
	porc87=(float)cri9fem3/total11*100;
	porc88=(float)cri9masc3/total11*100;
	porc89=(float)cri10fem3/total11*100;
	porc90=(float)cri10masc3/total11*100;
	porc91=(float)cri11fem3/total11*100;
	porc92=(float)cri11masc3/total11*100;
	porc93=(float)cri12fem3/total11*100;
	porc94=(float)cri12masc3/total11*100;
	porc95=(float)cri13fem3/total15*100;
	porc96=(float)cri13masc3/total15*100;
	porc97=(float)cri14fem3/total15*100;
	porc98=(float)cri14masc3/total15*100;
	porc99=(float)cri15fem3/total15*100;
	porc100=(float)cri15masc3/total15*100;
	porc101=(float)cri16fem3/total15*100;
	porc102=(float)cri16masc3/total15*100;
	porc103=(float)cri17fem3/total19*100;
	porc104=(float)cri17masc3/total19*100;
	porc105=(float)cri18fem3/total19*100;
	porc106=(float)cri18masc3/total19*100;
	porc107=(float)cri19fem3/total19*100;
	porc108=(float)cri19masc3/total19*100;
	porc109=(float)cri20fem3/total19*100;
	porc110=(float)cri20masc3/total19*100;
	porc111=(float)cri17fem4/total20*100;
	porc112=(float)cri17masc4/total20*100;
	porc113=(float)cri18fem4/total20*100;
	porc114=(float)cri18masc4/total20*100;
	porc115=(float)cri19fem4/total20*100;
	porc116=(float)cri19masc4/total20*100;
	porc117=(float)cri20fem4/total20*100;
	porc118=(float)cri20masc4/total20*100;
	porc119=(float)cri1fem4/total4*100;
	porc120=(float)cri1masc4/total4*100;
	porc121=(float)cri2fem4/total4*100;
	porc122=(float)cri2masc4/total4*100;
	porc123=(float)cri3fem4/total4*100;
	porc124=(float)cri3masc4/total4*100;
	porc125=(float)cri4fem4/total4*100;
	porc126=(float)cri4masc4/total4*100;
	porc127=(float)cri5fem4/total8*100;
	porc128=(float)cri5masc4/total8*100;
	porc129=(float)cri6fem4/total8*100;
	porc130=(float)cri6masc4/total8*100;
	porc131=(float)cri7fem4/total8*100;
	porc132=(float)cri7masc4/total8*100;
	porc133=(float)cri8fem4/total8*100;
	porc134=(float)cri8masc4/total8*100;
	porc135=(float)cri9fem4/total12*100;
	porc136=(float)cri9masc4/total12*100;
	porc137=(float)cri10fem4/total12*100;
	porc138=(float)cri10masc4/total12*100;
	porc139=(float)cri11fem4/total12*100;
	porc140=(float)cri11masc4/total12*100;
	porc141=(float)cri12fem4/total12*100;
	porc142=(float)cri12masc4/total12*100;
	porc143=(float)cri13fem4/total16*100;
	porc144=(float)cri13masc4/total16*100;
	porc145=(float)cri14fem4/total16*100;
	porc146=(float)cri14masc4/total16*100;
	porc147=(float)cri15fem4/total16*100;
	porc148=(float)cri15masc4/total16*100;
	porc149=(float)cri16fem4/total16*100;
	porc150=(float)cri16masc4/total16*100;
	//Porcentagem dos destinos
	porc151=(float)dest1tri1/total21*100;
	porc152=(float)dest2tri1/total21*100;
	porc153=(float)dest3tri1/total21*100;
	porc154=(float)dest4tri1/total21*100;
	porc156=(float)dest5tri1/total21*100;
	porc157=(float)dest1tri2/total22*100;
	porc158=(float)dest2tri2/total22*100;
	porc159=(float)dest3tri2/total22*100;
	porc160=(float)dest4tri2/total22*100;
	porc161=(float)dest5tri2/total22*100;
	porc162=(float)dest1tri3/total23*100;
	porc163=(float)dest2tri3/total23*100;
	porc164=(float)dest3tri3/total23*100;
	porc165=(float)dest4tri3/total23*100;
	porc166=(float)dest5tri3/total23*100;
	porc167=(float)dest1tri4/total24*100;
	porc168=(float)dest2tri4/total24*100;
	porc169=(float)dest3tri4/total24*100;
	porc170=(float)dest4tri4/total24*100;
	porc171=(float)dest5tri4/total24*100;
	//Porcentagem das etnias
	porc172=(float)bra1tri1/total25*100;
	porc173=(float)ne1tri1/total25*100;
	porc174=(float)in1tri1/total25*100;
	porc175=(float)pa1tri1/total25*100;
	porc176=(float)mu1tri1/total25*100;
	porc177=(float)cab1tri1/total25*100;
	porc178=(float)caf1tri1/total25*100; 
	porc179=(float)bra1tri2/total26*100;
	porc180=(float)ne1tri2/total26*100;
	porc181=(float)in1tri2/total26*100;
	porc182=(float)pa1tri2/total26*100;
	porc183=(float)mu1tri2/total26*100;
	porc184=(float)cab1tri2/total26*100;
	porc185=(float)caf1tri2/total26*100; 
	porc186=(float)bra1tri3/total27*100;
	porc187=(float)ne1tri3/total27*100;
	porc188=(float)in1tri3/total27*100;
	porc189=(float)pa1tri3/total27*100;
	porc190=(float)mu1tri3/total27*100;
	porc191=(float)cab1tri3/total27*100;
	porc192=(float)caf1tri3/total27*100; 
	porc193=(float)bra1tri4/total28*100;
	porc194=(float)ne1tri4/total28*100;
	porc195=(float)in1tri4/total28*100;
	porc196=(float)pa1tri4/total28*100;
	porc197=(float)mu1tri4/total28*100;
	porc198=(float)cab1tri4/total28*100;
	porc199=(float)caf1tri4/total28*100; 
	porc200=(float)bra2tri1/total29*100;
	porc201=(float)ne2tri1/total29*100;
	porc202=(float)in2tri1/total29*100;
	porc203=(float)pa2tri1/total29*100;
	porc204=(float)mu2tri1/total29*100;
	porc205=(float)cab2tri1/total29*100;
	porc206=(float)caf2tri1/total29*100; 
	porc207=(float)bra2tri2/total30*100;
	porc208=(float)ne2tri2/total30*100;
	porc209=(float)in2tri2/total30*100;
	porc210=(float)pa2tri2/total30*100;
	porc211=(float)mu2tri2/total30*100;
	porc212=(float)cab2tri2/total30*100;
	porc213=(float)caf2tri2/total30*100; 
	porc214=(float)bra2tri3/total31*100;
	porc215=(float)ne2tri3/total31*100;
	porc216=(float)in2tri3/total31*100;
	porc217=(float)pa2tri3/total31*100;
	porc218=(float)mu2tri3/total31*100;
	porc219=(float)cab2tri3/total31*100;
	porc220=(float)caf2tri3/total31*100; 
	porc221=(float)bra2tri4/total32*100;
	porc222=(float)ne2tri4/total32*100;
	porc223=(float)in2tri4/total32*100;
	porc224=(float)pa2tri4/total32*100;
	porc225=(float)mu2tri4/total32*100;
	porc226=(float)cab2tri4/total32*100;
	porc227=(float)caf2tri4/total32*100; 
	porc228=(float)bra3tri1/total33*100;
	porc229=(float)ne3tri1/total33*100;
	porc230=(float)in3tri1/total33*100;
	porc231=(float)pa3tri1/total33*100;
	porc232=(float)mu3tri1/total33*100;
	porc233=(float)cab3tri1/total33*100;
	porc234=(float)caf3tri1/total33*100; 
	porc235=(float)bra3tri2/total34*100;
	porc236=(float)ne3tri2/total34*100;
	porc237=(float)in3tri2/total34*100;
	porc238=(float)pa3tri2/total34*100;
	porc239=(float)mu3tri2/total34*100;
	porc240=(float)cab3tri2/total34*100;
	porc241=(float)caf3tri2/total34*100; 
	porc242=(float)bra3tri3/total35*100;
	porc243=(float)ne3tri3/total35*100;
	porc244=(float)in3tri3/total35*100;
	porc245=(float)pa3tri3/total35*100;
	porc246=(float)mu3tri3/total35*100;
	porc247=(float)cab3tri3/total35*100;
	porc248=(float)caf3tri3/total35*100; 
	porc249=(float)bra3tri4/total36*100;
	porc250=(float)ne3tri4/total36*100;
	porc251=(float)in3tri4/total36*100;
	porc252=(float)pa3tri4/total36*100;
	porc253=(float)mu3tri4/total36*100;
	porc254=(float)cab3tri4/total36*100;
	porc255=(float)caf3tri4/total36*100;
	porc256=(float)bra4tri1/total37*100;
	porc257=(float)ne4tri1/total37*100;
	porc258=(float)in4tri1/total37*100;
	porc259=(float)pa4tri1/total37*100;
	porc260=(float)mu4tri1/total37*100;
	porc261=(float)cab4tri1/total37*100;
	porc262=(float)caf4tri1/total37*100; 
	porc263=(float)bra4tri2/total38*100;
	porc264=(float)ne4tri2/total38*100;
	porc265=(float)in4tri2/total38*100;
	porc266=(float)pa4tri2/total38*100;
	porc267=(float)mu4tri2/total38*100;
	porc268=(float)cab4tri2/total38*100;
	porc269=(float)caf4tri2/total38*100; 
	porc270=(float)bra4tri3/total39*100;
	porc271=(float)ne4tri3/total39*100;
	porc272=(float)in4tri3/total39*100;
	porc273=(float)pa4tri3/total39*100;
	porc274=(float)mu4tri3/total39*100;
	porc275=(float)cab4tri3/total39*100;
	porc276=(float)caf4tri3/total39*100; 
	porc277=(float)bra4tri4/total40*100;
	porc278=(float)ne4tri4/total40*100;
	porc279=(float)in4tri4/total40*100;
	porc280=(float)pa4tri4/total40*100;
	porc281=(float)mu4tri4/total40*100;
	porc282=(float)cab4tri4/total40*100;
	porc283=(float)caf4tri4/total40*100; 
	porc284=(float)bra5tri1/total41*100;
	porc285=(float)ne5tri1/total41*100;
	porc286=(float)in5tri1/total41*100;
	porc287=(float)pa5tri1/total41*100;
	porc288=(float)mu5tri1/total41*100;
	porc289=(float)cab5tri1/total41*100;
	porc290=(float)caf5tri1/total41*100; 
	porc291=(float)bra5tri2/total42*100;
	porc292=(float)ne5tri2/total42*100;
	porc293=(float)in5tri2/total42*100;
	porc294=(float)pa5tri2/total42*100;
	porc295=(float)mu5tri2/total42*100;
	porc296=(float)cab5tri2/total42*100;
	porc297=(float)caf5tri2/total42*100; 
	porc298=(float)bra5tri3/total43*100;
	porc299=(float)ne5tri3/total43*100;
	porc300=(float)in5tri3/total43*100;
	porc301=(float)pa5tri3/total43*100;
	porc302=(float)mu5tri3/total43*100;
	porc303=(float)cab5tri3/total43*100;
	porc304=(float)caf5tri3/total43*100; 
	porc305=(float)bra5tri4/total44*100;
	porc306=(float)ne5tri4/total44*100;
	porc307=(float)in5tri4/total4*100;
	porc308=(float)pa5tri4/total44*100;
	porc309=(float)mu5tri4/total44*100;
	porc310=(float)cab5tri4/total44*100;
	porc311=(float)caf5tri4/total44*100;

					while(cont==passageiros) { //Quando o contador for igual a quantidade de passageiros:
					if(trimestre==0) { //Se o trimestre = 1 
					do{ 
					printf("\nVocê deseja imprimir o relatório do 1º trimestre?\n");
					printf("[1]- Sim [2]- Não\n");
					// O admnistrador vai escolher o que ele deseja fazer, se ele quer imprimir o relatorio ou não
					scanf("%d",&menutrim1);
						switch(menutrim1) { //Caso ele queira imprimir o relatorio
							case 1: 
					printf("\nInsira o que você deseja:\n [1]- O total e percentual de crianças(por sexo)\n");
					printf("[2]- O total e percentual de passageiros cada vôo por etnia\n");
					printf("[3]- O total e percentual de voos para cada destino por trimestre\n");
					printf("[4]- O destino com maior numero de passageiros\n");
					printf("[5]- O destino com menor numero de passageiros\n"); 
					scanf("%d",&opcao1);
						switch(opcao1) { //Caso ele queria imprimir o total e percentual de crianças por sexo
						case 1: 
						printf("\nVoo 1\n\n");
						printf("1 trimestre\n");
						printf("de 0 a 24 meses de idade - colo (Sexo feminino): %d (%3.1f %%)\n",cri1fem1,porc1);
						printf("de 0 a 24 meses de idade - colo (Sexo masculino): %d (%3.1f %%)\n",cri1masc1,porc2);
						printf("de 0 a 24 meses de idade - assento (Sexo feminino): %d (%3.1f %%)\n",cri2fem1,porc3);
						printf("de 0 a 24 meses de idade - assento (Sexo masculino): %d (%3.1f %%)\n",cri2masc1,porc4);
						printf("de 2 a 10 anos (Sexo feminino): %d (%3.1f %%)\n",cri3fem1,porc5);
						printf("de 2 a 10 anos (Sexo masculino): %d (%3.1f %%)\n",cri3masc1,porc6);
						printf("de 10 a 12 anos (Sexo feminino): %d (%3.1f %%)\n",cri4fem1,porc7);
						printf("de 10 a 12 anos (Sexo masculino): %d (%3.1f %%)\n",cri4masc1,porc8);
						printf("\n-------------------------------------------\n");
						printf("Voo 2\n\n");
						printf("1 trimestre\n");
						printf("de 0 a 24 meses de idade - colo (Sexo feminino): %d (%3.1f %%)\n",cri5fem1,porc9);
						printf("de 0 a 24 meses de idade - colo (Sexo masculino): %d (%3.1f %%)\n",cri5masc1,porc10);
						printf("de 0 a 24 meses de idade - assento (Sexo feminino): %d (%3.1f %%)\n",cri6fem1,porc11);
						printf("de 0 a 24 meses de idade - assento (Sexo masculino): %d (%3.1f %%)\n",cri6masc1,porc12);
						printf("de 2 a 10 anos (Sexo feminino): %d (%3.1f %%)\n",cri7fem1,porc13);
						printf("de 2 a 10 anos (Sexo masculino): %d (%3.1f %%)\n",cri7masc1,porc14);
						printf("de 10 a 12 anos (Sexo feminino): %d (%3.1f %%)\n",cri8fem1,porc15);
						printf("de 10 a 12 anos (Sexo masculino): %d (%3.1f %%)\n",cri8masc1,porc16);
						printf("\n-------------------------------------------\n");
						printf("Voo 3\n\n");
						printf("1 trimestre\n");
						printf("de 0 a 24 meses de idade - colo (Sexo feminino): %d (%3.1f %%)\n",cri9fem1,porc17);
						printf("de 0 a 24 meses de idade - colo (Sexo masculino): %d (%3.1f %%)\n",cri9masc1,porc18);
						printf("de 0 a 24 meses de idade - assento (Sexo feminino): %d (%3.1f %%)\n",cri10fem1,porc19);
						printf("de 0 a 24 meses de idade - assento (Sexo masculino): %d (%3.1f %%)\n",cri10masc1,porc20);
						printf("de 2 a 10 anos (Sexo feminino): %d (%3.1f %%)\n",cri11fem1,porc21);
						printf("de 2 a 10 anos (Sexo masculino): %d (%3.1f %%)\n",cri11masc1,porc22);
						printf("de 10 a 12 anos (Sexo feminino): %d (%3.1f %%)\n",cri12fem1,porc23);
						printf("de 10 a 12 anos (Sexo masculino): %d (%3.1f %%)\n",cri12masc1,porc24);
						printf("\n-------------------------------------------\n");
						printf("Voo 4\n\n");
						printf("1 trimestre\n");
						printf("de 0 a 24 meses de idade - colo (Sexo feminino): %d (%3.1f %%)\n",cri13fem1,porc25);
						printf("de 0 a 24 meses de idade - colo (Sexo masculino): %d (%3.1f %%)\n",cri13masc1,porc26);
						printf("de 0 a 24 meses de idade - assento (Sexo feminino): %d (%3.1f %%)\n",cri14fem1,porc27);
						printf("de 0 a 24 meses de idade - assento (Sexo masculino): %d (%3.1f %%)\n",cri14masc1,porc28);
						printf("de 2 a 10 anos (Sexo feminino): %d (%3.1f %%)\n",cri15fem1,porc29);
						printf("de 2 a 10 anos (Sexo masculino): %d (%3.1f %%)\n",cri15masc1,porc30);
						printf("de 10 a 12 anos (Sexo feminino): %d (%3.1f %%)\n",cri16fem1,porc31);
						printf("de 10 a 12 anos (Sexo masculino): %d (%3.1f %%)\n",cri16masc1,porc32);
						printf("\n-------------------------------------------\n");
						printf("Voo 5\n\n");
						printf("1 trimestre\n");
						printf("de 0 a 24 meses de idade - colo (Sexo feminino): %d(%3.1f %%)\n",cri17fem1,porc33);
						printf("de 0 a 24 meses de idade - colo (Sexo masculino): %d(%3.1f %%)\n",cri17masc1,porc34);
						printf("de 0 a 24 meses de idade - assento (Sexo feminino): %d(%3.1f %%)\n",cri18fem1,porc35);
						printf("de 0 a 24 meses de idade - assento (Sexo masculino): %d(%3.1f %%)\n",cri18masc1,porc36);
						printf("de 2 a 10 anos (Sexo feminino): %d(%3.1f %%)\n",cri19fem1,porc37);
						printf("de 2 a 10 anos (Sexo masculino): %d(%3.1f %%)\n",cri19masc1,porc38);
						printf("de 10 a 12 anos (Sexo feminino): %d(%3.1f %%)\n",cri20fem1,porc39);
						printf("de 10 a 12 anos (Sexo masculino): %d(%3.1f %%)\n",cri20masc1,porc40);
						printf("\n-------------------------------------------\n");
						break;
						
					case 2: //Caso ele queira imprimir o total e percentual de passageiros por etnia
					printf("\n O total e percentual de passageiros cada vôo, por etnia\n");
					printf("\nSalvador - São Paulo\n");
					printf("%d Brancos(%3.1f %%)\n%d Negros(%3.1f %%)\n%d Indígenas(%3.1f %%)\n",bra1tri1,porc172,ne1tri1,porc173,in1tri1,porc174);
					printf("\n%d Pardos(%3.1f %%)\n%d Mulatos(%3.1f %%)\n",pa1tri1,porc175,mu1tri1,porc176);
					printf("\n%d Caboclos (%3.1f %%)\n%d Cafusos(%3.1f %%)\n",cab1tri1,porc177,caf1tri1,porc178);
					printf("\n-------------------------------------------\n");
					printf("\nSalvador - Recife\n");
					printf("%d Brancos(%3.1f %%)\n%d Negros(%3.1f %%)\n%d Indígenas(%3.1f %%)\n",bra2tri1,porc200,ne2tri1,porc201,in2tri1,porc202);
					printf("\n%d Pardos(%3.1f %%)\n%d Mulatos(%3.1f %%)\n",pa2tri1,porc203,mu2tri1,porc204);
					printf("\n%d Caboclos (%3.1f %%)\n%d Cafusos(%3.1f %%)\n",cab2tri1,porc205,caf2tri1,porc206);
					printf("\n-------------------------------------------\n");
					printf("\nSalvador - Manaus\n");
					printf("%d Brancos(%3.1f %%)\n%d Negros(%3.1f %%)\n%d Indígenas(%3.1f %%)\n",bra3tri1,porc228,ne3tri1,porc229,in3tri1,porc230);
					printf("\n%d Pardos(%3.1f %%)\n%d Mulatos(%3.1f %%)\n",pa3tri1,porc231,mu3tri1,porc232);
					printf("\n%d Caboclos (%3.1f %%)\n%d Cafusos(%3.1f %%)",cab3tri1,porc233,caf3tri1,porc234);
					printf("\n-------------------------------------------\n");
					printf("\nSalvador - Porto Alegre\n");
					printf("%d Brancos(%3.1f %%)\n%d Negros(%3.1f %%)\n%d Indígenas(%3.1f %%)\n",bra4tri1,porc256,ne4tri1,porc257,in4tri1,porc258);
					printf("\n%d Pardos(%3.1f %%)\n%d Mulatos(%3.1f %%)\n",pa4tri1,porc259,mu4tri1,porc260);
					printf("\n%d Caboclos (%3.1f %%)\n%d Cafusos(%3.1f %%)",cab4tri1,porc261,caf4tri1,porc262);
					printf("\n-------------------------------------------\n");
					printf("\nSalvador - Rio de Janeiro\n");
					printf("%d Brancos(%3.1f %%)\n%d Negros(%3.1f %%)\n%d Indígenas(%3.1f %%)\n",bra5tri1,porc284,ne5tri1,porc285,in5tri1,porc286);
					printf("\n%d Pardos(%3.1f %%)\n%d Mulatos(%3.1f %%)\n",pa5tri1,porc287,mu5tri1,porc288);
					printf("\n%d Caboclos (%3.1f %%)\n%d Cafusos(%3.1f %%)",cab5tri1,porc289,caf5tri1,porc290);
					printf("\n-------------------------------------------\n");
					break;
					case 3:  //Caso ele queria imprimir o total e percentual de voos para cada destino
						printf("\nO total e percentual de voos para cada destino\n");
						printf("\nSalvador - São Paulo\n");
						printf("%d (%3.1f %%)",dest1tri1,porc151);
						printf("\n-------------------------------------------\n");
						printf("\nSalvador - Recife\n");
						printf("%d (%3.1f %%)",dest2tri1,porc152);
						printf("\n-------------------------------------------\n");
						printf("\nSalvador - Manaus\n");
						printf("%d (%3.1f %%)",dest3tri1,porc153);
						printf("\n-------------------------------------------\n");
						printf("\nSalvador - Porto Alegre\n");
						printf("%d (%3.1f %%)",dest4tri1,porc154);
						printf("\n-------------------------------------------\n");
						printf("\nSalvador - Rio de Janeiro\n");
						printf("%d (%3.1f %%)",dest5tri1,porc156);
						printf("\n-------------------------------------------\n");
						break;
					case 4: //Caso ele queria imprimir o destino com maior numero de passageiros
						if(dest1tri1>dest2tri1 && dest1tri1>dest3tri1 && dest1tri1>dest4tri1 && dest1tri1>dest5tri1) {
							printf("\nO destino com maior número de passageiros é: Salvador- São Paulo\n"); 
							printf("\n-------------------------------------------\n"); }
						else if(dest2tri1>dest3tri1 && dest2tri1>dest4tri1 && dest2tri1>dest5tri1) {
							printf("\nO destino com maior número de passageiros é: Salvador - Recife\n"); 
							printf("\n-------------------------------------------\n"); }
						else if(dest3tri1>dest4tri1 && dest3tri1>dest5tri1) {
							printf("\nO destino com maior número de passageiros é: Salvador-Manaus\n"); 
							printf("\n-------------------------------------------\n"); }
						else if(dest4tri1>dest5tri1) {
							printf("O destino com maior número de passageiros é: Salvador- Porto Alegre\n"); 
							printf("\n-------------------------------------------\n"); }
						else {
							printf("\nO destino com maior número de passageiros é: Salvador- Rio de Janeiro\n"); 
							printf("\n-------------------------------------------\n"); }
						break;
					case 5: //Caso ele queira imprimir o destino com menor numero de passageiros
						if(dest1tri1<dest2tri1 && dest1tri1<dest3tri1 && dest1tri1<dest4tri1 && dest1tri1<dest5tri1) {
							printf("\nO destino com menor número de passageiros é: Salvador- São Paulo\n"); 
							printf("\n-------------------------------------------\n"); }
						else if(dest2tri1<dest3tri1 && dest2tri1<dest4tri1 && dest2tri1<dest5tri1) {
							printf("\nO destino com menor número de passageiros é: Salvador - Recife\n"); 
							printf("\n-------------------------------------------\n"); }
						else if(dest3tri1<dest4tri1 && dest3tri1<dest5tri1) {
							printf("\nO destino com menor número de passageiros é: Salvador-Manaus\n"); 
							printf("\n-------------------------------------------\n"); }
						else if(dest4tri1<dest5tri1) {
							printf("\nO destino com menor número de passageiros é: Salvador- Porto Alegre\n"); 
							printf("\n-------------------------------------------\n"); }
						else {
							printf("\nO destino com menor número de passageiros é: Salvador- Rio de Janeiro\n"); 
							printf("\n-------------------------------------------\n"); }
						break;
					} 
					case 2: break; //Caso ele não queria imprimir, a pagina de relatorio irá se fechar
					} 
					
					}while(menutrim1==1);	}  /*Isso irá se repetir enquanto o admnistrador quiser imprimir o relatorio, ou seja
					apertar 1 quando necessario */
					
				else if(trimestre==1) { //Se o trimestre = 2
					do{
					printf("\nVocê deseja imprimir o relatório do 2º trimestre?\n");
					printf("[1]- Sim [2]- Não\n");
					// O admnistrador vai escolher o que ele deseja fazer, se ele quer imprimir o relatorio ou não
					scanf("%d",&menutrim2);
					switch(menutrim2) { //Caso ele queira imprimir o relatorio
						case 1:
					printf("\nInsira o que você deseja:\n [1]- O total e percentual de crianças(por sexo)\n");
					printf("[2]- O total e percentual de passageiros cada vôo por etnia\n");
					printf("[3]- O total e percentual de voos para cada destino por trimestre\n");
					printf("[4]- O destino com maior numero de passageiros\n");
					printf("[5]- O destino com menor numero de passageiros\n"); 
					scanf("%d",&opcao2);
						switch(opcao2) { //Caso ele queria imprimir o total e percentual de crianças por sexo
					
						case 1: 
						printf("\nSalvador - São Paulo\n");
						printf("2 trimestre\n");
						printf("de 0 a 24 meses de idade - colo (Sexo feminino): %d (%3.1f %%)\n",cri1fem2,porc41);
						printf("de 0 a 24 meses de idade - colo (Sexo masculino): %d (%3.1f %%)\n",cri1masc2,porc42);
						printf("de 0 a 24 meses de idade - assento (Sexo feminino): %d (%3.1f %%)\n",cri2fem2,porc43);
						printf("de 0 a 24 meses de idade - assento (Sexo masculino): %d (%3.1f %%)\n",cri2masc2,porc44);
						printf("de 2 a 10 anos (Sexo feminino): %d (%3.1f %%)\n",cri3fem2,porc45);
						printf("de 2 a 10 anos (Sexo masculino): %d (%3.1f %%)\n",cri3masc2,porc46);
						printf("de 10 a 12 anos (Sexo feminino): %d (%3.1f %%)\n",cri4fem2,porc47);
						printf("de 10 a 12 anos (Sexo masculino): %d (%3.1f %%)\n",cri4masc2,porc48);
						
						printf("\nSalvador - Recife\n");
						printf("2 trimestre\n");
						printf("de 0 a 24 meses de idade - colo (Sexo feminino): %d (%3.1f %%)\n",cri5fem2,porc49);
						printf("de 0 a 24 meses de idade - colo (Sexo masculino): %d (%3.1f %%)\n",cri5masc2,porc50);
						printf("de 0 a 24 meses de idade - assento (Sexo feminino): %d (%3.1f %%)\n",cri6fem2,porc51);
						printf("de 0 a 24 meses de idade - assento (Sexo masculino): %d (%3.1f %%)\n",cri6masc2,porc52);
						printf("de 2 a 10 anos (Sexo feminino): %d (%3.1f %%)\n",cri7fem2,porc53);
						printf("de 2 a 10 anos (Sexo masculino): %d (%3.1f %%)\n",cri7masc2,porc54);
						printf("de 10 a 12 anos (Sexo feminino): %d (%3.1f %%)\n",cri8fem2,porc55);
						printf("de 10 a 12 anos (Sexo masculino): %d (%3.1f %%)\n",cri8masc2,porc56);
					
						printf("\nSalvador - Manaus\n");
						printf("2 trimestre\n");
						printf("de 0 a 24 meses de idade - colo (Sexo feminino): %d (%3.1f %%)\n",cri9fem2,porc57);
						printf("de 0 a 24 meses de idade - colo (Sexo masculino): %d (%3.1f %%)\n",cri9masc2,porc58);
						printf("de 0 a 24 meses de idade - assento (Sexo feminino): %d (%3.1f %%)\n",cri10fem2,porc59);
						printf("de 0 a 24 meses de idade - assento (Sexo masculino): %d (%3.1f %%)\n",cri10masc2,porc60);
						printf("de 2 a 10 anos (Sexo feminino): %d (%3.1f %%)\n",cri11fem2,porc61);
						printf("de 2 a 10 anos (Sexo masculino): %d (%3.1f %%)\n",cri11masc2,porc62);
						printf("de 10 a 12 anos (Sexo feminino): %d (%3.1f %%)\n",cri12fem2,porc63);
						printf("de 10 a 12 anos (Sexo masculino): %d (%3.1f %%)\n",cri12masc2,porc64);
						
						printf("\nSalvador - Porto Alegre\n");
						printf("2 trimestre\n");
						printf("de 0 a 24 meses de idade - colo (Sexo feminino): %d (%3.1f %%)\n",cri13fem2,porc65);
						printf("de 0 a 24 meses de idade - colo (Sexo masculino): %d (%3.1f %%)\n",cri13masc2,porc66);
						printf("de 0 a 24 meses de idade - assento (Sexo feminino): %d (%3.1f %%)\n",cri14fem2,porc67);
						printf("de 0 a 24 meses de idade - assento (Sexo masculino): %d (%3.1f %%)\n",cri14masc2,porc68);
						printf("de 2 a 10 anos (Sexo feminino): %d (%3.1f %%)\n",cri15fem2,porc69);
						printf("de 2 a 10 anos (Sexo masculino): %d (%3.1f %%)\n",cri15masc2,porc70);
						printf("de 10 a 12 anos (Sexo feminino): %d (%3.1f %%)\n",cri16fem2,porc71);
						printf("de 10 a 12 anos (Sexo masculino): %d (%3.1f %%)\n",cri16masc2,porc72);
						
						printf("\nSalvador - Rio de Janeiro\n");
						printf("2 trimestre\n");
						printf("de 0 a 24 meses de idade - colo (Sexo feminino): %d(%3.1f %%)\n",cri17fem2,porc73);
						printf("de 0 a 24 meses de idade - colo (Sexo masculino): %d(%3.1f %%)\n",cri17masc2,porc74);
						printf("de 0 a 24 meses de idade - assento (Sexo feminino): %d(%3.1f %%)\n",cri18fem2,porc75);
						printf("de 0 a 24 meses de idade - assento (Sexo masculino): %d(%3.1f %%)\n",cri18masc2,porc76);
						printf("de 2 a 10 anos (Sexo feminino): %d(%3.1f %%)\n",cri19fem2,porc77);
						printf("de 2 a 10 anos (Sexo masculino): %d(%3.1f %%)\n",cri19masc2,porc78);
						printf("de 10 a 12 anos (Sexo feminino): %d(%3.1f %%)\n",cri20fem2,porc79);
						printf("de 10 a 12 anos (Sexo masculino): %d(%3.1f %%)\n",cri20masc2,porc7a);
						break;
						case 2: //Caso ele queira imprimir o total e percentual de passageiros por etnia
					printf("\n O total e percentual de passageiros cada vôo, por etnia\n");
					printf("nSalvador - São Paulo\n");
					printf("%d Brancos(%3.1f %%)\n%d Negros(%3.1f %%)\n%d Indígenas(%3.1f %%)\n",bra1tri2,porc179,ne1tri2,porc180,in1tri2,porc181);
					printf("\n%d Pardos(%3.1f %%)\n%d Mulatos(%3.1f %%)\n",pa1tri2,porc182,mu1tri2,porc183);
					printf("\n%d Caboclos (%3.1f %%)\n%d Cafusos(%3.1f %%)",cab1tri2,porc184,caf1tri2,porc185);
					printf("\nSalvador - Recife\n");
					printf("%d Brancos(%3.1f %%)\n%d Negros(%3.1f %%)\n%d Indígenas(%3.1f %%)\n",bra2tri2,porc207,ne2tri2,porc208,in2tri2,porc209);
					printf("\n%d Pardos(%3.1f %%)\n%d Mulatos(%3.1f %%)\n",pa2tri2,porc210,mu2tri2,porc211);
					printf("\n%d Caboclos (%3.1f %%)\n%d Cafusos(%3.1f %%)",cab2tri2,porc212,caf2tri2,porc213);
					printf("\nSalvador - Manaus\n");
					printf("%d Brancos(%3.1f %%)\n%d Negros(%3.1f %%)\n%d Indígenas(%3.1f %%)\n",bra3tri2,porc235,ne3tri2,porc236,in3tri2,porc237);
					printf("\n%d Pardos(%3.1f %%)\n%d Mulatos(%3.1f %%)\n",pa3tri2,porc238,mu3tri2,porc239);
					printf("\n%d Caboclos (%3.1f %%)\n%d Cafusos(%3.1f %%)",cab3tri2,porc240,caf3tri2,porc241);
					printf("\nSalvador - Porto Alegre\n");
					printf("%d Brancos(%3.1f %%)\n%d Negros(%3.1f %%)\n%d Indígenas(%3.1f %%)\n",bra4tri2,porc263,ne4tri2,porc264,in4tri2,porc265);
					printf("\n%d Pardos(%3.1f %%)\n%d Mulatos(%3.1f %%)\n",pa4tri2,porc266,mu4tri2,porc267);
					printf("\n%d Caboclos (%3.1f %%)\n%d Cafusos(%3.1f %%)",cab4tri2,porc268,caf4tri2,porc269);
					printf("\nSalvador - Rio de Janeiro\n");
					printf("%d Brancos(%3.1f %%)\n%d Negros(%3.1f %%)\n%d Indígenas(%3.1f %%)\n",bra5tri2,porc291,ne5tri2,porc292,in5tri2,porc293);
					printf("\n%d Pardos(%3.1f %%)\n%d Mulatos(%3.1f %%)\n",pa5tri2,porc294,mu5tri2,porc295);
					printf("\n%d Caboclos (%3.1f %%)\n%d Cafusos(%3.1f %%)\n",cab5tri2,porc296,caf5tri2,porc297);
					break;
					case 3: //Caso ele queria imprimir o total e percentual de voos para cada destino
					printf("\nO total e percentual de voos para cada destino\n");
					printf("\nSalvador - São Paulo\n");
					printf("%d (%3.1f %%)",dest1tri2,porc157);
					printf("\nSalvador - Recife\n");
					printf("%d (%3.1f %%)",dest2tri2,porc158);
					printf("\nSalvador - Manaus\n");
					printf("%d (%3.1f %%)",dest3tri2,porc159);
					printf("\nSalvador - Porto Alegre\n");
					printf("%d (%3.1f %%)",dest4tri2,porc160);
					printf("\nSalvador - Rio de Janeiro\n");
					printf("%d (%3.1f %%\n)",dest5tri2,porc161);
					break;
					case 4: //Caso ele queria imprimir o destino com maior numero de passageiros
						if(dest1tri2>dest2tri2 && dest1tri2>dest3tri2 && dest1tri2>dest4tri2 && dest1tri2>dest5tri2) {
							printf("\nO destino com maior número de passageiros é: Salvador- São Paulo\n"); }
						else if(dest2tri2>dest3tri2 && dest2tri2>dest4tri2 && dest2tri2>dest5tri2) {
							printf("\nO destino com maior número de passageiros é: Salvador - Recife\n"); }
						else if(dest3tri2>dest4tri2 && dest3tri2>dest5tri2) {
							printf("\nO destino com maior número de passageiros é: Salvador-Manaus\n"); } 
						else if(dest4tri2>dest5tri2) {
							printf("\nO destino com maior número de passageiros é: Salvador- Porto Alegre\n"); }
						else {
							printf("\nO destino com maior número de passageiros é: Salvador- Rio de Janeiro\n"); }
						break;
					case 5: //Caso ele queria imprimir o destino com menor numero de passageiros
						if(dest1tri2<dest2tri2 && dest1tri2<dest3tri2 && dest1tri2<dest4tri2 && dest1tri2<dest5tri2) {
							printf("\nO destino com menor número de passageiros é: Salvador- São Paulo\n"); }
						else if(dest2tri2<dest3tri2 && dest2tri2<dest4tri2 && dest2tri2<dest5tri2) {
							printf("\nO destino com menor número de passageiros é: Salvador - Recife\n"); }
						else if(dest3tri2<dest4tri2 && dest3tri2<dest5tri2) {
							printf("\nO destino com menor número de passageiros é: Salvador-Manaus\n"); } 
						else if(dest4tri2<dest5tri2) {
							printf("\nO destino com menor número de passageiros é: Salvador- Porto Alegre\n"); }
						else {
							printf("\nO destino com menor número de passageiros é: Salvador- Rio de Janeiro\n"); }
						break;
					} 
						case 2: break; //Caso ele não queria imprimir, a pagina de relatorio irá se fechar
					 }
					 } while(menutrim2==1); } /*Isso irá se repetir enquanto o admnistrador quiser imprimir o relatorio, ou seja
					apertar 1 quando necessario */
					 
					else if(trimestre==2) {  //Se o trimestre = 3
						do{
					printf("\nVocê deseja imprimir o relatório do 3º trimestre?\n");
					printf("[1]- Sim [2]- Não\n");
					// O admnistrador vai escolher o que ele deseja fazer, se ele quer imprimir o relatorio ou não
					scanf("%d",&menutrim3);
					switch(menutrim3) { //Caso ele queira imprimir o relatorio
						case 1:
					printf("\nInsira o que você deseja:\n [1]- O total e percentual de crianças(por sexo)\n");
					printf("[2]- O total e percentual de passageiros cada vôo por etnia\n");
					printf("[3]- O total e percentual de voos para cada destino por trimestre\n");
					printf("[4]- O destino com maior numero de passageiros\n");
					printf("[5]- O destino com menor numero de passageiros\n"); 
					scanf("%d",&opcao3);
					switch(opcao3) { //Caso ele queria imprimir o total e percentual de crianças por sexo
					
						case 1: 
						printf("\nSalvador - São Paulo\n");
						printf("3 trimestre\n");
						printf("de 0 a 24 meses de idade - colo (Sexo feminino): %d (%3.1f %%)\n",cri1fem3,porc7b);
						printf("de 0 a 24 meses de idade - colo (Sexo masculino): %d (%3.1f %%)\n",cri1masc3,porc7c);
						printf("de 0 a 24 meses de idade - assento (Sexo feminino): %d (%3.1f %%)\n",cri2fem3,porc7d);
						printf("de 0 a 24 meses de idade - assento (Sexo masculino): %d (%3.1f %%)\n",cri2masc3,porc7e);
						printf("de 2 a 10 anos (Sexo feminino): %d (%3.1f %%)\n",cri3fem3,porc7f);
						printf("de 2 a 10 anos (Sexo masculino): %d (%3.1f %%)\n",cri3masc3,porc7g);
						printf("de 10 a 12 anos (Sexo feminino): %d (%3.1f %%)\n",cri4fem3,porc7h);
						printf("de 10 a 12 anos (Sexo masculino): %d (%3.1f %%)\n",cri4masc3,porc7i);
						
						printf("\nSalvador - Recife\n");
						printf("3 trimestre\n");
						printf("de 0 a 24 meses de idade - colo (Sexo feminino): %d (%3.1f %%)\n",cri5fem3,porc7j);
						printf("de 0 a 24 meses de idade - colo (Sexo masculino): %d (%3.1f %%)\n",cri5masc3,porc80);
						printf("de 0 a 24 meses de idade - assento (Sexo feminino): %d (%3.1f %%)\n",cri6fem3,porc81);
						printf("de 0 a 24 meses de idade - assento (Sexo masculino): %d (%3.1f %%)\n",cri6masc3,porc82);
						printf("de 2 a 10 anos (Sexo feminino): %d (%3.1f %%)\n",cri7fem3,porc83);
						printf("de 2 a 10 anos (Sexo masculino): %d (%3.1f %%)\n",cri7masc3,porc84);
						printf("de 10 a 12 anos (Sexo feminino): %d (%3.1f %%)\n",cri8fem3,porc85);
						printf("de 10 a 12 anos (Sexo masculino): %d (%3.1f %%)\n",cri8masc3,porc86);
						
						printf("\nSalvador - Manaus\n");
						printf("3 trimestre\n");
						printf("de 0 a 24 meses de idade - colo (Sexo feminino): %d (%3.1f %%)\n",cri9fem3,porc87);
						printf("de 0 a 24 meses de idade - colo (Sexo masculino): %d (%3.1f %%)\n",cri9masc3,porc88);
						printf("de 0 a 24 meses de idade - assento (Sexo feminino): %d (%3.1f %%)\n",cri10fem3,porc89);
						printf("de 0 a 24 meses de idade - assento (Sexo masculino): %d (%3.1f %%)\n",cri10masc3,porc90);
						printf("de 2 a 10 anos (Sexo feminino): %d (%3.1f %%)\n",cri11fem3,porc91);
						printf("de 2 a 10 anos (Sexo masculino): %d (%3.1f %%)\n",cri11masc3,porc92);
						printf("de 10 a 12 anos (Sexo feminino): %d (%3.1f %%)\n",cri12fem3,porc93);
						printf("de 10 a 12 anos (Sexo masculino): %d (%3.1f %%)\n",cri12masc3,porc94);
						
						printf("\nSalvador - Porto Alegre\n");
						printf("3 trimestre\n");
						printf("de 0 a 24 meses de idade - colo (Sexo feminino): %d (%3.1f %%)\n",cri13fem3,porc95);
						printf("de 0 a 24 meses de idade - colo (Sexo masculino): %d (%3.1f %%)\n",cri13masc3,porc96);
						printf("de 0 a 24 meses de idade - assento (Sexo feminino): %d (%3.1f %%)\n",cri14fem3,porc97);
						printf("de 0 a 24 meses de idade - assento (Sexo masculino): %d (%3.1f %%)\n",cri14masc3,porc98);
						printf("de 2 a 10 anos (Sexo feminino): %d (%3.1f %%)\n",cri15fem3,porc99);
						printf("de 2 a 10 anos (Sexo masculino): %d (%3.1f %%)\n",cri15masc3,porc100);
						printf("de 10 a 12 anos (Sexo feminino): %d (%3.1f %%)\n",cri16fem3,porc101);
						printf("de 10 a 12 anos (Sexo masculino): %d (%3.1f %%)\n",cri16masc3,porc102);
						
						printf("\nSalvador - Rio de Janeiro\n");
						printf("3 trimestre\n");
						printf("de 0 a 24 meses de idade - colo (Sexo feminino): %d(%3.1f %%)\n",cri17fem3,porc103);
						printf("de 0 a 24 meses de idade - colo (Sexo masculino): %d(%3.1f %%)\n",cri17masc3,porc104);
						printf("de 0 a 24 meses de idade - assento (Sexo feminino): %d(%3.1f %%)\n",cri18fem3,porc105);
						printf("de 0 a 24 meses de idade - assento (Sexo masculino): %d(%3.1f %%)\n",cri18masc3,porc106);
						printf("de 2 a 10 anos (Sexo feminino): %d(%3.1f %%)\n",cri19fem3,porc107);
						printf("de 2 a 10 anos (Sexo masculino): %d(%3.1f %%)\n",cri19masc3,porc108);
						printf("de 10 a 12 anos (Sexo feminino): %d(%3.1f %%)\n",cri2fem3,porc109);
						printf("de 10 a 12 anos (Sexo masculino): %d(%3.1f %%)\n",cri20masc3,porc110);
						break;
					case 2: //Caso ele queira imprimir o total e percentual de passageiros por etnia
					printf("\n O total e percentual de passageiros cada vôo, por etnia\n");
					printf("\nSalvador - São Paulo\n");
					printf("%d Brancos(%3.1f %%)\n%d Negros(%3.1f %%)\n%d Indígenas(%3.1f %%)\n",bra1tri3,porc186,ne1tri3,porc187,in1tri3,porc188);
					printf("\n%d Pardos(%3.1f %%)\n%d Mulatos(%3.1f %%)\n",pa1tri3,porc189,mu1tri3,porc190);
					printf("\n%d Caboclos (%3.1f %%)\n%d Cafusos(%3.1f %%)",cab1tri3,porc191,caf1tri3,porc192);
					printf("\n O total e percentual de passageiros cada vôo, por etnia\n");
					printf("\nSalvador - Recife\n");
					printf("%d Brancos(%3.1f %%)\n%d Negros(%3.1f %%)\n%d Indígenas(%3.1f %%)\n",bra2tri3,porc214,ne2tri3,porc215,in2tri3,porc216);
					printf("\n%d Pardos(%3.1f %%)\n%d Mulatos(%3.1f %%)\n",pa2tri3,porc217,mu2tri3,porc218);
					printf("\n%d Caboclos (%3.1f %%)\n%d Cafusos(%3.1f %%)",cab2tri3,porc219,caf2tri3,porc220);
					printf("\nSalvador - Manaus\n");
					printf("%d Brancos(%3.1f %%)\n%d Negros(%3.1f %%)\n%d Indígenas(%3.1f %%)\n",bra3tri3,porc242,ne3tri3,porc243,in3tri3,porc244);
					printf("\n%d Pardos(%3.1f %%)\n%d Mulatos(%3.1f %%)\n",pa3tri3,porc245,mu3tri3,porc246);
					printf("\n%d Caboclos (%3.1f %%)\n%d Cafusos(%3.1f %%)",cab3tri3,porc247,caf3tri3,porc248);
					printf("\nSalvador - Porto Alegre\n");
					printf("%d Brancos(%3.1f %%)\n%d Negros(%3.1f %%)\n%d Indígenas(%3.1f %%)\n",bra4tri3,porc270,ne4tri3,porc271,in4tri3,porc272);
					printf("\n%d Pardos(%3.1f %%)\n%d Mulatos(%3.1f %%)\n",pa4tri3,porc273,mu4tri3,porc274);
					printf("\n%d Caboclos (%3.1f %%)\n%d Cafusos(%3.1f %%)",cab4tri3,porc275,caf4tri3,porc276);
					printf("\nSalvador - Rio de Janeiro\n");
					printf("%d Brancos(%3.1f %%)\n%d Negros(%3.1f %%)\n%d Indígenas(%3.1f %%)\n",bra5tri3,porc298,ne5tri3,porc299,in5tri3,porc300);
					printf("\n%d Pardos(%3.1f %%)\n%d Mulatos(%3.1f %%)\n",pa5tri3,porc301,mu5tri3,porc302);
					printf("\n%d Caboclos (%3.1f %%)\n%d Cafusos(%3.1f %%)\n",cab5tri3,porc303,caf5tri3,porc304);
					break;
						//Caso ele queria imprimir o total e percentual de voos para cada destino
				case 3: 
					printf("\nO total e percentual de voos para cada destino\n");
					printf("\nSalvador - São Paulo\n");
					printf("%d (%3.1f %%)",dest1tri3,porc162);
					printf("\nSalvador - Recife\n");
					printf("%d (%3.1f %%)",dest2tri3,porc163);
					printf("\nSalvador - Manaus\n");
					printf("%d (%3.1f %%)",dest3tri3,porc164);
					printf("\nSalvador - Porto Alegre\n");
					printf("%d (%3.1f %%)",dest4tri3,porc165);
					printf("\nSalvador - Rio de Janeiro\n");
					printf("%d (%3.1f %%)",dest5tri3,porc166);
					break;
					case 4: //Caso ele queria imprimir o destino com maior numero de passageiros
						if(dest1tri3>dest2tri3 && dest1tri3>dest3tri3 && dest1tri3>dest4tri3 && dest1tri3>dest5tri3) {
							printf("\nO destino com maior número de passageiros é: Salvador- São Paulo\n"); }
						else if(dest2tri3>dest3tri3 && dest2tri3>dest4tri3 && dest2tri3>dest5tri3) {
							printf("\nO destino com maior número de passageiros é: Salvador - Recife\n"); }
						else if(dest3tri3>dest4tri3 && dest3tri3>dest5tri3) {
							printf("\nO destino com maior número de passageiros é: Salvador-Manaus\n"); } 
						else if(dest4tri3>dest5tri3) {
							printf("\nO destino com maior número de passageiros é: Salvador- Porto Alegre\n"); }
						else {
							printf("\nO destino com maior número de passageiros é: Salvador- Rio de Janeiro\n"); }
						break;
					case 5: //Caso ele queria imprimir o destino com menor numero de passageiros
						if(dest1tri3<dest2tri3 && dest1tri3<dest3tri3 && dest1tri3<dest4tri3 && dest1tri3<dest5tri3) {
							printf("\nO destino com menor número de passageiros é: Salvador- São Paulo\n"); }
						else if(dest2tri3<dest3tri3 && dest2tri3<dest4tri3 && dest2tri3<dest5tri3) {
							printf("\nO destino com menor número de passageiros é: Salvador - Recife\n"); }
						else if(dest3tri3<dest4tri3 && dest3tri3<dest5tri3) {
							printf("\nO destino com menor número de passageiros é: Salvador-Manaus\n"); } 
						else if(dest4tri3<dest5tri3) {
							printf("\nO destino com menor número de passageiros é: Salvador- Porto Alegre\n"); }
						else {
							printf("\nO destino com menor número de passageiros é: Salvador- Rio de Janeiro\n"); }
						break; }
						case 2: break;  //Caso ele não queria imprimir, a pagina de relatorio irá se fechar
						
					} 
				}while(menutrim3==1); /*Isso irá se repetir enquanto o admnistrador quiser imprimir o relatorio, ou seja
					apertar 1 quando necessario */
					
					} 
				else if(trimestre==3) { //Se o trimestre = 4
					do{
					printf("\nVocê deseja imprimir o relatório do 4º trimestre?\n");
					printf("[1]- Sim [2]- Não\n");
					// O admnistrador vai escolher o que ele deseja fazer, se ele quer imprimir o relatorio ou não
					scanf("\n%d",&menutrim4);
					switch(menutrim4) { //Caso ele queira imprimir o relatorio
						case 1:
					printf("\nInsira o que você deseja:\n [1]- O total e percentual de crianças(por sexo)\n");
					printf("[2]- O total e percentual de passageiros cada vôo por etnia\n");
					printf("[3]- O total e percentual de voos para cada destino por trimestre\n");
					printf("[4]- O destino com maior numero de passageiros\n");
					printf("[5]- O destino com menor numero de passageiros\n"); 
					scanf("%d",&opcao4);
					switch(opcao4) { //Caso ele queria imprimir o total e percentual de crianças por sexo
						case 1:
						printf("\nSalvador - São Paulo\n");
						printf("4 trimestre\n");
						printf("de 0 a 24 meses de idade - colo (Sexo feminino): %d (%3.1f %%)\n",cri1fem4,porc119);
						printf("de 0 a 24 meses de idade - colo (Sexo masculino): %d (%3.1f %%)\n",cri1masc4,porc120);
						printf("de 0 a 24 meses de idade - assento (Sexo feminino): %d (%3.1f %%)\n",cri2fem4,porc121);
						printf("de 0 a 24 meses de idade - assento (Sexo masculino): %d (%3.1f %%)\n",cri2masc4,porc122);
						printf("de 2 a 10 anos (Sexo feminino): %d (%3.1f %%)\n",cri3fem4,porc123);
						printf("de 2 a 10 anos (Sexo masculino): %d (%3.1f %%)\n",cri3masc4,porc124);
						printf("de 10 a 12 anos (Sexo feminino): %d (%3.1f %%)\n",cri4fem4,porc125);
						printf("de 10 a 12 anos (Sexo masculino): %d (%3.1f %%)\n",cri4masc4,porc126);
						
						printf("\nSalvador - Recife\n");
						printf("4 trimestre\n");
						printf("de 0 a 24 meses de idade - colo (Sexo feminino): %d (%3.1f %%)\n",cri5fem4,porc127);
						printf("de 0 a 24 meses de idade - colo (Sexo masculino): %d (%3.1f %%)\n",cri5masc4,porc128);
						printf("de 0 a 24 meses de idade - assento (Sexo feminino): %d (%3.1f %%)\n",cri6fem4,porc129);
						printf("de 0 a 24 meses de idade - assento (Sexo masculino): %d (%3.1f %%)\n",cri6masc4,porc130);
						printf("de 2 a 10 anos (Sexo feminino): %.2d (%3.1f %%)\n",cri7fem4,porc131);
						printf("de 2 a 10 anos (Sexo masculino): %.2d (%3.1f %%)\n",cri7masc4,porc132);
						printf("de 10 a 12 anos (Sexo feminino): %.2d (%3.1f %%)\n",cri8fem4,porc133);
						printf("de 10 a 12 anos (Sexo masculino): %.2d (%3.1f %%)\n",cri8masc4,porc134);
						
						printf("\nSalvador - Manaus\n");
						printf("4 trimestre\n");
						printf("de 0 a 24 meses de idade - colo (Sexo feminino): %d (%3.1f %%)\n",cri9fem4,porc135);
						printf("de 0 a 24 meses de idade - colo (Sexo masculino): %d (%3.1f %%)\n",cri9masc4,porc136);
						printf("de 0 a 24 meses de idade - assento (Sexo feminino): %d (%3.1f %%)\n",cri10fem4,porc137);
						printf("de 0 a 24 meses de idade - assento (Sexo masculino): %d (%3.1f %%)\n",cri10masc4,porc138);
						printf("de 2 a 10 anos (Sexo feminino): %d (%3.1f %%)\n",cri11fem4,porc139);
						printf("de 2 a 10 anos (Sexo masculino): %d (%3.1f %%)\n",cri11masc4,porc140);
						printf("de 10 a 12 anos (Sexo feminino): %d (%3.1f %%)\n",cri12fem4,porc141);
						printf("de 10 a 12 anos (Sexo masculino): %d (%3.1f %%)\n",cri12masc4,porc142);
						
						printf("\nSalvador - Porto Alegre\n");
						printf("4 trimestre\n");
						printf("de 0 a 24 meses de idade - colo (Sexo feminino): %d (%3.1f %%)\n",cri13fem4,porc143);
						printf("de 0 a 24 meses de idade - colo (Sexo masculino): %d (%3.1f %%)\n",cri13masc4,porc144);
						printf("de 0 a 24 meses de idade - assento (Sexo feminino): %d (%3.1f %%)\n",cri14fem4,porc145);
						printf("de 0 a 24 meses de idade - assento (Sexo masculino): %d (%3.1f %%)\n",cri14masc4,porc146);
						printf("de 2 a 10 anos (Sexo feminino): %d (%3.1f %%)\n",cri15fem4,porc147);
						printf("de 2 a 10 anos (Sexo masculino): %d (%3.1f %%)\n",cri15masc4,porc148);
						printf("de 10 a 12 anos (Sexo feminino): %d (%3.1f %%)\n",cri16fem4,porc149);
						printf("de 10 a 12 anos (Sexo masculino): %d (%3.1f %%)\n",cri16masc4,porc150);
						
						printf("\nSalvador - Rio de Janeiro\n");
						printf("4 trimestre\n");
						printf("de 0 a 24 meses de idade - colo (Sexo feminino): %d(%3.1f %%)\n",cri17fem4,porc111);
						printf("de 0 a 24 meses de idade - colo (Sexo masculino): %d(%3.1f %%)\n",cri17masc4,porc112);
						printf("de 0 a 24 meses de idade - assento (Sexo feminino): %d(%3.1f %%)\n",cri18fem4,porc113);
						printf("de 0 a 24 meses de idade - assento (Sexo masculino): %d(%3.1f %%)\n",cri18masc4,porc114);
						printf("de 2 a 10 anos (Sexo feminino): %d(%3.1f %%)\n",cri19fem4,porc115);
						printf("de 2 a 10 anos (Sexo masculino): %d(%3.1f %%)\n",cri19masc4,porc116);
						printf("de 10 a 12 anos (Sexo feminino): %d(%3.1f %%)\n",cri20fem4,porc117);
						printf("de 10 a 12 anos (Sexo masculino): %d(%3.1f %%)\n",cri20masc4,porc118);
						break;
					case 2: //Caso ele queira imprimir o total e percentual de passageiros por etnia
						printf("\n O total e percentual de passageiros cada vôo, por etnia\n");
						printf("\nSalvador - São Paulo\n");
						printf("%d Brancos(%3.1f %%)\n%d Negros(%3.1f %%)\n%d Indígenas(%3.1f %%)\n",bra1tri4,porc193,ne1tri4,porc194,in1tri4,porc195);
						printf("\n%d Pardos(%3.1f %%)\n%d Mulatos(%3.1f %%)\n",pa1tri4,porc196,mu1tri4,porc197);
						printf("\n%d Caboclos (%3.1f %%)\n%d Cafusos(%3.1f %%)\n)",cab1tri4,porc198,caf1tri4,porc199);
						printf("\nSalvador - Recife\n");
						printf("%d Brancos(%3.1f %%)\n%d Negros(%3.1f %%)\n%d Indígenas(%3.1f %%)\n",bra2tri4,porc221,ne2tri4,porc222,in2tri4,porc223);
						printf("\n%d Pardos(%3.1f %%)\n%d Mulatos(%3.1f %%)\n",pa2tri4,porc224,mu2tri4,porc225);
						printf("\n%d Caboclos (%3.1f %%)\n%d Cafusos(%3.1f %%)\n)",cab2tri4,porc226,caf2tri4,porc227);
						printf("\nSalvador - Manaus\n");
						printf("%d Brancos(%3.1f %%)\n%d Negros(%3.1f %%)\n%d Indígenas(%3.1f %%)\n",bra3tri4,porc249,ne3tri4,porc250,in3tri4,porc251);
						printf("\n%d Pardos(%3.1f %%)\n%d Mulatos(%3.1f %%)\n",pa3tri4,porc252,mu3tri4,porc253);
						printf("\n%d Caboclos (%3.1f %%)\n%d Cafusos(%3.1f %%)\n)",cab3tri4,porc254,caf3tri4,porc255);
						printf("\nSalvador - Porto Alegre\n");
						printf("%d Brancos(%3.1f %%)\n%d Negros(%3.1f %%)\n%d Indígenas(%3.1f %%)\n",bra4tri4,porc277,ne4tri4,porc278,in4tri4,porc279);
						printf("\n%d Pardos(%3.1f %%)\n%d Mulatos(%3.1f %%)\n",pa4tri4,porc280,mu4tri4,porc281);
						printf("\n%d Caboclos (%3.1f %%)\n%d Cafusos(%3.1f %%)\n)",cab4tri4,porc282,caf4tri4,porc283);
						printf("\nSalvador - Rio de Janeiro\n");
						printf("%d Brancos(%3.1f %%)\n%d Negros(%3.1f %%)\n%d Indígenas(%3.1f %%)\n",bra5tri4,porc305,ne5tri4,porc306,in5tri4,porc307);
						printf("\n%d Pardos(%3.1f %%)\n%d Mulatos(%3.1f %%)\n",pa5tri4,porc308,mu5tri4,porc309);
						printf("\n%d Caboclos (%3.1f %%)\n%d Cafusos(%3.1f %%)\n)",cab5tri4,porc310,caf5tri4,porc311);
						break;
					case 3: //Caso ele queria imprimir o total e percentual de voos para cada destino
						printf("\nO total e percentual de voos para cada destino\n");
						printf("\nSalvador - São Paulo\n");
						printf("%d (%3.1f %%)",dest1tri4,porc167);
						printf("\nSalvador - Recife\n");
						printf("%d (%3.1f %%)",dest2tri4,porc168);
						printf("\nSalvador - Manaus\n");
						printf("%d (%3.1f %%)",dest3tri4,porc169);
						printf("\nSalvador - Porto Alegre\n");
						printf("%d (%3.1f %%)",dest4tri4,porc170);
						printf("Salvador - Rio de Janeiro\n");
						printf("%d (%3.1f %%)\n",dest5tri4,porc171);
						break;
					case 4: //Caso ele queria imprimir o destino com maior numero de passageiros
						if(dest1tri4>dest2tri4 && dest1tri4>dest3tri4 && dest1tri4>dest4tri4 && dest1tri4>dest5tri4) {
							printf("\nO destino com maior número de passageiros é: Salvador- São Paulo\n"); }
						else if(dest2tri4>dest3tri4 && dest2tri4>dest4tri4 && dest2tri4>dest5tri4) {
							printf("\nO destino com maior número de passageiros é: Salvador - Recife\n"); }
						else if(dest3tri4>dest4tri4 && dest3tri4>dest5tri4) {
							printf("\nO destino com maior número de passageiros é: Salvador-Manaus\n"); } 
						else if(dest4tri4>dest5tri4) {
							printf("\nO destino com maior número de passageiros é: Salvador- Porto Alegre\n"); }
						else {
							printf("\nO destino com maior número de passageiros é: Salvador- Rio de Janeiro\n"); }
						break;
					case 5: //Caso ele queria imprimir o destino com menor numero de passageiros
						if(dest1tri4<dest2tri4 && dest1tri4<dest3tri4 && dest1tri4<dest4tri4 && dest1tri4<dest5tri4) {
							printf("\nO destino com menor número de passageiros é: Salvador- São Paulo\n"); }
						else if(dest2tri4<dest3tri4 && dest2tri4<dest4tri4 && dest2tri4<dest5tri4) {
							printf("\nO destino com menor número de passageiros é: Salvador - Recife\n"); }
						else if(dest3tri4<dest4tri4 && dest3tri4<dest5tri4) {
							printf("\nO destino com menor número de passageiros é: Salvador-Manaus\n"); } 
						else if(dest4tri4<dest5tri4) {
							printf("\nO destino com menor número de passageiros é: Salvador- Porto Alegre\n"); }
						else {
							printf("\nO destino com menor número de passageiros é: Salvador- Rio de Janeiro\n"); }
						break;
					
					}
						case 2: //Caso ele não queria imprimir, a pagina de relatorio irá se fechar
						break;
					 }
				 } while(menutrim4==1); /*Isso irá se repetir enquanto o admnistrador quiser imprimir o relatorio, ou seja
					apertar 1 quando necessario */
				 }

	break;
	case 1: //Caso o passageiro queira sair do menu inicial
	break;
	default: //Caso o passageiro digite uma tecla diferente de 0 ou 1
	printf("Opção inválida!\n");
	break; 
	}
	}
	}
	}
}
