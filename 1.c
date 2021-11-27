#include<stdio.h>
int main()
{
 int num,digit,rem;
scanf("%d %d",&num,&digit);

int count = 0;
while(num!=0)
{
 rem=num%10;
 if(rem==digit)
{
  count++;
}
 num/=10;
}
	
 printf("%d", count);
	
 return 0;
}