#include <stdio.h>
#include <string.h>
struct SinhVien
{
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};
void menu();
void nhapXuatSinhVien(struct SinhVien mangSV[], int n);
void sapXepSinhVien(struct SinhVien mangSV[], int n);
void timKiemSinhVien(struct SinhVien mangSV[], int n);
void xuatHocBong(struct SinhVien mangSV[], int n);

int main()
{
    int chon;
    int n = 0;

    struct SinhVien mangSV[100];

    do
    {
        menu();
        printf(">> Xin moi chon chuc nang (1-5): ");
        scanf("%d", &chon);
        getchar();

        switch (chon)
        {
        case 1:
            printf("\nNhap so luong sinh vien: ");
            scanf("%d", &n);
            getchar();

            if (n > 0 && n <= 100)
            {
                nhapXuatSinhVien(mangSV, n);
            }
            else
            {
                printf("So luong sinh vien khong hop le!\n");
            }

            break;

        case 2:
            if (n == 0)
            {
                printf("Vui long chon chuc nang 1 de nhap sinh vien truoc!\n");
            }
            else
            {
                sapXepSinhVien(mangSV, n);
            }

            break;

        case 3:
            if (n == 0)
            {
                printf("Vui long chon chuc nang 1 de nhap sinh vien truoc!\n");
            }
            else
            {
                timKiemSinhVien(mangSV, n);
            }

            break;

        case 4:
            if (n == 0)
            {
                printf("Vui long chon chuc nang 1 de nhap sinh vien truoc!\n");
            }
            else
            {
                xuatHocBong(mangSV, n);
            }

            break;

        case 5:
            printf("Tam biet!\n");
            break;

        default:
            printf("Ban phai chon chuc nang tu 1 - 5!\n");
            break;
        }
    } while (chon != 5);
    return 0;
}
void menu()
{
    printf("\n");
    printf("   HE THONG QUAN LY SINH VIEN\n");
    printf("| 1. Nhap va Xuat danh sach sinh vien           |\n");
    printf("| 2. Sap xep sinh vien theo diem TB tang dan    |\n");
    printf("| 3. Tim kiem sinh vien theo MSSV               |\n");
    printf("| 4. Xuat danh sach sinh vien dat Hoc bong      |\n");
    printf("| 5. Thoat chuong trinh                         |\n");
}
void nhapXuatSinhVien(struct SinhVien mangSV[], int n)
{
    printf("\n");
    printf("CHUC NANG 1: NHAP VA XUAT SINH VIEN\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nNhap thong tin sinh vien thu %d\n", i + 1);
        printf("Ma so sinh vien: ");
        fgets(mangSV[i].mssv, sizeof(mangSV[i].mssv), stdin);
        mangSV[i].mssv[strcspn(mangSV[i].mssv, "\n")] = '\0';
        printf("Ho va ten: ");
        fgets(mangSV[i].tenSV, sizeof(mangSV[i].tenSV), stdin);
        mangSV[i].tenSV[strcspn(mangSV[i].tenSV, "\n")] = '\0';
        printf("Nganh hoc: ");
        fgets(mangSV[i].nganhHoc, sizeof(mangSV[i].nganhHoc), stdin);
        mangSV[i].nganhHoc[strcspn(mangSV[i].nganhHoc, "\n")] = '\0';
        printf("Diem trung binh: ");
        scanf("%f", &mangSV[i].diemTB);
        getchar();
    }
    printf("\n===== DANH SACH SINH VIEN =====\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nSinh vien thu %d\n", i + 1);
        printf("MSSV: %s\n", mangSV[i].mssv);
        printf("Ho ten: %s\n", mangSV[i].tenSV);
        printf("Nganh hoc: %s\n", mangSV[i].nganhHoc);
        printf("Diem TB: %.2f\n", mangSV[i].diemTB);
    }
}
void sapXepSinhVien(struct SinhVien mangSV[], int n)
{
    struct SinhVien temp;
    printf("\n");
    printf("CHUC NANG 2: SAP XEP SINH VIEN\n");
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (mangSV[i].diemTB < mangSV[j].diemTB)
            {
                temp = mangSV[i];
                mangSV[i] = mangSV[j];
                mangSV[j] = temp;
            }
        }
    }
    printf("\nDanh sach sinh vien sau khi sap xep:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nSinh vien thu %d\n", i + 1);
        printf("MSSV: %s\n", mangSV[i].mssv);
        printf("Ho ten: %s\n", mangSV[i].tenSV);
        printf("Nganh hoc: %s\n", mangSV[i].nganhHoc);
        printf("Diem TB: %.2f\n", mangSV[i].diemTB);
    }
}
void timKiemSinhVien(struct SinhVien mangSV[], int n)
{
    char mssvTim[50];
    int found = 0;
    printf("\n");
    printf("CHUC NANG 3: TIM KIEM SINH VIEN\n");
    printf("Nhap MSSV can tim: ");
    fgets(mssvTim, sizeof(mssvTim), stdin);
    mssvTim[strcspn(mssvTim, "\n")] = '\0';

    for (int i = 0; i < n; i++)
    {
        if (strcmp(mangSV[i].mssv, mssvTim) == 0)
        {
            printf("\nTim thay sinh vien!\n");

            printf("MSSV: %s\n", mangSV[i].mssv);
            printf("Ho ten: %s\n", mangSV[i].tenSV);
            printf("Nganh hoc: %s\n", mangSV[i].nganhHoc);
            printf("Diem TB: %.2f\n", mangSV[i].diemTB);

            found = 1;
        }
    }
    if (found == 0)
    {
        printf("Khong tim thay sinh vien co MSSV nay!\n");
    }
}
void xuatHocBong(struct SinhVien mangSV[], int n)
{
    int found = 0;

    printf("\n");
    printf("===== CHUC NANG 4: SINH VIEN DAT HOC BONG =====\n");

    printf("Danh sach sinh vien co diem TB >= 8.0:\n");

    for (int i = 0; i < n; i++)
    {
        if (mangSV[i].diemTB >= 8.0)
        {
            printf("\nSinh vien %d\n", i + 1);
            printf("MSSV: %s\n", mangSV[i].mssv);
            printf("Ho ten: %s\n", mangSV[i].tenSV);
            printf("Nganh hoc: %s\n", mangSV[i].nganhHoc);
            printf("Diem TB: %.2f\n", mangSV[i].diemTB);

            found = 1;
        }
    }

    if (found == 0)
    {
        printf("Khong co sinh vien nao dat hoc bong!\n");
    }
}