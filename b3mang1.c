#include <stdio.h>

int main() {
    int n, i;
    int tong = 0, tongDuong = 0, tongAm = 0;
    int demDuong = 0, demAm = 0;

    // Nhập số phần tử của mảng
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);

    int a[n];

    // Nhập các phần tử của mảng
    for(i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Tính toán các yêu cầu
    for(i = 0; i < n; i++) {
        tong += a[i];
        if(a[i] > 0) {
            tongDuong += a[i];
            demDuong++;
        } else if(a[i] < 0) {
            tongAm += a[i];
            demAm++;
        }
    }

    // In kết quả
    printf("\nTong ohan tu mang: %d\n", tong);
    printf("Tong duong phan tu mang: %d\n", tongDuong);
    printf("Tong am phan tu mang : %d\n", tongAm);

    // Tính trung bình cộng
    printf("Trung binh cong cua mang: %.2f\n", (float)tong / n);
    
    if (demDuong > 0)
        printf("Trung bing duong cua mang: %.2f\n", (float)tongDuong / demDuong);
    else
        printf("khong co so duong.\n");

    if (demAm > 0)
        printf("trung binh cong cac so am: %.2f\n", (float)tongAm / demAm);
    else
        printf("Khong co so am trong mang \n ");
        return 0;
   }
