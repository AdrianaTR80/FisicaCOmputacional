#include <iostream> 
using namespace std;
int main ()
{
  float E;
  cout<<"ingrese calificación de exámen"<<endl;
    cin>>E;
    float P;
    cout<<"ingresa calificación de participaciones"<<endl;
    cin>>P;
    float T;
    cout<<"Escriba calificación de exámen"<<endl;
    cin>>T;
    float cal;
    if (E<8){
      cal= E*.7 + P*.15 + T*.15;
      cout<<"Tu calificación es: "<<cal<<endl;
    }
    else
      {
	  float TP;
	  TP = T + P;
	  if(TP==0){
	    cal=E;
	    cout<<"Tu calificación es: "<<cal<<endl;
	  }
	  else
	    {
	      cal=E*.88 +T*.1 +P*.1;
	      cout<<"Tu calificación es: "<<cal<<endl;
	    }
      }  
return 0;
}
