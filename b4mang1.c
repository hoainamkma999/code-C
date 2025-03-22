#include<stdio.h>
#include<math.h>
int main()
{
  int a[5];
  int  j,t;
  printf("Moi nguoi dep nhap so :");
  for(int i =0;i<5;i++)
  scanf("%d",&a[i]);
  int max = a[0];
  for( int i =1;i<5;i++)
    if(a[i]>max)
     {
        max=a[i];
        j=i;
     }
     int min=a[4];
     for(int i =3;i>=0;i--)
     {
        if(a[i]<min)
        {
         min=a[i];
         t=i;
        }

     }
   printf("Max cua nguoi dep la : %d\n",max);
   printf("So thu :%d \n",j);
   printf("Min cua nguoi dep la : %d \n",min);
   printf("So thu :%d \n",t);

}