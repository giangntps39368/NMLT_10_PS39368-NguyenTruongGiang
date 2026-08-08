#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <float.h>
void menu();
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void chucNang5();

float tinhTrungBinhCong(int a[], int n);
void timMaxMin(int a[], int n);
void sapXepGiamDan(int a[], int n);
void maTranBinhPhuong(int row, int col);
void xuatSoLeMaTran(int row, int col);
void swap(int *a, int *b);
int main() 
{
    int chon;
    do
    {
        menu();
        printf("Xin moi chon chuc nang tu 1 - 6: ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1:
            chucNang1();
            break;
        case 2:
            chucNang2();
            break;
        case 3:
            chucNang3();
            break;
        case 4:
            chucNang4();
            break;
        case 5:
            chucNang5();
            break;
        case 6:
            printf("Tam biet!");
            break;
        default:
            printf("Ban phai chon chuc nang tu 1 - 6\n");
            break;
        }
    } while (chon != 6);

    return 0;
}
void menu()
{
    printf("    MENU CHUONG TRINH LAB 6               \n");
    printf("1. Tinh trung binh tong so chia het cho 3 va 5\n");
    printf("2. Tim gia tri Lon nhat va Nho nhat trong Mang\n");
    printf("3. Sap xep Mang theo thu tu Giam dan\n");
    printf("4. Ma tran binh phuong (Mang 2 chieu)\n");
    printf("5. Loc va xuat vi tri cac So le trong Ma tran\n");
    printf("6. Thoat chuong trinh\n");
}
void chucNang1() {
    int n;
    int a[100];
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap A[%d] = ", i);
        scanf("%d", &a[i]);
    }
    float tbc = tinhTrungBinhCong(a, n);
    if (tbc == -FLT_MAX) {
        printf("Khong co so chia het cho 3 va 5\n");
    } else {
        printf("Trung binh cong cua mang: %.2f\n", tbc);
    }
}

float tinhTrungBinhCong(int a[], int n) {
    int tong = 0;
    int soDem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0 && a[i] % 5 == 0) {
            tong += a[i];
            soDem++;
        }
    }
    if (soDem == 0) {
        return -FLT_MAX;
    } else {
        return (float)tong / soDem;
    }
}
void chucNang2() {
    int n;
    int a[100];
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap A[%d] = ", i);
        scanf("%d", &a[i]);
    }
    timMaxMin(a, n);
}

void timMaxMin(int a[], int n) {
    int min = a[0];
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (min > a[i]) min = a[i];
        if (max < a[i]) max = a[i];
    }
    printf("Min = %d\t Max = %d\n", min, max);
}

void chucNang3() {
    int n;
    int a[100];
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap A[%d] = ", i);
        scanf("%d", &a[i]);
    }
    sapXepGiamDan(a, n);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sapXepGiamDan(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                swap(&a[i], &a[j]);
            }
        }
    }
    printf("Mang sau khi sap xep giam dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
void chucNang4() {
    int row, col;
    printf("Nhap so hang: ");
    scanf("%d", &row);
    printf("Nhap so cot: ");
    scanf("%d", &col);
    maTranBinhPhuong(row, col);
}

void maTranBinhPhuong(int row, int col) {
    int a[100][100];
    printf("--- Nhap cac phan tu ma tran ---\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nMa tran binh phuong (cac phan tu binh phuong):\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", a[i][j] * a[i][j]);
        }
        printf("\n");
    }
}
void chucNang5() {
    int row, col;
    printf("Nhap so hang: ");
    scanf("%d", &row);
    printf("Nhap so cot: ");
    scanf("%d", &col);
    xuatSoLeMaTran(row, col);
}

void xuatSoLeMaTran(int row, int col) {
    int a[100][100];
    printf("--- Nhap cac phan tu ma tran ---\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\nCac phan tu le trong ma tran:\n");
    int dem = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (a[i][j] % 2 != 0) {
                printf("Gia tri %d tai vi tri hang %d, cot %d\n", a[i][j], i, j);
                dem++;
            }
        }
    }
    
    if (dem == 0) {
        printf("Khong co so le nao trong ma tran.\n");
    }
}