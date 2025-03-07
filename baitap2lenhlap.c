//kiem tra 1 so n co phai so nguyen to hay khong
#include<stdio.h>
#include<math.h>
int main()
{    int n ;
    printf("MOI NGUOI DEP NHAP SO :");
    scanf("%d",&n);
    if(n<2)
    printf(" KHONG LA SO NGUYEN TO");
    else
    {   int thu =0;
    
        for(int i=2;i<=sqrt(n);i++)
        { 
            if(n%i==0)
            thu =1;
            break;
         } 
         if(thu==0)
         {
            printf(" LA SO NGUYEN TO ");
            
         }      
         else
         printf(" KHONG LA SO NGUYEN TO ");
    }  
}
    
