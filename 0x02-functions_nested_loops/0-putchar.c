#include "main.h"
/**
 * main - print _putchar
 * Return: 0
 */

int main(void)
{
	char w[] = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		_putchar (w[i]);
	}
	_putchar ('/n');
	return (0);
}
