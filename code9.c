#include<stdio.h>
#include<math.h>
int main()
{

int nam ,thang ;
scanf("%d",&thang);
if(thang==1||thang==3||thang==5||thang==7||thang==9==thang==11)
printf("thang nay co 31 ngay");
else if (thang==2)
{
    printf("Moi ban nhap nam :");
    scanf("%d",&nam);
    if((nam %400==0)||(nam%4==0&&nam%100!=0))
    {printf("day la nam nhuan !");
        printf("thang nay co 29 ngay");
    }
    else
    {printf("day khong phai nam nhuan");
        printf("thang nay co 28 ngay");
    }
}
else
printf("thang nay  co 30 ngay "); 



}