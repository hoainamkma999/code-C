//kiem tra ,thang co bao nhieu ngay 
#include<stdio.h>
int main()
{
int nam,thang;
printf("Moi nguoi dep nhap thang :");
scanf("%d",&thang);
switch(thang)
{ 
    case 1:
    printf("Moi nguoi dep nhap nam :");
    scanf("%d",&nam);
    printf("Thang 1 nam %d nguoi dep co 31 ngay ",nam);
    break;
    case 3:
    printf("Moi nguoi dep nhap nam :");
    scanf("%d",&nam);
    printf("Thang  3 nam %d nguoi dep co 31 ngay ",nam);
    break;
    case 5:
    printf("Moi nguoi dep nhap nam :");
    scanf("%d",&nam);
    printf("Thang  5 nam %d nguoi dep co 31 ngay ",nam);
    break;
    case 7:
    printf("Moi nguoi dep nhap nam :");
    scanf("%d",&nam);  
    printf("Thang 7 nam %d nguoi dep co 31 ngay ",nam);
    break;
    case 8:
    printf("Moi nguoi dep nhap nam :");
    scanf("%d",&nam);
    printf("Thang 8 nam %d nguoi dep co 31 ngay ",nam);
    break;
    case 10:
    printf("Moi nguoi dep nhap nam :");
    scanf("%d",&nam);
    printf("Thang 10 nam %d nguoi dep co 31 ngay ",nam);
    break;
    case 12:
    printf("Moi nguoi dep nhap nam :");
    scanf("%d",&nam);
    printf("Thang 12 nam %d nguoi dep co 31 ngay ",nam);
    break;
    case 4:
    printf("Moi nguoi dep nhap nam :");
    scanf("%d",&nam);
    printf("Thang 4 nam %d nguoi dep co 30 ngay ",nam);
    break;
    case 6:
    printf("Moi nguoi dep nhap nam :");
    scanf("%d",&nam);
    printf("Thang 6  nam %d nguoi dep co 30 ngay ",nam);
    break;
    case 9:
    printf("Moi nguoi dep nhap nam :");
    scanf("%d",&nam);
    printf("Thang 9 nam %d nguoi dep co 30 ngay ",nam);
    break;
    case 11:
    printf("Moi nguoi dep nhap nam :");
    scanf("%d",&nam);
    printf("Thang 11 nam %d nguoi dep co 30 ngay ",nam);
    break;
    default:
    {
      printf("Moi nguoi dep nhap vao nam :");
      scanf("%d",&nam);
      if((nam%400==0)||(nam%4==0&&nam%100!=0))
      {
        printf("Thang 2 nam %d nguoi dep co 29 ngay",nam);
        
      }
       else
       printf("Thang 2 nam %d nguoi dep co 28 ngay",nam);
    }
    return 0;

}

}