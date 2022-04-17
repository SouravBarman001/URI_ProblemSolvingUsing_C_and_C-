#include<iostream>
#include <iomanip>
using namespace std;

int main(){

int product1,product2,product3,product4;

float value1,value2;

cin >> product1 >> product2 >> value1;
cin >> product3 >> product4 >> value2;


cout<<"VALOR A PAGAR: R$ " <<setprecision(2)<<(product2*value1)+(product4*value2)<<endl;


return 0;
}
