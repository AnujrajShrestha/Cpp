#include <iostream>
using namespace std;
// int main(){
//     int n;
//     cout << "Enter the size of array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements of an array: ";
//     for (int i=0;i<n;i++){
//          cin >> arr[i];
//     }
//     cout << "Elements: \n";
//     for (int i=0;i<n;i++){
//         cout << arr[i] << '\n';
//     }
//     return 0;
// }

int main(){
    int n,sum=0;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements of an array: \n";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout << "Sum of elements of array: " << sum;
    return 0;
}