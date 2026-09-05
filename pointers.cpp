#include <iostream>
using namespace std;

int main(){
    int x= 10;
    int *ptr= &x;
    cout << &x << '\n';  //address
    cout << ptr << '\n'; //address
    cout << *ptr << '\n'; //10
    cout << &ptr << '\n'; //address of address
    return 0;
}