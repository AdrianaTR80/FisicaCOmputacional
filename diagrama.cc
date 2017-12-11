//Adriana Tapia Ramìrez
//El programa te da una x=1, si esa x es menor o igual que 5, entonces tenemos que verificar si x es mùltiplo de 3, si es mùltiplo de 3 se le suma 2 y si no lo es entonces el programa imprime el valor de x y se le suma 2, el ciclo continìa asì hasta que x sea mayor que 5, cuando x>5 entonces se termina el programa y se imprime el valor de x  
#include<iostream>
using namespace std;
int main()
{
  int x;
  x=1;
  while(x<=5){
    if(x%3==0){
      x=x+2;}
    else{
      cout<<"x="<<x<<endl;
      x=x+2;}
}
while(x>5){
         cout<<"x="<<x<<endl;
cin>>x;
  }

  return 0;
}
