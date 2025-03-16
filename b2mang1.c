//khai bao mang,in dao nguoc 
#include<stdio.h>
#include<math.h>
int main()
{
 int a[10];
 int n ;
 printf("Moi nguoi nguoi dep nhap so :");
 for(int i =0 ;i<10;i++)
 scanf("%d",&a[i]);
 printf("Phan tu mang cua nguoi dep [10] la :");
 for(int i =9;i>=0;i--)
 printf("%d  ",a[i]);
 return 0;
}
