#include<iostream>
using namespace std;
int max(int a,int b );  

int main() {
int x,y;
    cout << "Enter two numbers: ";
    cin >> x>>y;
    max(x,y);
    return 0;
}

int max(int a ,int b) {
    if(a>b)
    cout << "Maximum Number Is:" <<b<< endl;
    else
    cout << "Minimum Number Is:" <<a<<endl;
}