#include <iostream>
#include <string>

void		ft_no_arg()
{
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}

std::string	ft_str_big(std::string str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}

void		ft_put_str_cpp(std::string str)
{
	std::cout << str;
}

int			main(int ac, char **av)
{
	std::string	tmp;

	if (ac == 1)
		ft_no_arg();
	else
		for (int i = 1; i < ac; i++)
		{
			tmp = av[i];
			tmp = ft_str_big(tmp);
			ft_put_str_cpp(tmp);
		}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}

/*

./megaphone "shhhhh... I think the students are asleep..."

./megaphone Damnit " ! " "Sorry students, I thought this thing was off."

./megaphone
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...

DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.


* LOUD AND UNBEARABLE FEEDBACK NOISE *
$>

*/
