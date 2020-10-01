#include<iostream>
using namespace std; 
int main(){
    int a, b, resultado = 0;
    cout<<"digite el valor de a: "<<endl; cin>>a;
    cout<<"digite el valor de b: "<<endl; cin>>b;
    resultado = (a/b) + 1;

    cout.precision(2);
    
    cout<<"el resultado es: "<<resultado<<endl;

    return 0; 
}