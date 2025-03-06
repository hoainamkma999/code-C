//viet ct nhap n in ra the tich,dien tich khoi cau 
#include<stdio.h>
#include<math.h>

int main()
{        double pi =3.1415926535897932384626433;
         float r,dientich,thetich;
    printf("MOI NGUOI DEP NHAP SO : ");
    scanf("%f",&r);
       dientich=4*pi*pow(r ,2);
       thetich=(4*pi*pow(r,3))/3;
    printf("DIEN TICH CUA NGUOI DEP LA %f:\n",dientich);
    printf("THE TICH CUA NGUOI DEP LA %f:",thetich);






}