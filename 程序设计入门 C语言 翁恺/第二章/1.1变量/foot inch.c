#include <stdio.h>
int main () 
{
	printf ("������Ӣ�߼�Ӣ�磬""������\"5 7\"��ʾ5Ӣ��7Ӣ��");
	double foot;
	double inch;
	scanf ("%lf %lf", &foot, &inch);
	printf ("����� %f",(foot+inch/12)*0.3048);
	return 0;
}
