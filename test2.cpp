#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    float a, b; 
    cout << "Nhap vao so a: ";
    cin >> a;  
    cout << "Nhap vao so b: ";
    cin >> b;
    cout << "Tong a va b la: "<< setprecision(2) << a+ b <<endl;
    cout << "Hieu a va b la: "<< setprecision(2) << a -b <<endl;
    cout << "Tich a va b la: "<< setprecision(2) << a*b <<endl;
    cout << "Thuong a va b la: "<< setprecision(2) << a/b <<endl;
    return 0;
}
