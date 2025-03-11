//viet chuong trinh xep loai hoc tap
#include<stdio.h>
#include<math.h>
int main()
{
float dtb ;
printf("Moi nguoi dep nhap diem trung binh :");
scanf("%f",&dtb);
if(dtb>=0 &&dtb<5)
  {
    printf("Ban xep loai yeu !");   
  }
else if(dtb>=5&&dtb<7)
  {
    printf("Ban xep loai trung binh !");
  }
 else if(dtb>=7&&dtb<8)
  {
    printf("Ban xep loai kha !");
  } 
else if(dtb>=8&&dtb<9)
  {
    printf("Ban xep loai gioi !");
  }
else if(dtb>=9&&dtb<=10)
  {
    printf("Ban xep loai xuat sac !");
  }
  else
  {
    printf("Du lieu nhap sau,vui long nhap lai");
  }
return 0;
}