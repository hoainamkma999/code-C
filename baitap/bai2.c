#include<stdio.h>
#include<math.h>
int main()

{
    int n ;
    scanf("%d",&n);
// if(n<2)
//             {
//              printf("khong la so nguyen to %d \n ",n);
//             }
//     else
//     {
//       int thu =100;
//      for(int i=2;i<=sqrt(n);i++)
//       if(n%i==0)
//      {
//      thu = 200; 
//      break;
//     }
//         if(thu==200)
//        {
//        printf             ("%d day khong la so nguyen to\n",n);
//        }
//           else
//           {
//             printf("%d day la so nguyen to \n",n);
//           }
// }

// return 0;
  if(n<2)
  {
    printf("No");
    return 0;
  }
  for(int i=2;i*i<=n;i++)
  if(n%i==0) {
    printf("No");
    return 0;
  }
  printf("Yes");
  return 0;
    }