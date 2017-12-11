//Adriana Tapia Ramirez

#include <iostream>
#include <math.h>
#include<fstream>
using namespace std;

int main (){
double epsilon=0.1e-10;
double x=0.15; //radians
int iterations=100;
double dfxdx;

cout << "x    " << endl;
cout << "dame un valor de h " << endl;
cin >> epsilon;
cout << "cos  "<< fx <<endl;
cout << " derivada numérica  :  " << (fx(x+epsilon)-fx(x))/epsilon <<endl;
cout << "derivada conocida (-sin(x)) : " << -1*dx(x) << endl;

ofstream archivo;
archivo.open("dcos.csv");
for(int i=-1*iterations; i < iterations ; i++)
{
double x=i/10.0;
double dfxdx=(fx(x+epsilon)-fx(x))/epsilon;
archivo << x << "," << fx(x) << "," << dfxdx << "," << dx(x) << endl;
}

archivo.close();
}
return 0;
}
