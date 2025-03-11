//viet ct giai phuong trinh bac 2 :
#include<stdio.h>
#include<math.h>
int main ()
{
    float  a,b,c,dental;
    float  x1,x2;
    printf("Moi nguoi dep nhap so :\n"); 
    printf("a =");
    scanf("%f",&a);
    printf("b =");
    scanf("%f",&b);
    printf("c =");
    scanf("%f",&c);
    dental=b*b-(4*a*c);
    if(dental>0)
    {
        printf("phuong trinh cua ban co 2 nghiem la : ");
        x1=((-b+sqrt(dental))/(2*a));
        x2=((-b-sqrt(dental))/(2*a));
        printf("\n x1= %.2f \n x2= %.2f",x1,x2);
    }
    else if (dental ==0)
    {
        printf("phuong trinh cua ban co nghiem kep la :");
        x1=-b/2*a;
        printf("\n %f",x1);
    }
    else 
    printf("phuong trinh vo nghiem");
    return 0;
}   