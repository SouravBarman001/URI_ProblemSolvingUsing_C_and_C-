#include<iostream>
#include <iomanip>
#define pi 3.14159
using namespace std;

int main(){


float R;

cin>>R;
double result = ((4.0/3)*pi*(R*R*R));

cout<<"VOLUME = "<<setprecision(3)<<result<<endl;



return 0;
}
