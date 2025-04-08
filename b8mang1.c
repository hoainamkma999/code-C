#include <stdio.h>

int main() {
    int n1, n2, i, j, k;

    // Nhập số phần tử của mảng thứ nhất
    printf("Nhap phan tu mang 1: ");
    scanf("%d", &n1);
    int a[n1];
    printf("NHap cac phantu tang dan mang 1:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Nhập số phần tử của mảng thứ hai
    printf("Nhap so phan tu mang 2 : ");
    scanf("%d", &n2);
    int b[n2];
    printf("NHap cac phan tu da sap xep mang so 2:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Mảng kết quả
    int c[n1 + n2];
    i = j = k = 0;

    // Trộn 2 mảng đã sắp xếp (giống merge trong merge sort)
    while(i < n1 && j < n2) {
        if(a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    // Nếu còn phần tử trong mảng a
    while(i < n1) {
        c[k++] = a[i++];
    }

    // Nếu còn phần tử trong mảng b
    while(j < n2) {
        c[k++] = b[j++];
    }

    // In mảng kết quả
    printf("Mang sau khi gop va sap xep tang dan :");
    for(i=0;i<n1+n2;i++)
    {printf("%d ",c[i]);
    }

    return 0;
}



  

