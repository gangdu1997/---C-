#include <stdio.h>
int main ()
{
	int amount = 0;
	int price = 0;
	
	printf("�������Ԫ��;������Ʊ�棨Ԫ��:");
	scanf("%d %d",&price,&amount); 
	int change = amount - price;
	printf("����%dԪ��\n", change);
	return 0; 
}
