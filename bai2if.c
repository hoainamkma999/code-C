//giai phuong trinh 2 an ,a,b,c,d,e,f,nhap tu ban phim
#include<stdio.h>
#include<math.h>
int main()
{
float a ,b,c,d,e,f,x,y;
printf("Moi nguoi dep nhap so :\n");
scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
y=(f-((d*c)/a))/(e-((d*b)/a));
x=(c-(b*y))/a;
printf("Gia tri cua nguoi dep la :\n");
printf("x = %.2f \n",x);
printf("y = %.2f", y);
return 0;


}
