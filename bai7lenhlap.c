//tinh tong cac so 1+1/2+....+1/n
#include<stdio.h>
#include<math.h>
int main()
{
int n;
float tong;
printf("Moi nguoi dep nhap so :");
scanf("%d",&n);
for(int i =1;i<=n;i++)
tong=tong+(float)1/i;

printf("Tong cua nguoi dep la: %f",tong);
 
 return 0;




}