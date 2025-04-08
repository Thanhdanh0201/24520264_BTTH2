#include <iostream>
#include "GioPhutGiay.cpp"
using namespace std;

int main()
{
    GioPhucGiay thoiGian;

    cout << "Nhap thoi gian:" << endl;
    thoiGian.Nhap();

    cout << "Thoi gian ban dau:" << endl;
    thoiGian.Xuat();

    thoiGian.TinhCongThemMotGiay();

    cout << "Thoi gian sau khi cong them 1 giay:" << endl;
    thoiGian.Xuat();

    return 0;
}