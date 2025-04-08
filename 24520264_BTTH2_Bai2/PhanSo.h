#ifndef PHANSO_H
#define PHANSO_H

#include <iostream>
#include <cmath>

class PhanSo
{
private:
    int iTu, iMau;
    int gcd(int a, int b);

public:
    PhanSo();
    void Nhap();
    void Xuat();
    void RutGon();
    PhanSo operator+(PhanSo b);
    void Tong(PhanSo b);
    PhanSo operator-(PhanSo b);
    void Hieu(PhanSo b);
    PhanSo operator*(PhanSo b);
    void Tich(PhanSo b);
    PhanSo operator/(PhanSo b);
    void Thuong(PhanSo b);
    void SoSanh(PhanSo b);
};

#endif // PHANSO_H