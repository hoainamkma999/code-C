//kiem tra so n nhap tu ban phim:
//so hoan hao la so co tong cac uoc =2*n
#include<stdio.h>
#include<math.h>
int main()
{
int tong =0;
int n;
printf("Moi nguoi dep nhap so :");
scanf("%d",&n);
for(int i=1;i<=n;i++)
   if(n%i==0)
   {
     tong+=i;
   }
   if(tong==2*n)
   {
      printf("Day la so hoan hao ");
   }
   else
   {
      printf("Day khong la so hoan hao");
   }
   return 0;


}