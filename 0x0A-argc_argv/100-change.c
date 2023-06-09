#include "main.h"
#include <stdio.h>
#include <stdio.lib>

/**
 * coin_num - finds least number of coins
 * @n: money amount
 * Return: number of coins
 */

int coin_num(int n)
{
	int coins, quarters, dimes, nickels, twocents, pennies;

	coins = 0;
	quarters = 0;
	dimes = 0;
	nickels = 0;
	twocents = 0;
	pennies = 0;

	while (n > 0)
	{
		if (n >= 25)
		{
			n -= 25;
			quarters += 1;
		}
		else if (n >= 10)
		{
			n -= 10;
			dimes += 1;
		}
		else if (n >= 5)
		{
			n -= 5;
			nickels += 1;
		}
		else if (n >= 2)
		{
			n -= 2;
			twocents += 1;
		}
		else
		{
			n -= 1;
			pennies += 1;
		}
	}
	coins = quarters + dimes + nickels + twocents + pennies;

	return (coins);
}

/**
 * main - entry point
 * @argc: a count of the arguments supplied to the program
 * @argv: an array of pointers to the strings supplied to the program
 *
 * Description: a program that adds positive numbers.
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		coins = coin_num(atoi(argv[1]));
		printf("%d\n", coins);
	}
	return (0);
}
