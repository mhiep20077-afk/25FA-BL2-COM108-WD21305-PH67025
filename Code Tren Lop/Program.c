#include <stdio.h>
#include <math.h>

void kiemTraSoNguyen()
{
	printf("Kiem Tra So Nguyen");
	printf("\n");
}
void sapXepPhanTuMang()
{
	int mangsonguyen[100];
	int tmp;
	int length;
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &length);

	printf("Nhap du lieu cho mang %d phan tu\n", length);
	for (int i = 0; i < length; i++)
	{
		printf("mang [%d] = ", i);
		scanf("%d", &mangsonguyen[i]);
	}
	printf("Sap xep mang tang dan\n", length);
	for (int i = 0; i < length - 1; i++)
	{
		if (mangsonguyen[i] > mangsonguyen[i + 1])
		{
			tmp = mangsonguyen[i];
			mangsonguyen[i] = mangsonguyen[i + 1];
			mangsonguyen[i + 1] = tmp;
		}

	}
	printf("Du lieu cho mang %d phan tu \n", length);
	for (int i = 0; i < length; i++)
	{
		printf("\nmang [%d] = %d\n", i, mangsonguyen[i]);
	}
}

void demoMang2Chieu()
{
	//string - string.h
	char mangkytu[10] = "Hello";
	//scanf("%c");
	//gets(mangkytu);
	for (int i = 0; i < 3; i++)
	{
		scanf("%c", &mangkytu[i]);
	}
	//printf("%c\n");
	puts(mangkytu);
	int array[2][3];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("Nhap phan tu array[%d][%d]: ", i, j);
			scanf("%d", &array[i][j]);
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("Mang[%d][%d] =", i, j;
			scanf_s("%d", &array[i][j]);
		}
		printf("\n");
	}
}
void string()
{
	//string
	char mangKyTu[10] = 'ANH';
	//scanf("%c"
	//gets(mangKyTu);
	while (getchar() != '\n');
	printf("Nhap du lieu String: ");
	fgets(mangKyTu, sizeof(mangKyTu), stdin);
	//loop + printf("%c\n"
	printf("%s", mangKyTu);
	printf("\n");
	// put(mangKyTu);
	printf("%d", strlen(mangKyTu) - 1);
	printf("\n");

	printf("%d", strcmp("A", "B"));
	printf("\n");
	char str[5] = "ABC";
	printf("%s", strrev(str));
	printf("\n");

	printf("%s", strlwr(str));
	printf("\n");

	printf("%s", strupr(str));
	printf("\n");

	printf(strstr("ABC", "D"));
	printf("\n");
}
void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			demoMang2Chieu();
			break;
		case 3:
			sapXepPhanTuMang();
			break;
		case 4:
			string();
			break;
		default:
			printf("Chon sai. Chuc nang hop le [0-3]");
			break;
		}

		printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}

}

int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1. Kiem Tra So Nguyen");
		printf("\n");
		printf("2. demoMang2Chieu");
		printf("\n");
		printf("3. sapXepPhanTuMang");
		printf("\n");
		printf("4. String");
		printf("\n");
		printf("0. Thoat");
		printf("\n");
		printf("Hay chon chuc nang [0-3]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}


// GV: AnhTT184