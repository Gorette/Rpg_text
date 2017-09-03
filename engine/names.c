#include "header.h"

char **ft_table(void)
{
	char	**table;

	table = malloc(sizeof(char *) * 9);
	table[0] = "Markwakwak";
	table[1] = "Aglezbu";
	table[2] = "Djadibu";
	table[3] = "Vionpionpion";
	table[4] = "Zagomo";
	table[5] = "Offpepe";
	table[6] = "Marguzar";
	table[7] = "Zaptupen";
	table[8] = "Pataplouf";
	table[9] = "\0";
	return (table);
}
