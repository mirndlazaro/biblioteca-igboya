#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "menusAndHeaders.c"

int main(void)
{
	inicioLanguage :
	menuFuncionalidade();
	char decisaoFuncionalidade;
	scanf ("%c", &decisaoFuncionalidade);

	switch (decisaoFuncionalidade)
	{
		case '1':
			incluirLivro();
			break;

		case '2':
			consultarLivro();
			break;
        
		case '3':
			editarLivro();
			break;

		case '4':
			verTodosLivros();
			break;

		case '5':
			exit(0);

		default:
			goto inicioLanguage;
	}
	goto inicioLanguage;
}
