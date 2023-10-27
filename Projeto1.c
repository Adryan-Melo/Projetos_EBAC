#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int registrar()
{
	printf("Registrar nome\n");
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadstrado:");
	scanf("%s",cpf);
	
	strcpy(arquivo, cpf);
	
	FILE *file;
	file = fopen(arquivo,"w");
	fprintf (file,cpf);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf(" Digite o nome a ser cadastrdo: ");
	scanf("%s",nome);
	
	file = fopen(arquivo,"a");
	fprintf (file,nome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	
	printf(" Digite o sobrenome a ser cadastrdo: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo,"a");
	fprintf (file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf(" Digite o cargo a ser cadastrdo: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo,"a");
	fprintf (file,cargo);
	fclose(file);
	
	system ("pause");
}


int consultar()
{
	printf("Consultar nome\n");
    char cpf[40];
    char conteudo[200];
    
	printf("Digite o CPF a ser consultado: ");
	scanf ("%s",cpf);
	
	FILE *file;
	file= fopen(cpf,"r");
	
	if (file==NULL)
	{
		printf("Não foi possivel abrir o arquivo, não localozado! \n");
		
	}
	
	while(fgets(conteudo,200,file)!=NULL)
	{
		printf("\n Essas são as infomações do usuario:");
		printf("%s",conteudo);
		printf("\n\n");
	}
	
	system ("pause");
}

int deletar()
{
	printf("Deletar nome\n");
    system ("pause");
	
}


int main()
	{
	int op = 0;
	int x=1;
	char senha[]="a";
	int comp;
	
	printf("\t__ Cartório ADR __\n\n\n");
	printf("Login de administrador!\n\nDigite sua senha: ");
	scanf("%s",senha);

	comp = strcmp(senha, "admin");
{

	if(comp== 0)
	
	

	

	   for (x=1;x=1;)
	{
	
	
system ("cls");

		     setlocale(LC_ALL,"Portuguese");
		    
		    printf("\t__ Cartório ADR __\n\n\n");
		    printf("\tEscolha a opção desejada\n\n");
		    printf("\t1- Registrar nomes\n");
		    printf("\t2- Consultar nomes\n");
		    printf("\t3- Deletar nomes\n");
		    printf("\t4- Sair do sistema\n\n\n");
		    printf("\topção:");
		    scanf("%d",&op);
		    
		
		    
		    switch (op)
		    {
		    case 1:
		    registrar();
		    break;
		    
		    case 2:
		    consultar();
		    break;
		    
		    case 3:
		    deletar();
		    break;
		    
		    case 4:
		    printf("Obirgado por ultilizar o sistema!");
		    return 0;
		    break;
		    
		    
		    default:
		    printf("Esclha uma opção acima!\n");
		    system ("pause");
   		 	}
		}
				else
		printf("\nSenha incorreta!");
}
}
    
