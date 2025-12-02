#include <stdio.h>
#include <math.h>
//Giai ?o?n 2 – Xây d?ng ch?c n?ng Y2.1, Y2.2, Y2.3, Y2.4, Y2.5, Y2.6
void nangCapChucNang()
{
	//Y2.1: T?i ?u ch?c n?ng ki?m tra s? nguyên t? và s? chính ph??ng
	//Y2.2: Thêm ch?c n?ng tính ti?n ?i?n v?i bi?u giá m?i
	//Y2.3: Thêm ch?c n?ng tính lãi su?t vay ngân hàng theo tháng
	//Y2.4: Thêm ch?c n?ng hi?n th? thông tin sinh viên v?i phân lo?i h?c l?c
	//Y2.5: Thêm ch?c n?ng mini game FPOLY-LOTT v?i gi?i th??ng ph?
	//Y2.6: Thêm ch?c n?ng tính phân s? v?i rút g?n k?t qu?
}
void kiemTraSoNguyen()
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
}
void timUocvaBoiSoChung()
{
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
}
void tinhTienquanKaraoke()
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
}
void tienDien()
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
}
void doiTien()
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
}
void laisuatNganHang()
{
	printf("\nNhap so tien muon vay: ");
	double tienVay;
	if (scanf("%lf", &tienVay) != 1) return;
	double laiSuatThang = 0.05;
	double tongTienPhaiTra = tienVay * pow((1 + laiSuatThang), 12);
	printf("Tong so tien phai tra sau 12 thang: %.2lf VND\n", tongTienPhaiTra);

}
void vayTienMuaXe()
{
	printf("\nNhap so phan tram vay toi da (0-100): ");
	double phanTramVay;
	if (scanf("%lf", &phanTramVay) != 1) return;
	if (phanTramVay < 0 || phanTramVay > 100) {
		printf("Phan tram vay khong hop le!\n");
		return;
	}
	double giaTriXe = 500000000;
	double soTienVay = giaTriXe * (phanTramVay / 100);
	double laiSuatNam = 0.072;
	int thoiHanVayNam = 24;
	int soThangVay = thoiHanVayNam * 12;
	double tongTienPhaiTra = soTienVay * pow((1 + laiSuatNam), thoiHanVayNam);
	double tienTraHangThang = tongTienPhaiTra / soThangVay;
	double tienTraLanDau = tienTraHangThang; 
	printf("So tien phai tra lan dau: %.2lf VND\n", tienTraLanDau);
	printf("So tien phai tra hang thang: %.2lf VND\n", tienTraHangThang);
}
void thongTinSinhVien()
{
	printf("\nNhap ho ten sinh vien (Ko Dau): ");
	char hoTen[100];
	getchar(); 
	fgets(hoTen, sizeof(hoTen), stdin);
	printf("Nhap diem sinh vien (1-10): ");
	double diem;
	if (scanf("%lf", &diem) != 1) return;
	const char* hocLuc;
	if (diem >= 9.0)
		hocLuc = "Xuat sac";
	else if (diem >= 8.0)
		hocLuc = "Gioi";
	else if (diem >= 6.5)
		hocLuc = "Kha";
	else if (diem >= 5.0)
		hocLuc = "Trung binh";
	else
		hocLuc = "Yeu";
	printf("\nThong tin sinh vien:\n");
	printf("Ho ten: %s", hoTen);
	printf("Diem: %.2lf\n", diem);
	printf("Hoc luc: %s\n", hocLuc);
}
void miniGame()
{
	printf("\nNhap so ban chon (01-15): ");
	int soBanChon;
	if (scanf("%d", &soBanChon) != 1) return;
	if (soBanChon < 1 || soBanChon > 15) {
		printf("So khong hop le!\n");
		return;
	}
	srand((unsigned int)time(NULL));
	int soXo = rand() % 15 + 1;
	printf("So xo: %02d\n", soXo);
	if (soBanChon == soXo) {
		printf("Chuc mung ban da trung giai nhat!\n");
	}
	else {
		printf("Chuc ban may man lan sau!\n");
	}
}
void tinhPhanSo()
{
	printf("\nNhap phan so thu nhat (a/b): ");
	int a1, b1;
	char slash1;
	if (scanf("%d %c %d", &a1, &slash1, &b1) != 3 || slash1 != '/' || b1 == 0) {
		printf("Phan so khong hop le!\n");
		return;
	}
	printf("Nhap phan so thu hai (c/d): ");
	int a2, b2;
	char slash2;
	if (scanf("%d %c %d", &a2, &slash2, &b2) != 3 || slash2 != '/' || b2 == 0) {
		printf("Phan so khong hop le!\n");
		return;
	}
	// Tong
	int tuTong = a1 * b2 + a2 * b1;
	int mauTong = b1 * b2;
	printf("Tong: %d/%d\n", tuTong, mauTong);
	// Hieu
	int tuHieu = a1 * b2 - a2 * b1;
	int mauHieu = b1 * b2;
	printf("Hieu: %d/%d\n", tuHieu, mauHieu);
	// Tich
	int tuTich = a1 * a2;
	int mauTich = b1 * b2;
	printf("Tich: %d/%d\n", tuTich, mauTich);
	// Thuong
	if (a2 == 0) {
		printf("Khong the chia cho phan so 0!\n");
	} else {
		int tuThuong = a1 * b2;
		int mauThuong = b1 * a2;
		printf("Thuong: %d/%d\n", tuThuong, mauThuong);
	}
}
void lapChucNang(int chon)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
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
		printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}

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
		lapChucNang(chon);
	} while (chon != 0);
}
// GV: AnhTT184