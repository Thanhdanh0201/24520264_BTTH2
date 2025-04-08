#include <iostream>
#include <cmath>
#include "PhanSo.h"

using namespace std;

int PhanSo::gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

PhanSo::PhanSo()
{
    iTu = 0;
    iMau = 1;
}

void PhanSo::Nhap()
{
    cout << "Nhap vao tu so: ";
    cin >> iTu;
    do
    {
        cout << "Nhap vao mau so khac 0: ";
        cin >> iMau;
        if (iMau == 0)
            cout << "Mau khong hop le!\nHay nhap lai!\n";
        else
            break;
    } while (true);
}

void PhanSo::RutGon()
{
    int tmp = gcd(abs(iTu), abs(iMau));
    iTu /= tmp;
    iMau /= tmp;
    if (iMau < 0)
    {
        iTu = -iTu;
        iMau = -iMau;
    }
}

PhanSo PhanSo::operator-(PhanSo b)
{
    PhanSo c;
    c.iMau = this->iMau * b.iMau;
    c.iTu = this->iTu * b.iMau - b.iTu * this->iMau;
    c.RutGon();
    return c;
}

void PhanSo::Hieu(PhanSo b)
{
    PhanSo c = *this - b;
    cout << "Hieu cua hai phan so la: ";
    c.Xuat();
    cout << endl;
}

PhanSo PhanSo::operator+(PhanSo b)
{
    PhanSo c;
    c.iMau = this->iMau * b.iMau;
    c.iTu = this->iTu * b.iMau + b.iTu * this->iMau;
    c.RutGon();
    return c;
}

void PhanSo::Tong(PhanSo b)
{
    PhanSo c = *this + b;
    cout << "Tong cua hai phan so la: ";
    c.Xuat();
    cout << endl;
}

PhanSo PhanSo::operator*(PhanSo b)
{
    PhanSo c;
    c.iMau = this->iMau * b.iMau;
    c.iTu = this->iTu * b.iTu;
    c.RutGon();
    return c;
}

void PhanSo::Tich(PhanSo b)
{
    PhanSo c = *this * b;
    cout << "Tich cua hai phan so la: ";
    c.Xuat();
    cout << endl;
}

PhanSo PhanSo::operator/(PhanSo b)
{
    PhanSo c;
    c.iTu = this->iTu * b.iMau;
    c.iMau = this->iMau * b.iTu;
    c.RutGon();
    return c;
}

void PhanSo::Thuong(PhanSo b)
{
    PhanSo c = *this / b;
    cout << "Thuong cua hai phan so la: ";
    c.Xuat();
    cout << endl;
}

void PhanSo::SoSanh(PhanSo b)
{
    this->RutGon();
    b.RutGon();
    PhanSo c = *this - b;
    c.RutGon();
    if (c.iTu < 0)
    {
        cout << "Phan so lon nhat la: ";
        b.Xuat();
    }
    else if (c.iTu == 0)
    {
        cout << "Ca hai phan so deu bang nhau.";
    }
    else
    {
        cout << "Phan so lon nhat la: ";
        this->Xuat();
    }
    cout << endl;
}

void PhanSo::Xuat()
{
    if (iMau == 1)
        cout << this->iTu;
    else if (iTu == 0)
        cout << 0;
    else
        cout << this->iTu << "/" << this->iMau;
}