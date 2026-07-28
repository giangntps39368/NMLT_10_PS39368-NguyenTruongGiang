#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
                printf("Ban da chon chuong trinh kiem tra so nguyen\n");
                break;
            }
        case 2:
            {
            printf("Ban da chon chuong trinh tim uoc chung va boi chung cua 2 so\n");
            break;
             }
        case 3:
            {
            printf("Ban da chon chuong trinh tinh tien cho quan karaoke\n");
            break;
            }
        case 4:
            {
            printf("Ban da chon chuong trinh tinh tien dien\n");
            break;
            }
        case 5:
            {
            printf("Ban da chon chuong trinh doi tien\n");
            break;
            }
        case 6:
            {
            printf("Ban da chon chuong trinh tinh lai suat ngan hang vay tra gop\n");
            break;
            }
        case 7:
            {
            printf("Ban da chon chuong trinh vay tien mua xe\n");
            break;
            }
        case 8:
            {
            printf("Ban da chon chuong trinh sap xep thong tin sinh vien\n");
            break;
            }
        case 9:
            {
            printf("Ban da chon chuong trinh game FPOLY-LOTT\n");
            break;
            }
        case 10:
            {
            printf("Ban da chon chuong trinh tinh toan phan so\n");
            break;
            }
        }
    }while (chon != 11);
    return 1;
}