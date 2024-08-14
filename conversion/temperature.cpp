#include <iostream>
using namespace std;
int main(){
    float temp;
    cout<<"Enter temperature: ";
    cin>>temp;
    string unit;
    cout<<"Enter unit of temperature given: ";
    cin>>unit;
    if(unit=="C"){
        cout<<"Temperature in Fahrenheit: "<<temp*(9/5)+32<<"F"<<endl;
        cout<<"Temperature in Kelvin: "<<temp+273.15<<"K";
    }
    else if(unit=="F"){
        temp=(temp-32)*5/9;
        cout<<"Temperature in Celsius: "<<temp<<"C"<<endl;
        cout<<"Temperature in Kelvin: "<<temp+273.15<<"K";
    }
    else if(unit=="K"){
        temp=temp-273.15;
        cout<<"Temperature in Celsius: "<<temp<<"C"<<endl;
        cout<<"Temperature in Fahrenheit: "<<(temp*9/5)+32<<"K";
    }
    else{
        cout<<"INVALID UNIT";
    }
    return 0;
}