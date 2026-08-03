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

// int main(){
//     int n;
//     cout << "Enter the size of array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements of an array: \n";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     cout << "Elements: ";
//     for(int i=0;i<n;i++){
//         cout << arr[i] << '\t';
//     }
    
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]<arr[j]){
//                 arr[i]=arr[i]^arr[j]^(arr[j]=arr[i]);
//             }
//         }
//     }

//     cout << "\nSorted array: ";
//     for(int i=0;i<n;i++){
//         cout << arr[i] << '\t';
//     }
//     return 0;
// }

// int main(){
//     int n=10;
//     int arr[n]= {1,2,3,4,5,6,7,8,9,10};
//     for(int i=0;i<n/2;i++){
//        arr[i]=arr[i]^arr[n-i-1]^(arr[n-i-1]=arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         cout << arr[i] << '\n';
//     }
//     return 0;
// }

// int main(){
//     int n=5;
//     int arr[n]={1,2,3,4,5};
//     for(int k=0;k<2;k++){
//         int temp= arr[0];
//         for(int i=1;i<n;i++){
//          arr[i-1]= arr[i];
//     }
//     arr[n-1]= temp;
//     }
//     for(int i=0;i<5;i++){
//         cout << arr[i] << " ";
//     }
// }

// int main(){
//     int arr[5]={1,2,3,2,1};
//     int sum=0,c=0;
//     int target= 3;
//     for(int i=0;i<5;i++){
//         sum=0;
//         for(int j=i;j<5;j++){
//             sum+= arr[j];
//             if(sum== target){
//                 c++;
//             }
//         }
//     }

//     cout << c ;
//     return 0;
// }

//linear search
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int target=3;
//     int ans= -1;
//     for(int i=0;i<5;i++){
//         if(arr[i]==target){
//             ans= i;
//             break;
//         }
//     }
//     cout << ans;
//     return 0;
// }

//binary search
int main(){
    int n=6;
    int arr[6]= {12,56,89,99,100,102};
    int ans= -1;
    int target= 100;
    int s=0,e=n-1;
    while( s<= e){
        int mid= (s+e)/2;
        if(arr[mid]== target){
            ans= mid;
            break;
        }else if(arr[mid] < target){
            s= mid+1;
        }else{
            e= mid-1;
        }
    }
    cout << ans;
    return 0;
}