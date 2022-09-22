#include <iostream>
#include<iomanip>

 using namespace std;
 int main(){
 double a,b,sum;
 cout<<"please input tow nunbers:\n";

 cin>>a>>b;
 sum=a+b;

 cout<<"sum is ";
 cout<<fixed<<std::setprecision(8)<<sum<<endl;
 }
