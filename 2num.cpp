#include<iostream>
using namespace std;
int main(){
    float num1, num2, suma, resta, multi, divi;

    cout<<"ingrese el primer numero: "; 
    cin>>num1;
    cout<<"ingrese el segundo numero: "; 
    cin>>num2;

    suma = num1+num2;
    resta = num1-num2;
    multi = num1*num2;
    divi = num1/num2; 

    cout<<suma;
    cout<<resta;
    cout<<multi;
    cout<<divi;
    return 0;
}