#include <stdio.h> //BIBLIOTECA DE COMUNICA��O COM O USU�RIO
#include <stdlib.h> //BIBLIOTECA DE aloca��o de espa�o de mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o 
#include <string.h> //Biblioteca respons�vel de cuidar das strings

int registro()          //Fun��o que cria o cadastro do cliente no sistema
{
	//inicio vari�vel/string
	char arquivo[40];  
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final
	
	
	printf("Digite o cpf a ser cadastrado: ");  //coleta de informa��o do usu�rio
	scanf("%s", cpf); //% toda vez que salva uma string
	
	strcpy(arquivo, cpf); //respons�vel por copiar os arquivos da string
	
	FILE *file; //criando arquivo na pasta
	file= fopen (arquivo, "w");  //cria��o para escrever
	fprintf(file,cpf);  //salva o valor da variavel
	fclose(file);  // fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
		file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file= fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fprintf(file,",");
	fclose(file);



	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	
	system("pause");
	
}
	


	


int consulta()
{
		setlocale(LC_ALL, "Portuguese");
		
		
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado:");
    scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
	    printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");	
	}
	
	while(fgets(conteudo, 200, file)  != NULL)
	{
	    printf("\nEssas s�o as informa��es do usu�rio; ");
	    printf("%s", conteudo);
	    printf("\n\n");
	}
	
	system("pause");
	
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usu�rio a ser deletado:");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
	       printf("O usu�rio n�o se encontra no sistema!.\n");
		   system("pause");	
	}
}


int main()

{
	int opcao=0; //Definindo vari�veis         
	int laco=1;
	
	        
	for(laco=1;laco=1;)
{



    system("cls"); //clear tela.
    
    

	
	setlocale(LC_ALL, "Portuguese"); //Define a linguagem
	
	
     	printf("### Cart�rio da EBAC ### \n\n"); //inicio do menu
    	printf("##Escolha a op��o desejada do menu:## \n\n");
    	printf("\t1 -Registrar nomes\n");
    	printf("\t2 -Consultar nomes\n");
    	printf("\t3 -Deletar nomes\n\n"); //Fim do menu
    	printf("\t4 -Sair do sistema\n");// sair do programa
     	printf("Op��o:");
	
	
	scanf("%d", &opcao); //Armazenando a escolha do usu�rio
	
	system("cls");
	


	
	switch(opcao)
    {
    	case 1:
        registro(); //chamada de fun��es
	    break;
		
		case 2:
		consulta();
		break;
			
		case 3:
		deletar();
		break;	
		
		case 4:
			printf("Obrigado por utilizar o sistema!");
			return 0;
			break;
	
			
		default:
		printf("Essa op��o n�o est� dispon�vel\n");
		system("pause");
		break;
		    
	}   //fim
	
		}	
			
	
	
}
