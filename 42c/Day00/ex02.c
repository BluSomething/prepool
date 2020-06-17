#include "ex02.h"
#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	write (1, "zyxwvutsrqponmlkjihgfedcba", 26);
}



/*  Pour Tests	*/
#include <stdio.h>

int main(int argc, char **argv)
{
	ft_print_reverse_alphabet();

	return (0);
}
