#include<stdio.h>
#include<math.h>
 int main()
 {
 float a;//a la diem trung binh
printf("Moi ban nhap vao diem cua minh : ");
scanf("%f",&a);
if(a>9)
printf("Ban xep loai xuat sac !");
else if( (a>=8)&&(a<=9))
printf("Ban xep loai gioi !");
else if( 7<=a<8)
printf("Ban xep loai kha !");
else if ( 5<=a<7)
printf("Ban xep loai trung binh !");
else 
printf("Ban xep loai yeu !");

 }
