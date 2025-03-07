//nhap vao 10 so nguyen ,tinh tong
#include<stdio.h>
#include<math.h>
int main()
{   int n;
    int sum =0;
    printf("MOI NGUOI DEP NHAP SO :  ");
    
    for(int i =1;i<=10;i++)
    {
        scanf("%d",&n); 
        sum+=n;
    }
    printf("TONG CUA NGUOI DEP LA : %d",sum);
    return 0;



}