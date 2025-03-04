#include<stdio.h>
#include<math.h>
int main(){
    int a =100,b=200;
int tong = a + b;
int hieu = a-b;
int tich = a*b;
float thuong = (float)a/b;
printf("ket qua cua ban la  %d %d %d ",tong,hieu,tich);

if(  a%b==0)
{
    printf(" a la so chia het cho b ");
    printf("gia tri cua thuong la : %.2f ",thuong);
}
else
{
    printf(" a la so khong chia het cho b ");
    printf("gia tri cua thuong la : %.2f ",thuong);
}
}