#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
	int a,b=1,c=0;
	do
	{
		printf("----�q�X1+2+....+n���`�M----\n");
		printf("�п�Jn�Ȭ��G");
		scanf("%d",&a);  
	}
	while (a<=0); 
	do 
	c+=b++;  
	while (b <= a); 
	printf("1+2+...+%d=%d\n",a,c); 
	
	system("pause"); 
	return 0;   
} 

