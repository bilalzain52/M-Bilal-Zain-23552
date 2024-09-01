#include<iostream>
using namespace std;
int value(int);  
int main() {
   int x;
   cout << "Enter an integer:" ;
   cin >> x;
   value(x);
    return 0;
}

int value(int x) {
    int p,n;
    p=x-1;
    n=x+1;
    cout << "The value before"<<x<<"is" <<p<<endl;
     cout << "The value after"<<x<<"is" <<n<<endl;
    }
    