#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	(void)ac;
	int	i;
	int	j;

	i = 1;
	if (!av[1])
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (islower(av[i][j]))
				av[i][j] -= 32;
			j++;
		}
		std::cout << av[i];
		if (!av[i + 1])
			std::cout << "\n";
		i++;
	}
	return (0);
}
