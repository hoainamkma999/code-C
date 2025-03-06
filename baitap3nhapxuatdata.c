
#include<stdio.h>
#include<math.h>
int main()
{
  float a ,b ;
  printf(" NGUOI DEP NHAP SO A:");
  scanf("%f",&a);
  printf(" NGUOI DEP NHAP SO B:");
  scanf("%f",&b);
  float tong =a+b;
  float hieu =a-b;
  float tich =a*b;
  float thuong=a/b;
    
    printf("KET QUA LA  :\nTong=%.f\nHieu=%.f\nTich=%.f\nThuong=%.2f",tong,hieu,tich,thuong);
}