//sap xep mang theo thu tu phan tu tang dan 

// 1  5  3  4  2
// 1  2  3  4  5
#include<stdio.h>
#include<math.h>
int main()
{
  long long n ,tmp;
  printf("Moi ban nhap vap kich thuoc mang :");
  scanf("%lld",&n);
  long long a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%lld",&a[i]);
  }
   
  for(int i =0;i<n;i++)
  {
  { for(int j =i+1;j<n;j++)
    if(a[i]>a[j])
    {tmp =a[i];
      a[i]=a[j];
      a[j]=tmp;
    }
  }
  }
  printf("Mang sau khi duoc sap xep tang dan \n");
  for(int i=0;i<n;i++)
  {printf("%lld ",a[i]);
  }
  return 0;

  


}