#include<iostream>
using namespace std;
int main(){
float m,cm,km;
cout<<" convert length in cm to m and km"<<endl;
cout<<"value in cm"<<endl;
cin>>cm;
m=cm/100;
km=m/1000;
cout<<"length converted to m="<<m<<endl;
cout<<"length in km="<<km<<endl;
return 0;
}
