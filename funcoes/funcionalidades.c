void incluirLivro() 
{
	FILE *arq;
    arq = fopen("acervoLivros.txt", "ab");
    LIVRO livro;

    if (arq == NULL) 
	{
        printf("      ERRO! O arquivo n�o foi aberto!\n");
        system("pause");
    }
    else 
	{
        cabecalhoCaso1();
        printf("\n      Digite o c�digo do livro: ");
        fflush(stdin);
        gets(livro.codigo);
        
        printf("\n      Digite o titulo: ");
        fflush(stdin);
        gets(livro.titulo);

        printf("      Digite o nome do autor(a): ");
        fflush(stdin);
        gets(livro.autor);

        printf("      Digite o numero da edicao: ");
        fflush(stdin);
        gets(livro.num_edicao);

        printf("      Digite o nome da editora: ");
        fflush(stdin);
        gets(livro.editora);

        printf("      Digite o ano da publicacao: ");
		scanf("%d", &livro.ano_pub);

        printf("      Digite o total de paginas do livro: ");
        scanf("%d", &livro.num_page);
        
        fwrite(&livro, sizeof(LIVRO), 1, arq);
    }

    fclose(arq);

    printf("      Dados gravados com sucesso!");
    printf("\n\n      Clique em qualquer bot�o para voltar para o menu principal...");
    getch();
}

void consultarLivro(){	
	FILE *arq;
    arq = fopen("acervoLivros.txt", "ab");
    LIVRO livro;
	
	if (arq == NULL) 
	{
        printf("      ERRO! O arquivo n�o foi aberto!\n");
        system("pause");
    }
    else 
	{
		cabecalhoCaso2();
		
	}

	fclose(arq);	
}

void editarLivro() {
	FILE *arq;
    arq = fopen("acervoLivros.txt", "rb");
    LIVRO livro;

    if (arq == NULL) 
	{
        printf("      ERRO! O arquivo n�o foi aberto!\n");
        system("pause");
    }
    else 
	{
		cabecalhoCaso3();
	}
	
	fclose(arq);
	printf("\n\n      Clique em qualquer bot�o para voltar para o menu principal...");
    getch();
}

void verTodosLivros()
{
	FILE *arq;
    arq = fopen("acervoLivros.txt", "rb");
    LIVRO livro;

    if (arq == NULL) 
	{
        printf("      ERRO! O arquivo n�o foi aberto!\n");
        system("pause");
    }
    else 
	{
		cabecalhoCaso4();
    	while(fread(&livro, sizeof(LIVRO), 1, arq) == 1) 
    	{
    		printf("\n      C�digo: %s", livro.codigo);
			printf("\n      T�tulo: %s", livro.titulo);
			printf("\n      Autores: %s", livro.autor);
			printf("\n      N�mero da edi��o: v.%s", livro.num_edicao);
			printf("\n      Nome da editora: %s", livro.editora);
			printf("\n      Ano de publica��o: %d", livro.ano_pub);
			printf("\n      N�mero de p�ginas: %dp.\n", livro.num_page);
			printf("\n      ------------------------------------\n");
		}
		
		printf("\n      ------------- FIM DO ACERVO ---------------\n");
	}
	
	fclose(arq);
	printf("\n\n      Clique em qualquer bot�o para voltar para o menu principal...");
    getch();
}
