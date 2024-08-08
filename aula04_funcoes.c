#include <stdio.h> //biblioteca decomuni��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca responsavel por cuidar das string

int registro() // Fun��o responsavel por cadastrar os �suarios.
{
	// inicio cria��o de variaveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	// final dacria��o de vvariaveis/string
	
	printf("Digite o cpf a ser cadastrado: "); // coletando informa��o do usu�rio
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); //responsavel por copia os valores das string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo e o "w" significa escrever
	fprintf(file,cpf); //salva o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); 
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: "); // coletando informa��o do �suario
	scanf("%s", nome); //refere-se a string
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: "); // coletando informa��o do usuario
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: "); // Coletando a informa��o do usuario
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	
	
	
	
	
	
	
}

int consulta()
{
 	setlocale(LC_ALL, "portuuese"); //Definindo a linguagem
 	
 	char cpf[40]; // cria��o de variveis
 	char conteudo[200];
 	
 	printf("Digite o CPF a ser consultado"); // coletando informa��o do usuario
 	scanf("%s",cpf); // refere-se a string.
 	
 	FILE *file;
 	file = fopen(cpf,"r"); //abrindo e "r" lendo  arquivo 
 	
 	if(file == NULL) //analise de usuario inixistente 
 	{
 		printf("N�o foi possivel abrir o arquivo, n�o localizado! . \n");
	 }
	 
	 while(fgets(conteudo, 200, file) != NULL)
	 {
	 	printf("\nEssas s�o as informa��es do usuario: ");
	 	printf("%s", conteudo);
	 	printf("\n\n");
	 }
	 
	 system("pause");
	 
}

int deletar()
{
	char cpf[40]; // variavel a ser consultada
	
	printf("Digite o CPF a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r"); //abrndo e "r" lendo arquivo
	
	if(file == NULL) // analise de usuario inexistente
	{
		printf("O usuario n�o se encontra no sistemas! . \n");
		system("pause");
	}
	
}



int main()
{
	int opcao=0; //Definindo vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{

	    system("cls"); // limpar tela
	    
	   
	
    	setlocale(LC_ALL, "portuguese"); //Definindo a Linguagem
    
    
		printf("### cartorio da EBAC ###\n\n"); 
		printf("Escolha a opcao desejada do menu: \n\n"); // inicio do menu do usuario.
		printf("\t1 - Registrar nomes\n\n");	
		printf("\t2 - Consultar nomes\n\n");
		printf("\t3 - Deletar nomes\n\n");
		printf("\t4 - Sair do sistema\n\n"); 
		printf("Op��o: ");   // fim do menu
	
		scanf("%d", &opcao); //armazenando a escolha do usuario
	
		system("cls"); // responsavel por limpar a tela
		
		 switch(opcao) //inicio da sele��o do menu.
	    {
	    	case 1:
	    	registro(); // chamada de fun��es
			break;
			
			case 2:
			consulta();
			break;
			
			case 3:
			deletar();
			break;
			
			default:
			printf("Essa op��o n�o est� disponivel!\n");
			system("pause");
			break;	 //fim da sele��o do menu
				
			case 4:
			printf("Obrigado por Utilizar o sistema!\n");
			return 0;
			break;	
				
	    		
		}
	
    }	
} 
