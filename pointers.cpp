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

// int main(){
//     int x= 20;
//     int arr[]= {1,2,3,4,5};
//     int *ptr= &x;
//     int *ptr2= arr;
//     cout << (sizeof(x)) << '\n'; // ->4
//     cout << (sizeof(ptr)) << '\n';// ->8
//     cout << (sizeof(*ptr)) << '\n'; // ->4

//     cout << (sizeof(arr)) << '\n';// -> 20
//     cout << (sizeof(ptr2)) << '\n';// ->8
//     cout << (sizeof(*ptr2)) << '\n';// ->4
//     return 0;
// }

// void change(int *x){
//     *x= 100;
// }

// int main(){
//     int x= 20;
//     cout << "Before calling :\n x= " << x << '\n';
//     change(&x);
//     cout << "After calling :\n x= " << x << '\n';
//     return 0;
// }

// void swap(int *x, int *y){
//     *x= *x^*y^(*y=*x);
// }

// int main(){
//     int x= 10,y= 20;
//     cout << "x= " << x << '\n' << "y= " << y << '\n';
//     swap(&x,&y);
//     cout << "x= " << x << '\n' << "y= " << y << '\n';
//     return 0;
// }

// int* getAddress(int* x){
//     return x;
// }

// int main(){
//     int x= 20;
//     int *ptr= getAddress(&x);
//     cout << *ptr << '\n';
//     return 0;
// }

// int getMax(int* arr,int n){
//     int max=arr[0];
//     for(int i=0;i<n;i++){
//         if(max<arr[i]){
//             max= arr[i];
//         }
//     }
//     return max;
// }

// int getMin(int* arr,int n){
//     int min= arr[0];
//     for(int i=0;i<n;i++){
//         if(min>arr[i]){
//             min= arr[i];
//         }
//     }
//     return min;
// }

// void getMaxMin(int* arr, int n,int* max,int* min){
//      for(int i=0;i<n;i++){
//         if(*max<arr[i]){
//             *max= arr[i];
//         }else if(*min>arr[i]){
//             *min= arr[i];
//         }
//     }
// }

// int main(){
//     int arr[]= {1,2,3,4,5};
//     int n= sizeof(arr)/ sizeof(arr[0]);
//     int max= arr[0],min= arr[0];
//     cout << getMax(arr,n) << '\n';
//     cout << getMin(arr,n) << '\n';
//     getMaxMin(arr,n,&max,&min);
//     cout << "max: "<< max << ",Min: " << min << endl;
//     return 0;
// }

// void getAddSubProAvg(int x,int y,int* add,int* subtract,int* product,int* avg){
//     *add= x+y;
//     *subtract= x-y;
//     *product= x*y;
//     *avg= (x+y)/2; 
// }

// int main(){
//     int a= 2,b= 3;
//     int add,subtract,product,avg= 0;
//     getAddSubProAvg(a,b,&add,&subtract,&product,&avg);
//     cout << "Add: " << add << ",Subtract: " << subtract << ",Product: " << product << ",Avg: " << avg << '\n';
//     return 0;
// }

int main(){
    int arr[]= {1,2,3,4,5};
    int *ptr= arr;
    int n= sizeof(arr)/sizeof(arr[0]);
    
    cout << arr[0] << '\n'; //-> 1
    cout << arr << '\n'; //-> 0x1b437ffb20
    cout << *ptr << '\n'; //-> 1
    cout << ptr+1 << '\n';// -> 0x652c3ffc44
    cout << ptr+2 << '\n';// -> 0x652c3ffc48
    cout << arr[2] << '\n'; // -> 3
    cout << *(ptr+2) << '\n'; // -> 3
    return 0;
}