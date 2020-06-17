#include <unistd.h>
#include "ex01.h"


void ft_putchar(char c)
{
	write( 1, &c, 1 );
}


void ft_print_alphabet(void)
{
	char c;

	c = 'a';
	while( c <= 'z' )
	{
		ft_putchar( c );
		++c;
	}
}



/*  Pour Tests	*/
#include <stdio.h>

int main(int argc, char **argv)
{
	ft_print_alphabet();

	return (0);
}
