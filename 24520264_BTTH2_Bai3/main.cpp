#include "SoPhuc.cpp"
#include <iostream>
using namespace std;
int main()
{
    SoPhuc a, b;
    cout << "Nhap thong tin so phuc thu nhat: " << endl;
    a.Nhap();
    cout << "Nhap thong tin so phuc thu hai: " << endl;
    b.Nhap();
    cout << "So phuc thu nhat: ";
    a.Xuat();
    cout << "So phuc thu hai: ";
    b.Xuat();
    a.Tong(b);
    a.Hieu(b);
    a.Tich(b);
    a.Thuong(b);
    return 0;
}
