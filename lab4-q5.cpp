#include<iostream>
using namespace std;
int main(){
//printing the qn
float angle1,angle2,angle3;
cout<<"finding the third angle of a triangle using other two angles"<<endl;
cout<<"value of angle1"<<endl;

cin>>angle1;
cout<<"value of angle2"<<endl;
cin>>angle2;
//finding third angle
angle3=(180-(angle1+angle2));
cout<<"third angle="<<angle3<<endl;
return 0;
}


