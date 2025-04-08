#include "SoPhuc.h"
#include <iostream>
using namespace std;

SoPhuc::SoPhuc()
{
    iThuc = 0;
    iAo = 0;
}

void SoPhuc::Nhap()
{
    cout << "Nhap phan thuc: ";
    cin >> iThuc;
    cout << "\nNhap phan ao: ";
    cin >> iAo;
    cout << endl;
}

void SoPhuc::Xuat()
{
    cout << iThuc << " + " << iAo << "i." << endl;
}

SoPhuc SoPhuc::operator+(SoPhuc tmp)
{
    SoPhuc kq;
    kq.iThuc = iThuc + tmp.iThuc;
    kq.iAo = iAo + tmp.iAo;
    return kq;
}

SoPhuc SoPhuc::operator-(SoPhuc tmp)
{
    SoPhuc kq;
    kq.iThuc = iThuc - tmp.iThuc;
    kq.iAo = iAo - tmp.iAo;
    return kq;
}

SoPhuc SoPhuc::operator*(SoPhuc tmp)
{
    SoPhuc kq;
    kq.iThuc = iThuc * tmp.iThuc - iAo * tmp.iAo;
    kq.iAo = iThuc * tmp.iAo + iAo * tmp.iThuc;
    return kq;
}

SoPhuc SoPhuc::operator/(SoPhuc tmp)
{
    SoPhuc kq;
    double mau = tmp.iThuc * tmp.iThuc + tmp.iAo * tmp.iAo;
    if (mau == 0)
    {
        cout << "Loi: Khong the chia cho 0!" << endl;
        return kq;
    }
    kq.iThuc = (iThuc * tmp.iThuc + iAo * tmp.iAo) / mau;
    kq.iAo = (iAo * tmp.iThuc - iThuc * tmp.iAo) / mau;
    return kq;
}

void SoPhuc::Tong(SoPhuc tmp)
{
    SoPhuc kq = *this + tmp;
    cout << "Tong cua 2 so phuc la: ";
    kq.Xuat();
}

void SoPhuc::Hieu(SoPhuc tmp)
{
    SoPhuc kq = *this - tmp;
    cout << "Hieu cua 2 so phuc la: ";
    kq.Xuat();
}

void SoPhuc::Tich(SoPhuc tmp)
{
    SoPhuc kq = *this * tmp;
    cout << "Tich cua 2 so phuc la: ";
    kq.Xuat();
}

void SoPhuc::Thuong(SoPhuc tmp)
{
    SoPhuc kq = *this / tmp;
    cout << "Thuong cua 2 so phuc la: ";
    kq.Xuat();
}