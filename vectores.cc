//Adriana Tapia Ramìrez
//30 octubre 2017
#include <vector>
#include <iostream>
using namespace std;

int main ( ) {
size_t talla=0;
int suma=0;
cout<<"¿A cuantas personas vas a entrevistar?"<<endl;
cin>>talla;

vector<int> edad(talla);
for(int i=0;i<talla;i++)
{
cout<<"¿a què edad te graduaste?"<<endl;
cin >> edad[i];
suma+=edad[i];
}
for(int j=0;j<talla; j++)
cout<<edad[j]<<" , ";
cout<<endl;
cout<<"La edad promedio de graduaciòn esperada es:"<<suma/talla<<endl;
return 0;
}
