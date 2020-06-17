#include "ex04.h"
#include <unistd.h>

void ft_is_negative(int n)
{
	if ( n >= 0 )
	{
	 	ft_putchar('P');
	}
	else
	{
	 	ft_putchar('N');
	}
}
void ft_putchar(char c)
{
	write( 1, &c, 1 );
}

/*  Pour Tests	*/
#include <stdio.h>

int main(int argc, char **argv)
{
	ft_is_negative(12);
	ft_is_negative(27);
	ft_is_negative(-03);

	return (0);
}
