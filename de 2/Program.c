#include <stdio.h>
void thongTinThuCung()
{
	int vonglap;
	do
	{
		char maThuCung[50];
		char tenThuCung[10];
		int namSinh;
		printf("Nhap ma thu cung: ");
		scanf_s("%s", maThuCung, sizeof(maThuCung));
		printf("Nhap ten thu cung: ");
		scanf_s("%s", tenThuCung, sizeof(tenThuCung));
		printf("Nhap nam sinh: ");
		scanf_s("%d", &namSinh);
		printf("\n=== Thong tin mon hoc ===\n");
		printf("Ma thu cung: %s\n", maThuCung);
		printf("Ten thu cung %s\n", tenThuCung);
		printf("Nam sinh: %d\n", namSinh);
		printf("Tuoi thu cung: %d\n", 2025 - namSinh);
		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong): ");
		scanf_s("%d", &vonglap);
	} while (vonglap == 1);
}
void tinhTong()
{
	int vonglap;
	do
	{
		int n, i, tong = 0;
		printf("Nhap so nguyen duong n: ");
		scanf_s("%d", &n);
		for (i = 1; i <= n; i++)
		{
			tong += i;
		}
		printf("Tong cac so tu 1 den %d la: %d\n", n, tong);
		if (n % 2 == 0)
		{
			printf("%d la so le.\n", n);
		}
		printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong): ");
		scanf_s("%d", &vonglap);
	} while (vonglap == 1);
}
int main()
{
	int chon;
	do
	{
		printf("==== CHUONG TRINH ====\n");
		printf_s("Menu: \n");
		printf_s("1.Thong tin thu cung \n");
		printf_s("2.Tinh tong \n");
		printf_s("3.... \n");
		printf_s("0.Thoat chuong trinh \n");
		printf_s("Xin moi chon chuc nang[1-3]: ");
		scanf_s("%d", &chon);
		switch (chon)
		{
		case 1:thongTinThuCung();
			break;
		case 2:tinhTong();
			break;
		case 3:
			break;
		case 0:
			printf("Thoat chuong trinh.\n");
			break;
		default:
			printf("Vui long chon CN Menu [1-3].\n");
			break;
		}
	} while (chon != 0);
}
