#include<stdio.h>
#include<conio.h>

int prime(int n)
{
    if (n<=1) return 0;
    for (int i=2;i*i<=n;i++)
    if (n%i==0) return 0;
    return 1; 
}
int main()
{
// int n =100;
// int sum = 0;
// for(int i=1;i<=100;i+=2)
//  {
// sum +=i;// hieu la ``
//  }
// printf("tong la %d ",sum);
    int n;scanf("%d",&n);
    while(n--){
        int tmp;scanf("%d",&tmp);
        if (prime(tmp)) printf("YES"); else printf("No");
    }
    
}