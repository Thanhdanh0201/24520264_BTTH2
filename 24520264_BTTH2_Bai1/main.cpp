#include <iostream>
#include "NgayThangNam.cpp"
using namespace std;

int main() {
    NgayThangNam a;
    a.Nhap();
    cout << "Ngay hien tai la: ";
    a.Xuat();
    a.NgayThangNamTiepTheo();
    return 0;
}