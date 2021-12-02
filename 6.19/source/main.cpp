#include<stdio.h>
#include<stdlib.h>
#define SIZE 11

int n1[9000], n2[9000], n[60];

int main(void)
{
	for (int i = 0; i < 3600; i++)
	{
		n1[i] = 1 + rand() % 6;
		n2[i] = 1 + rand() % 6;
		int j;
		j = n1[i] + n2[i];
		switch (j)
		{
		case 2:n[2]++; break;
		case 3:n[3]++; break;
		case 4:n[4]++; break;
		case 5:n[5]++; break;
		case 6:n[6]++; break;
		case 7:n[7]++; break;
		case 8:n[8]++; break;
		case 9:n[9]++; break;
		case 10:n[10]++; break;
		case 11:n[11]++; break;
		case 12:n[12]++; break;
		}

	}
	for (int i = 2; i < 13; i++)
	{
		printf("%d    %d\n", i, n[i]);

	}
	system("pause");
	return 0;
}