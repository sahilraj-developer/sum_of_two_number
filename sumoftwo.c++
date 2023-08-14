#include<iostream>
using namespace std;

int sumoftwonumber(int a,int b){
    int sum = a+b;
    return sum;
}

int main(){
    int a; 
    int b;
    int sum ;
    cout<<"enter the number a";
    cin>>a;
    cout<<"enter the number b";
    cin>>b;
    sum =  sumoftwonumber(a,b);

    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;

    return 0;
}