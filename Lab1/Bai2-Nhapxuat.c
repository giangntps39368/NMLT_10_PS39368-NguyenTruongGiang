#include <stdio.h>

int main() {
    char mssv[10];
    char hoten[100];
    int namsinh;
    float dtb;

    printf("Nhap ma so sinh vien: ");
    scanf("%19s", mssv);

    getchar(); 

    printf("Nhap ho va ten: ");
    fgets(hoten, sizeof(hoten), stdin);

    printf("Nhap nam sinh: ");
    scanf("%d", &namsinh);

    printf("Nhap diem trung binh: ");
    scanf("%f", &dtb);

    printf("\n===== THONG TIN SINH VIEN =====\n");
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s", hoten);
    printf("Nam sinh: %d\n", namsinh);
    printf("Tuoi: %d\n", 2026 - namsinh);
    printf("Diem Trung Binh: %.2f\n", dtb);

    return 0;
}