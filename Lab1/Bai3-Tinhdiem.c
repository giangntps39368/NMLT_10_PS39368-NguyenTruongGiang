#include <stdio.h>

int main() {
    char mssv[10];
    char hoten[100];
    float toan, ly, hoa, dtb;

    printf("Nhap ma so sinh vien: ");
    scanf("%19s", mssv);

    getchar(); 

    printf("Nhap ho va ten: ");
    fgets(hoten, sizeof(hoten), stdin);

    printf("Nhap diem Toan: ");
    scanf("%f", &toan);

    printf("Nhap diem Ly: ");
    scanf("%f", &ly);

    printf("Nhap diem Hoa: ");
    scanf("%f", &hoa);

    dtb = (toan * 2 + ly + hoa) / 4;

    printf("\n===== KET QUA =====\n");
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s", hoten);
    printf("Diem Trung Binh: %.2f\n", dtb);

    return 0;
}