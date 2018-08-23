#include <iostream>

using namespace std;

int main()
{
   // int a;
    //a=5;
   /* float n1,n2,n3,n4,n5,pro;
    int z = 6;
    cout <<"el resultado de la suma es " <<z << endl;//cda expresion debe estar separado la espresiones con parentesis
    cout<<"ingrese los 5 notas o valor"<< endl;
    cin>>n1>>n2>>n3>>n4>>n5;
    pro=((n1+n2+n3+n4+n5)/5);//0 suma/5.0
    cout<<"el promedio es  "<<pro<<endl;
    */
    int a= 2147483646;//es el valor de short va desde -32766 hasta 32766 es solo 2 bait
    int b= a+ 1;
    cout<<b<<endl;
    b=b+1;
    cout <<b<<endl;

    return 0;
}
