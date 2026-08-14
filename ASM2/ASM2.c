#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int chon;

    do
    {
        printf("\n MENU CHUC NANG THONG TIN ASM \n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim uoc chung va boi chung cua 2 so\n");
        printf("3. Chuong trinh tinh tien cho quan karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Chuc nang doi tien\n");
        printf("6. Xay dung chuc nang tinh lai suat ngan hang vay tra gop\n");
        printf("7. Xay dung chuong trinh vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Xay dung game FPOLY-LOTT\n");
        printf("10. Xay dung chuong trinh tinh toan phan so\n");
        printf("11. Thoat chuong trinh\n");
        printf(">> Chon chuc nang (1 - 11): ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1:
        {
            int x;
            int i;
            int dem = 0;
            int can;
            printf("Ban da chon chuong trinh kiem tra so nguyen\n");
            printf("Nhap so nguyen x: ");
            scanf("%d", &x);
            printf("So %d la so nguyen\n", x);
            if (x < 2)
            {
                printf("So %d khong phai la so nguyen to\n", x);
            }
            else
            {
                for (i = 1; i <= x; i++)
                {
                    if (x % i == 0)
                    {
                        dem++;
                    }
                }

                if (dem == 2)
                {
                    printf("So %d la so nguyen to\n", x);
                }
                else
                {
                    printf("So %d khong phai la so nguyen to\n", x);
                }
            }
            if (x >= 0)
            {
                can = sqrt(x);

                if (can * can == x)
                {
                    printf("So %d la so chinh phuong\n", x);
                }
                else
                {
                    printf("So %d khong phai la so chinh phuong\n", x);
                }
            }
            else
            {
                printf("So %d khong phai la so chinh phuong\n", x);
            }

            break;
        }

        case 2:
        {
            int x, y;
            int a, b;
            int ucln, bcnn;

            printf("Ban da chon chuong trinh tim uoc chung va boi chung cua 2 so\n");

            printf("Nhap so x: ");
            scanf("%d", &x);

            printf("Nhap so y: ");
            scanf("%d", &y);

            a = x;
            b = y;
            while (b != 0)
            {
                int temp = b;
                b = a % b;
                a = temp;
            }

            ucln = a;

            if (ucln < 0)
            {
                ucln = -ucln;
            }
            if (ucln == 0)
            {
                bcnn = 0;
            }
            else
            {
                bcnn = (x * y) / ucln;

                if (bcnn < 0)
                {
                    bcnn = -bcnn;
                }
            }

            printf("Uoc chung lon nhat cua %d va %d la: %d\n",
                   x, y, ucln);

            printf("Boi chung nho nhat cua %d va %d la: %d\n",
                   x, y, bcnn);

            break;
        }

        case 3:
        {
            int gioBatDau;
            int gioKetThuc;
            int soGio;
            double tien;

            printf("Ban da chon chuong trinh tinh tien cho quan karaoke\n");

            printf("Nhap gio bat dau: ");
            scanf("%d", &gioBatDau);

            printf("Nhap gio ket thuc: ");
            scanf("%d", &gioKetThuc);

            if (gioBatDau < 12 || gioBatDau > 23 ||
                gioKetThuc < 12 || gioKetThuc > 23)
            {
                printf("Quan chi hoat dong tu 12 gio den 23 gio!\n");
            }
            else if (gioKetThuc <= gioBatDau)
            {
                printf("Gio ket thuc phai lon hon gio bat dau!\n");
            }
            else
            {
                soGio = gioKetThuc - gioBatDau;
                if (soGio <= 3)
                {
                    tien = 150000;
                }
                else
                {
                    tien = 150000 + (soGio - 3) * 150000 * 0.7;
                }
                if (gioBatDau >= 14 && gioBatDau <= 17)
                {
                    tien = tien * 0.9;
                }

                printf("So gio su dung: %d gio\n", soGio);
                printf("Tong tien thanh toan: %.0f VND\n", tien);
            }

            break;
        }

        case 4:
        {
            double soKwh;
            double tien;

            printf("Ban da chon chuong trinh tinh tien dien\n");

            printf("Nhap so kWh dien su dung: ");
            scanf("%lf", &soKwh);

            if (soKwh < 0)
            {
                printf("So kWh khong hop le!\n");
            }
            else if (soKwh <= 50)
            {
                tien = soKwh * 1678;

                printf("Tien dien phai tra: %.0f VND\n", tien);
            }
            else if (soKwh <= 100)
            {
                tien = 50 * 1678
                     + (soKwh - 50) * 1734;

                printf("Tien dien phai tra: %.0f VND\n", tien);
            }
            else if (soKwh <= 200)
            {
                tien = 50 * 1678
                     + 50 * 1734
                     + (soKwh - 100) * 2014;

                printf("Tien dien phai tra: %.0f VND\n", tien);
            }
            else if (soKwh <= 300)
            {
                tien = 50 * 1678
                     + 50 * 1734
                     + 100 * 2014
                     + (soKwh - 200) * 2536;

                printf("Tien dien phai tra: %.0f VND\n", tien);
            }
            else if (soKwh <= 400)
            {
                tien = 50 * 1678
                     + 50 * 1734
                     + 100 * 2014
                     + 100 * 2536
                     + (soKwh - 300) * 2834;

                printf("Tien dien phai tra: %.0f VND\n", tien);
            }
            else
            {
                tien = 50 * 1678
                     + 50 * 1734
                     + 100 * 2014
                     + 100 * 2536
                     + 100 * 2834
                     + (soKwh - 400) * 2927;

                printf("Tien dien phai tra: %.0f VND\n", tien);
            }

            break;
        }

        case 5:
        {
            int tien;
            int menhGia[] = {
                500,
                200,
                100,
                50,
                20,
                10,
                5,
                2,
                1
            };

            int soTo;

            printf("Ban da chon chuc nang doi tien\n");

            printf("Nhap so tien can doi: ");
            scanf("%d", &tien);

            if (tien <= 0)
            {
                printf("So tien khong hop le!\n");
            }
            else
            {
                printf("Cac menh gia tien duoc doi:\n");

                for (int i = 0; i < 9; i++)
                {
                    soTo = tien / menhGia[i];

                    if (soTo > 0)
                    {
                        printf("%d to %d\n",
                               soTo, menhGia[i]);

                        tien = tien % menhGia[i];
                    }
                }
            }

            break;
        }

        case 6:
        {
            double tienVay;
            double laiSuat;
            int soThang;
            double tienLai;
            double tongTien;
            double tienHangThang;

            printf("Ban da chon chuong trinh tinh lai suat ngan hang vay tra gop\n");

            printf("Nhap so tien vay: ");
            scanf("%lf", &tienVay);

            printf("Nhap lai suat moi thang (%%): ");
            scanf("%lf", &laiSuat);

            printf("Nhap so thang vay: ");
            scanf("%d", &soThang);

            if (tienVay <= 0 || laiSuat < 0 || soThang <= 0)
            {
                printf("Thong tin khong hop le!\n");
            }
            else
            {
                tienLai = tienVay * (laiSuat / 100) * soThang;

                tongTien = tienVay + tienLai;

                tienHangThang = tongTien / soThang;

                printf("Tien lai: %.0f VND\n", tienLai);
                printf("Tong tien phai tra: %.0f VND\n", tongTien);
                printf("Tien phai tra moi thang: %.0f VND\n",
                       tienHangThang);
            }

            break;
        }
        case 7:
        {
            double phanTramVay;
            double tienVay = 500000000;
            double tienTraTruoc;
            double laiSuat = 7.2;
            int thoiHan = 24;
            double tienLai;
            double tongTien;
            double tienHangThang;

            printf("Ban da chon chuong trinh vay tien mua xe\n");

            printf("Nhap so phan tram vay toi da: ");
            scanf("%lf", &phanTramVay);

            if (phanTramVay <= 0 || phanTramVay > 100)
            {
                printf("Phan tram vay khong hop le!\n");
            }
            else
            {
                tienTraTruoc = tienVay * (1 - phanTramVay / 100);

                tienLai = tienVay * (laiSuat / 100) * thoiHan;

                tongTien = tienVay + tienLai;

                tienHangThang = tongTien / (thoiHan * 12);

                printf("Tien tra lan dau: %.0f VND\n",
                       tienTraTruoc);

                printf("Tien vay: %.0f VND\n",
                       tienVay);

                printf("Tong tien phai tra: %.0f VND\n",
                       tongTien);

                printf("Tien phai tra hang thang: %.0f VND\n",
                       tienHangThang);

                printf("Thoi han vay: %d nam\n", thoiHan);
            }

            break;
        }
        case 8:
        {
            int n;
            char hoTen[50][50];
            float diem[50];
            char hocLuc[50][30];

            char tempTen[50];
            float tempDiem;
            char tempHocLuc[30];

            printf("Ban da chon chuong trinh sap xep thong tin sinh vien\n");

            printf("Nhap so luong sinh vien: ");
            scanf("%d", &n);

            if (n <= 0 || n > 50)
            {
                printf("So luong sinh vien phai tu 1 den 50!\n");
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    printf("\nNhap thong tin sinh vien thu %d\n", i + 1);

                    printf("Ho ten: ");
                    scanf(" %[^\n]", hoTen[i]);

                    printf("Diem: ");
                    scanf("%f", &diem[i]);

                    if (diem[i] >= 9.0)
                    {
                        sprintf(hocLuc[i], "Xuat sac");
                    }
                    else if (diem[i] >= 8.0)
                    {
                        sprintf(hocLuc[i], "Gioi");
                    }
                    else if (diem[i] >= 6.5)
                    {
                        sprintf(hocLuc[i], "Kha");
                    }
                    else if (diem[i] >= 5.0)
                    {
                        sprintf(hocLuc[i], "Trung binh");
                    }
                    else
                    {
                        sprintf(hocLuc[i], "Yeu");
                    }
                }
                for (int i = 0; i < n - 1; i++)
                {
                    for (int j = i + 1; j < n; j++)
                    {
                        if (diem[i] < diem[j])
                        {
                            tempDiem = diem[i];
                            diem[i] = diem[j];
                            diem[j] = tempDiem;
                            strcpy(tempTen, hoTen[i]);
                            strcpy(hoTen[i], hoTen[j]);
                            strcpy(hoTen[j], tempTen);
                            strcpy(tempHocLuc, hocLuc[i]);
                            strcpy(hocLuc[i], hocLuc[j]);
                            strcpy(hocLuc[j], tempHocLuc);
                        }
                    }
                }

                printf("\n DANH SACH SINH VIEN \n");

                for (int i = 0; i < n; i++)
                {
                    printf("\nSinh vien %d\n", i + 1);
                    printf("Ho ten: %s\n", hoTen[i]);
                    printf("Diem: %.2f\n", diem[i]);
                    printf("Hoc luc: %s\n", hocLuc[i]);
                }
            }

            break;
        }
        case 11:
        {
            printf("Ban da chon thoat chuong trinh\n");
            break;
        }
        case 9:
        {
            printf("Ban da chon chuong trinh game FPOLY-LOTT\n");
            printf("Chuc nang nay dang duoc phat trien, vui long quay lai sau!\n");
            break;
        }
        case 10:
        {
            printf("Ban da chon chuong trinh tinh toan phan so\n");
            printf("Chuc nang nay dang duoc phat trien, vui long quay lai sau!\n");
            break;
        }
        default:
        {
            printf("Chuc nang khong hop le! Vui long chon tu 1 - 11\n");
            break;
        }
        }

    } while (chon != 11);

    return 0;
}