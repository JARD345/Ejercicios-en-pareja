#include <iostream>
using namespace std;
int main() {

/*
int num1,num2,num3;
cout<<"Ingrese tres numeros para saber cual es el mayor"<<endl;
cout<<"Ingrese el primer numero"<<endl;
cin>>num1;
cout<<"Ingrese el segundo numero"<<endl;
cin>>num2;
cout<<"Ingrese el tercer numero"<<endl;
cin>>num3;

if(num1>num2 & num1>num3){
    cout<<num1<<" Es el numero mayor"<<endl;
}else if (num2>num1 &num2>num3 ){
    cout<<num2<<" Es el numero mayor"<<endl;
}else{
    cout<<num3<<" Es el numero mayor"<<endl;
}
*/


     int suma,numero1,numero2=0;
     while(numero2>=0 ) {
         cout<<"Ingresa un numero que desees sumar"<<endl;
         cin>> numero1;
         if(numero1<0){return 0;}
         cout << "Ingresa un numero que desees sumar" << endl;
         cin>>numero2;
         if(numero2<0){return 0;}
         suma=numero1+numero2;
         cout<<suma<<endl;
         numero1=suma;
     }
     
/*
int u,nume1,sumar;
cout<<"Ingrese un numero"<<endl;
cin>>nume1;
for(u=2;u<nume1;u+=2){
sumar=u+sumar;
cout<<sumar<<endl;
}
if(nume1%2==0){
    sumar=sumar+nume1;
    cout<<sumar;
}
 */
    return 0;
}
