#include "GioPhutGiay.h"
#include <iostream>
using namespace std;

void GioPhucGiay::Nhap()
{
    do
    {
        cout << "Nhap gio (0-23): ";
        cin >> iGio;
        if (iGio < 0 || iGio >= 24)
            cout << "Gio khong hop le. Vui long nhap lai!" << endl;
    } while (iGio < 0 || iGio >= 24);

    do
    {
        cout << "Nhap phut (0-59): ";
        cin >> iPhut;
        if (iPhut < 0 || iPhut >= 60)
            cout << "Phut khong hop le. Vui long nhap lai!" << endl;
    } while (iPhut < 0 || iPhut >= 60);

    do
    {
        cout << "Nhap giay (0-59): ";
        cin >> iGiay;
        if (iGiay < 0 || iGiay >= 60)
            cout << "Giay khong hop le. Vui long nhap lai!" << endl;
    } while (iGiay < 0 || iGiay >= 60);
}

void GioPhucGiay::Xuat()
{
    cout << "Thoi gian: " << iGio << " gio, " << iPhut << " phut, " << iGiay << " giay" << endl;
}

void GioPhucGiay::TinhCongThemMotGiay()
{
    iGiay++;
    if (iGiay >= 60)
    {
        iGiay = 0;
        iPhut++;
        if (iPhut >= 60)
        {
            iPhut = 0;
            iGio++;
            if (iGio >= 24)
            {
                iGio = 0;
            }
        }
    }
}