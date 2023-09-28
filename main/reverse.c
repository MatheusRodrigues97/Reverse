#include <stdio.h>

int	validacao ( char *string);
int	menu(char *rgv[]);
void	ft_cripto(char	*frase);

	
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
void ft_cripto(char *frase) {
    while (*frase != '\0') {
        if (*frase >= 'a' && *frase <= 'z') {
            *frase = (*frase - 'a' + 1) % 26 + 'a';
        } else if (*frase >= 'A' && *frase <= 'Z') {
            *frase = (*frase - 'A' + 1) % 26 + 'A';
        }
        frase++;
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

int menu(char *argv[]) 
{
    char *opcao = argv[1];  // Atribui o primeiro argumento a 'opcao'
    char *frase = argv[2];  // Atribui o segundo argumento a 'frase'

    int validadeOpcao = validacao(opcao);  // Assume que 'validacao' valida 'opcao'
    int validadeFrase = validacao(frase);  // Assume que 'validacao' valida 'frase'

    if (validadeOpcao == 1 && validadeFrase == 1) {
        return 1;
    } else {
        return 0;
    }
}
