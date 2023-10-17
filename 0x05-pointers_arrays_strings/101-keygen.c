#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords for 101-crackme
 * Return: always 0 (success) for int type
 */
int main(void)
{
	char pwd[84];
	int i = 0, sum = 0, fhalf1, fhalf2;

	srand(time(0));

	while (sum < 2772)
	{
		pwd[i] = 33 + rand() % 94;
		sum += pwd[i++];
	}

	pwd[i] = '\0';

	if (sum != 2772)
	{
		fhalf1 = (sum - 2772) / 2;
		fhalf2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
		fhalf1++;

		for (i = 0; pwd[i]; i++)
		{
			if (pwd[i] >= (33 + fhalf1))
			{
				pwd[i] -= fhalf1;
				break;
			}
		}

		for (i = 0; pwd[i]; i++)
		{
			if (pwd[i] >= (33 + fhalf2))
			{
				pwd[i] -= fhalf2;
				break;
			}
		}
	}
	printf("%s", pwd);
	return (0);
}
