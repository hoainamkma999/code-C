//tim so lan xuat hien phan tu trong mang
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    int sum =0;
printf("Moi ban nhap kich thuoc mang :");
scanf("%d",&b);
int n[b];
for(int i=0;i<b;i++)
{
    scanf("%d",&n[i]);
}
printf("Moi ban nhap vao so : \n");
scanf("%d",&a);
for(int i =0;i<b;i++)
if(n[i]==a)
sum++;
printf("So la xuat hien cua so %d la %d",a,sum);






}