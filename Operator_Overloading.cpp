/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;

class Complex{
    public:
    double real;
    double imag;
    Complex(double a=0,double b=0){
        real=a;
        imag=b;
    }
    void display(){
        cout << "Complex no. :-" << real <<" +i(" << imag << ")";
    }
};
Complex operator+(Complex &a,Complex &b){
    Complex c;
    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;
    return c;
}

int main(){
    Complex a1(2,6.5),a2(6,8.56),a3;
    a3=a1+a2;
    a3.display();
}
/*
Output:-
Complex no. :-8 +i(15.06)
*/
