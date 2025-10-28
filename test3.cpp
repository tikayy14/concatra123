#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    cout << "Nhap vao so a: ";
    cin >> a;
    if ( (a == 0) || (a > pow(10,5)))
    cout << "Nhap sai, yeu cau nhap lai";
    cout << "Gia tri cua bieu thuc la: " << pow(a,3)+3*pow(a,2)+a+1;
    return 0;
}