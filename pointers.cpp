#include <iostream>
using namespace std;

// int main(){
//     int x= 10;
//     int *ptr= &x;
//     *ptr= *ptr * 5; // Arithmetic opreations
//     (*ptr)++;
//     cout << &x << '\n';  //address
//     cout << ptr << '\n'; //address
//     cout << *ptr << '\n'; //51 
//     cout << &ptr << '\n'; //address of address
//     return 0;
// }

//comparsion using pointers
// int main(){
//     int x= 10;
//     int y= 10;
//     int *ptr= &x;
//     int *ptr2= &y;
//     cout << (*ptr == *ptr2) << '\n'; //-> 1
//     cout << (*ptr > *ptr2) << '\n'; // -> 0
//     return 0;
// }

int main(){
    int x= 20;
    int arr[]= {1,2,3,4,5};
    int *ptr= &x;
    int *ptr2= arr;
    cout << (sizeof(x)) << '\n'; // ->4
    cout << (sizeof(ptr)) << '\n';// ->8
    cout << (sizeof(*ptr)) << '\n'; // ->4

    cout << (sizeof(arr)) << '\n';// -> 20
    cout << (sizeof(ptr2)) << '\n';// ->8
    cout << (sizeof(*ptr2)) << '\n';// ->4

}