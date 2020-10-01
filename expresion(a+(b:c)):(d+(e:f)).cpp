 #include<iostream>
 using namespace std; 
 int main(){
     float a,b,c,d,e,f,resultado = 0; 

    cout<<"ingrese el valor de a: "; cin>>a;
    cout<<"ingrese el valor de b: "; cin>>b;
    cout<<"ingrese el valor de c: "; cin>>c;
    cout<<"ingrese el valor de d: "; cin>>d;
    cout<<"ingrese el valor de e: "; cin>>e;
    cout<<"ingrese el valor de f: "; cin>>f;

    resultado = (a+(b/c))/(d+(e/f));

    cout.precision(2);
    cout<<" el resultado es: "<<resultado<<endl;
    
     return 0; 
 }