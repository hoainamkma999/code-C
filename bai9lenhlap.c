//kiem tra so n nhap tu ban phim:
//tinh tong 1+....+1 /n! =...?
// n =5 =>1,716
//tim duoc 1+2!+3!+....+n!
#include<stdio.h>
#include<math.h>
int main()
{
double n;
double gt=1;
float tong =0;
printf("Moi nguoi dep nhap so :");
scanf("%lf",&n);
for( double i =1;i<=n;i++)
{gt*=i;
tong=tong+(float)1/gt;
}
printf("Tong cua nguoi dep la: %f",tong);


}


