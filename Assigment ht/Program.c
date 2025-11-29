// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>
void kiemTraSoNguyen()
{
	int tieptuc;
	do
	{
		int chon;
		int x;
		printf("\nNhap so: ");
		if (scanf("%d", &x) != 1) return;
		int laNguyenTo = 1;
		if (x < 2) laNguyenTo = 0;
		else {
			for (int i = 2; i * i <= x; i++) {
				if (x % i == 0) {
					laNguyenTo = 0;
					break;
				}
			}
		}
		int can = (int)sqrt(x);
		int laChinhPhuong = (can * can == x);
		printf("Nguyen to: %s\n", laNguyenTo ? "Co" : "Khong");
		printf("Chinh phuong: %s\n", laChinhPhuong ? "Co" : "Khong");
		printf("Tiep tuc chuc nang nay ? [1=khong | 2=Co]: ");
		scanf("%d", &tieptuc);
	} while (tieptuc != 1);
}
void timUocvaBoiSoChung()
{
	int tieptuc;
	do {
		int chon;
		int a, b;
		printf("\nNhap a: ");
		if (scanf("%d", &a) != 1) return;
		printf("Nhap b: ");
		if (scanf("%d", &b) != 1) return;

		int x = a, y = b;
		while (y != 0) {
			int du = x % y;
			x = y;
			y = du;
		}

		printf("UCLN: %d\n", x);

		if (a == 0 || b == 0)
			printf("Khong co BCNN\n");
		else
			printf("BCNN: %d\n", (a * b) / x);
		printf("Tiep tuc chuc nang nay ? [1=khong | 2=Co]: ");
		scanf("%d", &tieptuc);
	} while (tieptuc != 1);
}
void tinhTienquanKaraoke()
{
	int tieptuc;
	do
	{
		int chon;
		int batDau, ketThuc;
		printf("Gio bat dau: ");
		if (scanf("%d", &batDau) != 1) return;
		printf("Gio ket thuc: ");
		if (scanf("%d", &ketThuc) != 1) return;

		if (batDau >= ketThuc) {
			printf("Gio sai!\n");
			return;
		}

		int soGio = ketThuc - batDau;
		double tong = 0;
		double gia = 150000;

		if (soGio <= 3)
			tong = soGio * gia;
		else
			tong = 3 * gia + (soGio - 3) * gia * 0.7;

		if (batDau >= 14 && batDau <= 17)
			tong = tong * 0.9;

		printf("Thanh tien: %.0lf VND\n", tong);
		printf("Tiep tuc chuc nang nay ? [1=khong | 2=Co]: ");
		scanf("%d", &tieptuc);
	} while (tieptuc != 1);
}
void tienDien()
{
	int tieptuc;
	do
	{
		int chon;
		int kwh;
		double tong = 0;

		printf("Nhap kWh: ");
		if (scanf("%d", &kwh) != 1) return;

		if (kwh <= 50)
			tong = kwh * 1678;
		else if (kwh <= 100)
			tong = 50 * 1678 + (kwh - 50) * 1734;
		else if (kwh <= 200)
			tong = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
		else if (kwh <= 300)
			tong = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
		else if (kwh <= 400)
			tong = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
		else
			tong = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;

		printf("Tien dien: %.0lf VND\n", tong);
		printf("Tiep tuc chuc nang nay ? [1=khong | 2=Co]: ");
		scanf("%d", &tieptuc);
	} while (tieptuc != 1);
}
void doiTien()
{
	int tieptuc;
	do
	{
		int chon;
		int tien;
		printf("\nNhap so tien can doi: ");
		if (scanf("%d", &tien) != 1) return;
		int menhGia[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
		int soTo;
		printf("\nKet qua doi tien:\n");
		for (int i = 0; i < 9; i++) {
			soTo = tien / menhGia[i];
			if (soTo > 0) {
				printf("%d to %d\n", soTo, menhGia[i]);
				tien = tien % menhGia[i];
			}
		}
		printf("Tiep tuc chuc nang nay ? [1=khong | 2=Co]: ");
		scanf("%d", &tieptuc);
	} while (tieptuc != 1);
}
void laisuatNganHang()
{
	int tieptuc;
	do
	{
		printf_s("Chuc nang chua phat trien\n");
		printf("Xin nhap lai chuc nang khac[1-5].\n");
		printf("Tiep tuc chuc nang nay ? [1=khong | 2=Co]: ");
		scanf("%d", &tieptuc);
	} while (tieptuc != 1);
}
void vayTienMuaXe()
{
	int tieptuc;
	do
	{
		printf_s("Chuc nang chua phat trien\n");
		printf("Xin nhap lai chuc nang khac[1-5].\n");
		printf("Tiep tuc chuc nang nay ? [1=khong | 2=Co]: ");
		scanf("%d", &tieptuc);
	} while (tieptuc != 1);
}
void thongTinSinhVien()
{
	int tieptuc;
	do
	{
		printf_s("Chuc nang chua phat trien\n");
		printf("Xin nhap lai chuc nang khac[1-5].\n");
		printf("Tiep tuc chuc nang nay ? [1=khong | 2=Co]: ");
		scanf("%d", &tieptuc);
	} while (tieptuc != 1);
}
void miniGame()
{
	int tieptuc;
	do
	{
		printf_s("Chuc nang chua phat trien\n");
		printf("Xin nhap lai chuc nang khac[1-5].\n");
		printf("Tiep tuc chuc nang nay ? [1=khong | 2=Co]: ");
		scanf("%d", &tieptuc);
	} while (tieptuc != 1);
}
void tinhPhanSo()
{
	int tieptuc;
	do
	{
		printf_s("Chuc nang chua phat trien\n");
		printf("Xin nhap lai chuc nang khac[1-5].\n");
		printf("Tiep tuc chuc nang nay ? [1=khong | 2=Co]: ");
		scanf("%d", &tieptuc);
	} while (tieptuc != 1);
}
int main()
{
	int chon;
	do
	{
		printf("==== CHUONG TRINH ====\n");
		printf_s("Menu: \n");
		printf_s("1.Kiem tra so nguyen \n");
		printf_s("2.Tim uoc va boi so chung \n");
		printf_s("3.Tinh tien quan Karaoke \n");
		printf_s("4.Tinh tien dien \n");
		printf_s("5.Doi tien \n");
		printf_s("6.Lai suat vay ngan hang, vay tra gop \n");
		printf_s("7.Vay tien mua xe \n");
		printf_s("8.Thong tin sinh vien \n");
		printf_s("9.Mini game FPOLY-LOTT \n");
		printf_s("10.Tinh toan phan so \n");
		printf_s("0.Thoat chuong trinh \n");
		printf_s("Xin moi chon chuc nang[1-10]: ");
		scanf_s("%d", &chon);
		switch (chon)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			timUocvaBoiSoChung();
			break;
		case 3:
			tinhTienquanKaraoke();
			break;
		case 4:
			tienDien();
			break;
		case 5:
			doiTien();
			break;
		case 6:
			laisuatNganHang();
			break;
		case 7:
			vayTienMuaXe();
			break;
		case 8:
			thongTinSinhVien();
			break;
		case 9:
			miniGame();
			break;
		case 10:
			tinhPhanSo();
			break;
		case 0:
			printf("Thoat chuong trinh.\n");
			break;
		default:
			printf("Vui long chon CN Menu [1-10].\n");
			break;
		}
	} while (chon != 0);
}

// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Mo "View" > "Solution Explorer"
//          de them/quan ly cac files
//   2. Mo "View" > "Output"
//          de kiem tra "build output" va "cac thong bao khac"
//   3. Mo "View" > "Error List"
//          de xem loi
//   4. Chon Project > "Add" > "New Item"
//          de tao moi file code,
//      hoac Project > "Add" > "Existing Item"
//          de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//          chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//          trong cua so "Solution Explorer"
//          bam chuot phai vao "Solution"
//          chon "Open Folder in File Explorer"

// GV: AnhTT184