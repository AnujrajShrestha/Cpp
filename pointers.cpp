#include <iostream>
using namespace std;

int main(){
    int x= 10;
    int *ptr= &x;
    *ptr= *ptr * 5;
    (*ptr)++;
    cout << &x << '\n';  //address
    cout << ptr << '\n'; //address
    cout << *ptr << '\n'; //51 
    cout << &ptr << '\n'; //address of address
    return 0;
}