#include <stdio.h>
#include <string.h>
#include <ctype.h>
void menu();
void demNguyenAmPhuAm();
void kiemTraDangNhap();
void sapXepChuoi();
void thapPhanSangNhiPhan();

int main()
{
    int chon;

    do
    {
        menu();

        printf(">> Xin moi chon chuc nang (1-5): ");
        scanf("%d", &chon);
        getchar();

        switch (chon)
        {
        case 1:
            demNguyenAmPhuAm();
            break;

        case 2:
            kiemTraDangNhap();
            break;

        case 3:
            sapXepChuoi();
            break;

        case 4:
            thapPhanSangNhiPhan();
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
    printf("| MENU CHUONG TRINH LAB 7\n");
    printf("| 1. Dem Nguyen am va Phu am trong chuoi            |\n");
    printf("| 2. Dang nhap he thong (User & Password)           |\n");
    printf("| 3. Sap xep danh sach Chuoi theo Alphabet          |\n");
    printf("| 4. Chuyen doi so Thap phan sang Nhi phan (Chuoi)  |\n");
    printf("| 5. Thoat chuong trinh                             |\n");
}

void demNguyenAmPhuAm()
{
    char s[100];

    int demNA = 0;
    int demPA = 0;

    printf("\n CHUC NANG 1: DEM NGUYEN AM VA PHU AM \n");

    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++)
    {
        char c = tolower(s[i]);

        if (c == 'a' ||
            c == 'e' ||
            c == 'i' ||
            c == 'o' ||
            c == 'u')
        {
            demNA++;
        }
        else if (isalpha(s[i]))
        {
            demPA++;
        }
    }

    printf("So luong nguyen am: %d\n", demNA);
    printf("So luong phu am: %d\n", demPA);
}


void kiemTraDangNhap()
{
    char userSys[] = "admin";
    char passSys[] = "123456";

    char user[50];
    char pass[50];

    printf("\nCHUC NANG 2: DANG NHAP HE THONG\n");

    printf("Nhap Username: ");
    fgets(user, sizeof(user), stdin);

    printf("Nhap Password: ");
    fgets(pass, sizeof(pass), stdin);

    user[strcspn(user, "\n")] = '\0';
    pass[strcspn(pass, "\n")] = '\0';

    if (strcmp(user, userSys) == 0 &&
        strcmp(pass, passSys) == 0)
    {
        printf("Dang nhap thanh cong!\n");
    }
    else
    {
        printf("Username hoac Password khong chinh xac!\n");
    }
}


void sapXepChuoi()
{
    char s[5][50];
    char temp[50];

    printf("\nCHUC NANG 3: SAP XEP DANH SACH CHUOI\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Nhap chuoi thu %d: ", i + 1);

        fgets(s[i], sizeof(s[i]), stdin);
        s[i][strcspn(s[i], "\n")] = '\0';
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    printf("\nDanh sach sau khi sap xep Alphabet:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d. %s\n", i + 1, s[i]);
    }
}


void thapPhanSangNhiPhan()
{
    int n;
    char nhiPhan[50];

    int i = 0;

    printf("\nCHUC NANG 4: THAP PHAN SANG NHI PHAN\n");

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    getchar();

    if (n < 0)
    {
        printf("Vui long nhap so nguyen duong!\n");
        return;
    }

    if (n == 0)
    {
        printf("So nhi phan: 0\n");
        return;
    }
    while (n > 0)
    {
        nhiPhan[i] = (n % 2) + '0';

        n = n / 2;

        i++;
    }

    nhiPhan[i] = '\0';

    printf("So nhi phan: ");

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", nhiPhan[j]);
    }

    printf("\n");
}