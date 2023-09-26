#include <stdio.h>

char	validacao ( char *string);

int main(int argc, char* argv[]) 
{	
	int	i;
	char	resto;

	i = 0;
	if (argc =! 3)
	{
		prinf(" Falta argumentos para a função ");
	}
	
	while ( argc < 4)
	{
		i =+1 
		
		ft_validacao(argv[i]);
		argc = i;
	}
}


char	ft_validacao(char *string)
{
	char	resto;
	char	resto1;

	while ( *string != '\0')
	{
		if ( *string < 'a' or *string > 'z')
		{
			if (*string < 'A' or *string > 'Z')
			{
				if (*string < '0' or *string > '9')
				{
					resto = "F";
				}
			}
		}
		string ++;
	}
	resto = "S";
