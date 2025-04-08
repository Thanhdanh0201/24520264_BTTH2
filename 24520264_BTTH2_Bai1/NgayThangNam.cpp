#include <iostream>
#include "NgayThangNam.h"
using namespace std;

void NgayThangNam::Nhap() {
    do {
        cout << "Nhap ngay: ";
        cout.flush();
        cin >> iNgay;
        cout << "Nhap thang: ";
        cout.flush();
        cin >> iThang;
        cout << "Nhap nam: ";
        cout.flush();
        cin >> iNam;

        if (iThang < 1 || iThang > 12) {
            cout << "Thang khong hop le! Vui long nhap lai." << endl;
            continue;
        }

        int ngayTrongThang;
        if (iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11) {
            ngayTrongThang = 30;
        } else if (iThang == 2) {
            if ((iNam % 4 == 0 && iNam % 100 != 0) || (iNam % 400 == 0)) {
                ngayTrongThang = 29; 
            } else {
                ngayTrongThang = 28;
            }
        } else {
            ngayTrongThang = 31;
        }

        if (iNgay < 1 || iNgay > ngayTrongThang) {
            cout << "Ngay khong hop le! Vui long nhap lai." << endl;
            continue;
        }

        break;

    } while (true);
}

void NgayThangNam::Xuat() {

    cout << iNgay << "/" << iThang << "/" << iNam << endl;
}

void NgayThangNam::NgayThangNamTiepTheo() {
    iNgay++;
    int ngayTrongThang;

    if (iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11) {
        ngayTrongThang = 30;
    } else if (iThang == 2) {
        if ((iNam % 4 == 0 && iNam % 100 != 0) || (iNam % 400 == 0)) {
            ngayTrongThang = 29;
        } else {
            ngayTrongThang = 28;
        }
    } else {
        ngayTrongThang = 31;
    }

    if (iNgay > ngayTrongThang) {
        iNgay = 1;
        iThang++;
    }

    if (iThang > 12) {
        iThang = 1;
        iNam++;
    }

    cout << "Ngay thang nam tiep theo la: ";
    Xuat();
}