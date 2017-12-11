//Adriana Tapia Ramìrez
//22 noviembre 2017
#include <iostream>
#include <math.h>
using namespace std;
int main(){
float h,d;
float a=0.15;
float coseno=cos(a);

cout << "El coseno de 0.15 es: " << coseno << endl;

cout<<"El valor mas pequeño de h para el cual cos(x+h) y cos(x+2h) aun sean diferentes:"<<endl;

h=0.025; 
    
    d=cos(a+h);
    cout<<"cos(a+h)="<<d<<endl;
    d=cos(a+2*h);
    cout<<"cos(a+2h)="<<d<<endl;
    
 cout<<"con h=0.025"<<endl; 

return 0;
}
