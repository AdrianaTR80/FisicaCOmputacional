//Adriana Tapia Ramìrez
//06 noviembre 2017

#include <iostream>
using namespace std;
int main ( ) {
char variable;
cout<<"Escoge una opcion entre A,B,C,D,F"<<endl;
cin>>variable;
variable= toupper(variable);
switch(variable) {

case 'A' : cout<<"Excelente"<<endl; break;
case 'B' : cout<<"Muy bien"<<endl; break;
case 'C' : cout<<"Bien"<<endl; break;
case 'D' : cout<<"Pasaste"<<endl; break;
case 'F' : cout<<"Intentalo nuevamente"<<endl; break;
default : cout<<"Opcion no valida"<<endl;
}

return 0;
} 
