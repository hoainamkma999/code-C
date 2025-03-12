//viet chuong trinh in ra cac uoc cua so n,n nhap tu ban phim
#include<stdio.h>
int main()
{
    int n ;
    printf("Moi nguoi deo nhap so :");
    scanf("%d",&n);
    printf("Cac uoc la :");
    for(int i=1;i<=n;i++ )
    {
        if(n%i==0)
    printf("%d ",i);
    }




}