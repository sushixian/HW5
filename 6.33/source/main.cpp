#include<stdio.h>
#include<stdlib.h>
#define SIZE 11
int q1(int a[]);
int t2, a[50], q, h, l, z;
int s[SIZE] = { 0,1,2,3,4,5,6,7,8,9,10 };
int main(void)
{
	scanf_s("%d", &q);
	h = 9;
	l = 1;
	q1(s);
	system("pause");
	return 0;
}
int q1(int a[])
{
	if (s[l]<q && s[h]>q && s[(l + h) / 2] != q)
	{
		z = (l + h) / 2;
		if (q > z)
		{
			l = z;
		}
		else
		{
			h = z;
		}
		q1(a);
	}
	else
	{
		printf("ans %d", (l + h) / 2);
		return 0;
	}


}

