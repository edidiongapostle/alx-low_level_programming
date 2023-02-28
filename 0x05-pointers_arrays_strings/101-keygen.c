#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords for the
 * program 101-crackme.
 *
 * Return: Always 0.
 */

int main(void)
{
	char password[84];
	int index = 0, sum = 0, a, b;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}

	password[index] = '\0';

	if (sum != 2772)
	{
		a = (sum - 2772) / 2;
		b = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			a++;

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + a))
			{
				password[index] -= a;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + b))
			{
				password[index] -= b;
				break;
			}
		}
	}

	printf("%s", password);
	return (0);
}
