//Adriana Tapia Ramìrez
//30 octubre 2017
#include <vector>
#include <iostream>
using namespace std;

int main ( ) {
vector<float> v;

v.assign(8,16.3);
v[2]=24.5;
v[3]=15.6;
v.push_back(15.8);
v.push_back(10.3);

for (int i=0; i<v.size( ); i++)
	cout<<v[i]<<" , ";
	cout<<endl;
	cout<<v.front( )<<"  "<< v[2]<<" "<<v.back()<<endl;

vector<float>::iterator iter;
for(iter=v.begin(); iter!=v.end(); iter++)
	cout<<*iter<<endl;

return 0;
}

