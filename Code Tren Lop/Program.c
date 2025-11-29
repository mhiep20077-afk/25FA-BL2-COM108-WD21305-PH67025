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
			// ham goi chuc nang 2
			break;
		case 3:
			sapXepPhanTuMang();
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
		printf("2. TEN chuc nang 2");
		printf("\n");
		printf("3. sapXepPhanTuMang");
		printf("\n");
		printf("0. Thoat");
		printf("\n");
		printf("Hay chon chuc nang [0-3]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}


// GV: AnhTT184