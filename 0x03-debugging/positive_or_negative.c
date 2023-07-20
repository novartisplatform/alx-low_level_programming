#include "main.h"

/**
  *main - test function that prints if interger is positive or negative
  *@i less than zero
  *Return: Always 0
  */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);

	else if (i < 0)
		printf("%d is negative\n", i);

	else
		printf("%d is zero\n", i);
}
