#include<stdio.h>
#include<stdlib.h>
#define SIZE 11
int n1(int a[]);
int s[60];
int j;

int main(void)
{

	while (j < 5)
	{
		j++;
		scanf_s("%d", &s[j]);

	}
	;
	printf("\n %d", n1(s));
	system("pause");
	return 0;
}
int n1(int a[])
{
	int reg;
	if (j != 0)
	{
		if (a[1] > a[j])
		{
			reg = a[1];
			a[1] = a[j];
			a[j] = reg;
		}
		j--;
		n1(a);
	}
	else
	return a[1];


}