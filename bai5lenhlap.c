#include<stdio.h>
int main()
{
int a ,b,x,bcnn;
printf("Moi nguoi dep nhap so :");
scanf("%d %d",&a,&b);
printf("UCLN cua 2 so  la : ");
for(int i=1;i<=b&&i<=a;i++)
if(b%i==0&&a%i==0)
x=i;
printf(" %d \n",x);
//6 : 6  3 "2" 1
//10: 10 5 "2" 1
printf("BCNN cua 2 so la :");
bcnn=(a*b)/x;
printf("%d",bcnn);
}