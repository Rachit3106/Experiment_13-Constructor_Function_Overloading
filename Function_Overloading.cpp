/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;

int Sum(int a,int b){
    int sum=a+b;
    return sum;
}

double Sum(double a,double b){
    float sum=a+b;
    return sum;
}

int main(){
    int sum1=Sum(5,7);
    double sum2=Sum(5.5,7.7);
    cout << sum1 << '\n' << sum2 << endl;
}
/*
Output:-
12
13.2
*/
