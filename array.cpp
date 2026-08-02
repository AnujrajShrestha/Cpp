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

// int main(){
//     int n,sum=0;
//     cout << "Enter the size of array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements of an array: \n";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     cout << "Sum of elements of array: " << sum;
//     return 0;
// }
 
// int main(){
//     int max=0,arr[5]={1,2,3,4,5};
//     max=arr[0];
//     for(int i=1;i<5;i++){
//         if(arr[i]>max){
//             max= arr[i];
//         }
//     }
//     cout << max;
//     return 0;
// }

// int main(){
//     int evenCount=0,oddCount=0,arr[10]={1,2,3,4,5,6,7,8,9,10};
//     for(int i=0;i<10;i++){
//         if(arr[i]%2== 0){
//             evenCount++;
//         }else{
//             oddCount++;
//         }
//     }
//     cout << "Total even counts: " << evenCount << '\n';
//     cout << "Total odd counts: " << oddCount << '\n';
//     return 0;
// }

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements of an array: \n";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Elements: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << '\t';
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                arr[i]=arr[i]^arr[j]^(arr[j]=arr[i]);
            }
        }
    }

    cout << "\nSorted array: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << '\t';
    }
    return 0;
}