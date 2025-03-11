//Kiem tra tam giac ,tinh chu vi dien tich,"ncv:nua chu vi"
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,chuvi ,dientich,ncv;
Base :
printf("Nhap so di nguoi dep :\n");
scanf("%f %f %f",&a ,&b ,&c);
if(a+b>c&&a+c>b&&a+c>b)
{
   printf("Day la mot  tam giac: ");
   if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&c!=a))
   printf(" tam giac can");
   else if(a==b&&a==c&&b==a)
   printf("Day la tam giac deu");
   else if(((a*a)+(b*b)==c*c||(c*c)+(b*b)==a*a||(a*a)+(c*c)==b*b)&&(a==b||a==c||b==c))
   printf("tam gia vuong can");
   else if((a*a)+(b*b)==c*c||(c*c)+(b*b)==a*a||(a*a)+(c*c)==b*b)
   printf("tam gia vuong");

}
else
{
printf("Du lieu sai vui long nhap lai !");
goto Base;
}
chuvi =a+b+c;
ncv=(a+b+c)/2;
dientich=sqrt(ncv*(ncv-a)*(ncv-b)*(ncv-c));
printf("\nChu vi cua nguoi dep la : %.2f",chuvi);
printf("\nDien tich cua nguoi dep la : %.2f",dientich);
return 0;

}