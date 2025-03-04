#include<stdio.h>
#include<math.h>
int main (){
    float a ,b,c,dental,x1,x2;
    printf("Moi thim nhap vao he so a ,b ,c :");
    scanf("%f %f %f",&a,&b,&c);
    dental=b*b-4*a*c;
    if(dental>0)
    {
        printf("phuong trinh co 2 nghiem phan biet la:");
        x1=(-b+sqrt(dental))/2*a;
        x2=(-b-sqrt(dental))/2*a;
        printf(" nghiem cua ban la :%.2f %.2f",x1,x2);
    }
    else if(dental==0)
    {printf("phuong trinh co nghiem kep la :");
        x1=-b/2*a;
 
        printf("x1 =x2 = %.2f ",x1);
    }   

    else
    printf("phuong trinh vo nghiem ");




}
    