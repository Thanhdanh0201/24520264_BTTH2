#ifndef SOPHUC_H
#define SOPHUC_H

#include <iostream>
using namespace std;

class SoPhuc
{
private:
    double iThuc, iAo;

public:
    SoPhuc();
    void Nhap();
    void Xuat();
    SoPhuc operator+(SoPhuc tmp);
    SoPhuc operator-(SoPhuc tmp);
    SoPhuc operator*(SoPhuc tmp);
    SoPhuc operator/(SoPhuc tmp);
    void Tong(SoPhuc tmp);
    void Hieu(SoPhuc tmp);
    void Tich(SoPhuc tmp);
    void Thuong(SoPhuc tmp);
};

#endif