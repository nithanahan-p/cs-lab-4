#include<iostream>
using namespace std;
int main(){
//declaring variables

float days,years,weeks;
cout<<"convert days in to weeks and years"<<endl;
cout<<"days"<<endl;
cin>>days;
//conversion of days in to weeks and years
weeks=days/7;
years=days/365;

//printing the answers
cout<<"days converted to weeks="<<weeks<<endl;
cout<<"days converted to years="<<years<<endl;
return 0;
}
