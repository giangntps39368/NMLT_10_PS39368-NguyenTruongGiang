#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int chon;

    do
    {
        printf("\n MENU - CHUONG TRINH LAB 4 \n");
        printf("1. Tinh diem trung binh chia het cho 2 \n");
        printf("2. Kiem tra so nguyen to\n");
        printf("3. Kiem tra so chinh phuong\n");
        printf("4. Thoat chuong trinh\n");
        printf(">> Chon chuc nang (1 - 4): ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
            int min;
            int max;
            int bienDem = 0;
            int tong = 0;
            float trungBinh;
            printf("Ban da chon chuong trinh so 1\n");
            printf("Hay nhap min: ");
            scanf("%d", &min);
            printf("hay nhap max: ");
            scanf("%d", &max);

            if (min > max)
            {
                printf("Loi min nho hon hoac bang max");
                return 0;
            }
            else
            {
                for (int i = min; i <= max; i++)
                {
                    if (i % 2 == 0)
                    {
                        bienDem++;
                        tong += i;
                    }
                }
            }

            if (bienDem == 0)
            {
                printf("Khong co diem trung binh vi khong co so nao chia het cho 2");
            }
            else
            {
                trungBinh = 1.0 * tong / bienDem;
                printf("Diem trung binh la %.2f", trungBinh);
            }

            break;

        case 2:
            printf("Ban da chon chuong trinh so 2\n");
            int x;
            int uoc = 1;

            printf("Nhap so nguyen x: ");
            scanf("%d", &x);

            if (x < 2)
            {
                uoc = 0;
            }
            else
            {
                for (int i = 2; i <= sqrt(x); i++)
                {
                    if (x % i == 0)
                    {
                        uoc = 0;
                    }
                }
            }

            if (uoc == 1)
            {
                printf("day la so nguyen to");
            }
            else
            {
                printf("day khong phai la so nguyen to");
            }
            break;

        case 3:
            int X;
            int dk = 0;
            printf("Hay nhap 1 so nguyen x: ");
            scanf("%d", &X);

            if (X < 0)
            {
                printf("Day khong phai la so chinh phuong");
                return 0;
            }
            else if (X >= 0)
            {
                for (int i = 0; i <= X; i++)
                {
                    if (X == i * i)
                    {
                        printf("Day la so chinh phuong");
                        dk++;
                        break;
                    }
                }
            }

            if (dk == 0)
            {
                printf("Day khong phai la so chinh phuong");
            }
            break;

        case 4:
            printf("Thoat chuong trinh!\n");
            break;

        default:
            printf("Lua chon khong hop le!\n");
        }

    } while (chon != 4);

    return 0;
}