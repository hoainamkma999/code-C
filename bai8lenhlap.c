//chuong trinh tinh gia tri n!= ?
//n!=n*(n-1)*(n-2)*....*(n-(n-1))
//gia thua = gt
#include<stdio.h>
#include<math.h>
int main()
{
 double n ;
 double gt =1;
 printf("Nhap so di nguoi dep :");
 scanf("%lf",&n);
 printf("Gia tri giai thua cua nguoi dep la :");
for(double i =1;i<=n;i++)
gt*=i;
printf("%.2lf",gt);

return 0;



}