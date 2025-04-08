#include <iostream>
#include "PhanSo.cpp"

using namespace std;

int main()
{
    cout << "Nhap phan so thu nhat: " << endl;
    PhanSo a;
    a.Nhap();
    
    cout << "Nhap phan so thu hai: " << endl;
    PhanSo b;
    b.Nhap();
    
    a.Tong(b);
    a.Hieu(b);
    a.Tich(b);
    a.Thuong(b);
    a.SoSanh(b);
    
    return 0;
}