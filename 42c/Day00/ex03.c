#include <unistd.h>
#include "ex03.h"


void ft_putchar(char c)
{
	write( 1, &c, 1 );
}


void ft_print_numbers(void)
{
	char c;

	c = '0';
	while( c <= '9' )
	{
		ft_putchar( c );
		++c;
	}
}



/*  Pour Tests	*/
#include <stdio.h>

int main(int argc, char **argv)
{
	ft_print_numbers();

	return (0);
}
