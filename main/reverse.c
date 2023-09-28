#include <stdio.h>

int	validacao ( char *string);
int	menu(char *rgv[]);
char	ft_cripto(char	*frase);

	
int 	main( int argc , char *argv[])
{	
	int	resul;

	if(argc != 3)
	{
		printf(" Erro de entrada de argumentos");
	}
	
	resul = menu(char *rgv[]);

	if(resul == 1)
	{
		ft_cripto(*argv[2]);
	}
	else
	{
		printf("Erro de opção e frase para realizar a criptografia");
	}

}

int	ft_validacao (char *string)
{
	int	validar;

	validar = 1;
	while (*string != '\0') {
        if ((*string < '0' || *string > '9') &&
            (*string < 'a' || *string > 'z') &&
            (*string < 'A' || *string > 'Z')) {
            validar = 0;
        }
        string++;  
    }
	return validar;
}

int	menu(char *rgv[])
{
	char *opcao;
        char *frase;

        char *opcao = rgv[1];
        char *frase = rgv[2];

        validadeOpcao = validacao(*opcao);
        validadeFrase = validacao(*frase);

	if(validadeOpção == 1 && validadeFrase == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
