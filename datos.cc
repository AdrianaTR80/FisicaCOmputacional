//Adriana Tapia Ramirez

#include <iostream>
#include <math.h>
#include<fstream>
using namespace std;

int main(){
int iterations=100;

ofstream dato;
dato.open("datos1.csv");
for(int i=-1*iterations;i<=iterations; i++)
{
	double x=i/10.;
	double h=.1e-10;
	double dx=(cos(x+h)-cos(x))/h;
	double ax=-sin(x);
	dato<< x <<" , "<<cos(x)<<","<<dx<<","<<ax<<endl;
}
dato.close();
return 0;
}
