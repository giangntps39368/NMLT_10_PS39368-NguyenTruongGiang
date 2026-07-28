#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int chon;

    do
    {
        printf("\n MENU - CHUONG TRINH LAB 3 \n");
        printf("1. Chuc nang tinh hoc luc sinh vien\n");
        printf("2. Chuc nang giai phuong trinh bac 2\n");
        printf("3. Chuc nang tinh tien dien tieu thu hang thang\n");
        printf("4. Thoat chuong trinh\n");
        printf(">> Chon chuc nang (1 - 4): ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
        {
            float diem;

            printf("\n CHUC NANG TINH HOC LUC SINH VIEN \n");
            printf("Nhap diem trung binh: ");
            scanf("%f", &diem);

            if (diem < 0 || diem > 10)
            {
                printf("Diem so nhap vao khong hop le!\n");
            }
            else if (diem <= 9)
            {
                printf("Hoc luc: Xuat sac\n");
            }
            else if (diem <= 8)
            {
                printf("Hoc luc: Gioi\n");
            }
            else if (diem <= 6.5)
            {
                printf("Hoc luc: Kha\n");
            }
            else if (diem <= 6)
            {
                printf("Hoc luc: Trung binh\n");
            }
            else if (diem <= 3.5)
            {
                printf("Hoc luc: Yeu\n");
            }
            else if (diem >= 3)
            {
                printf("Hoc luc: Kem\n");
            }

            break;
        }

        case 2:
        {
            float a, b, c;
            float delta, x1, x2;

            printf("\n CHUC NANG GIAI PHUONG TRINH BAC 2 \n");

            printf("Nhap he so a: ");
            scanf("%f", &a);

            printf("Nhap he so b: ");
            scanf("%f", &b);

            printf("Nhap he so c: ");
            scanf("%f", &c);

            if (a == 0)
            {
                if (b == 0)
                {
                    if (c == 0)
                    {
                        printf("Phuong trinh vo so nghiem.\n");
                    }
                    else
                    {
                        printf("Phuong trinh vo nghiem.\n");
                    }
                }
                else
                {
                    printf("Phuong trinh co nghiem x = %.2f\n", -c / b);
                }
            }
            else
            {
                delta = b * b - 4 * a * c;

                if (delta < 0)
                {
                    printf("Phuong trinh vo nghiem.\n");
                }
                else if (delta == 0)
                {
                    printf("Phuong trinh co nghiem kep x = %.2f\n", -b / (2 * a));
                }
                else
                {
                    x1 = (-b + sqrt(delta)) / (2 * a);
                    x2 = (-b - sqrt(delta)) / (2 * a);

                    printf("Phuong trinh co 2 nghiem:\n");
                    printf("x1 = %.2f\n", x1);
                    printf("x2 = %.2f\n", x2);
                }
            }

            break;
        }

        case 3:
        {
            int soDien;
            float tien;

            printf("\n=== CHUC NANG TINH TIEN DIEN ===\n");
            printf("Nhap so kWh dien tieu thu: ");
            scanf("%d", &soDien);

            if (soDien < 0)
            {
                printf("So dien khong hop le!\n");
            }
            else if (soDien <= 50)
            {
                tien = soDien * 1678;
                printf("Tien dien phai tra: %.0f dong\n", tien);
            }
            else if (soDien <= 100)
            {
                tien = 50 * 1678 + (soDien - 50) * 1734;
                printf("Tien dien phai tra: %.0f dong\n", tien);
            }
            else if (soDien <= 200)
            {
                tien = 50 * 1678
                     + 50 * 1734
                     + (soDien - 100) * 2014;
                printf("Tien dien phai tra: %.0f dong\n", tien);
            }
            else if (soDien <= 300)
            {
                tien = 50 * 1678
                     + 50 * 1734
                     + 100 * 2014
                     + (soDien - 200) * 2536;
                printf("Tien dien phai tra: %.0f dong\n", tien);
            }
            else if (soDien <= 400)
            {
                tien = 50 * 1678
                     + 50 * 1734
                     + 100 * 2014
                     + 100 * 2536
                     + (soDien - 300) * 2834;
                printf("Tien dien phai tra: %.0f dong\n", tien);
            }
            else
            {
                tien = 50 * 1678
                     + 50 * 1734
                     + 100 * 2014
                     + 100 * 2536
                     + 100 * 2834
                     + (soDien - 400) * 2927;
                printf("Tien dien phai tra: %.0f dong\n", tien);
            }

            break;
        }

        case 4:
        {
            printf("Cam on ban da su dung chuong trinh!\n");
            break;
        }

        default:
        {
            printf("Vui long chon tu 1 den 4!\n");
            break;
        }
        }

    } while (chon != 4);

    return 0;
}