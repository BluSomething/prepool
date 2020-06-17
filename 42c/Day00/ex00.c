
#include <unistd.h>

#include "ex00.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}


/*  Pour Tests	*/
#include <stdio.h>

int main(int argc, char **argv)
{
	ft_putchar('H');
	ft_putchar('e');
	ft_putchar('l');
	ft_putchar('l');
	ft_putchar('o');
	ft_putchar('\n');

	putchar('H');
	putchar('e');
	putchar('l');
	putchar('l');
	putchar('o');
	putchar('\n');

	return (0);
}
