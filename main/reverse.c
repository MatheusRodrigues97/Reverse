#include<stdio.h>

int	main(int argc	char* argv[])
{
	int selecao_menu;
	char string_cripto[50];
	
	selecao_menu = argv[1];
	string_cripto = argv[2];

	if (argc != 3)
	{
		printf("Erro 001")
		return(1);
	}

	else
	
	{
	
			if (selecao_menu =="1")
	
			{
				ft_reverse_cripto(string_cripto);
			}
	
			else if (selecao_menu == "2")
			{
				ft_reverse_descripto(string_cripto);
			}
			else
			{
				printf("Erro 001");
			}
	}
return(1);
}
