#include <iostream>
#include <string.h>
using namespace std;

// int main(){
//     char str[100];
//     cin.getline(str,100);
//     cout << str << '\n';
//     return 0;
// }

// int main(){
//     char str[10];
//     int size=0;
//     cout << "Enter a string: ";
//     cin >> str;
//     for(int i=0;i<10;i++){
//         if(str[i]=='\0'){
//             break;
//         }
//         size++;
//     }
//     cout << "The length of string is: " << size << '\n';
//     cout << "The length of string is: " << strlen(str);

//     return 0;
// }

// int main(){
//     char str[20]="hello",str2[20]=" How are you";
//     strcat(str,str2);
//     cout << str << '\n';
//     return 0;

// }

// int main(){
//     char str[10]="hello",str2[20]=" how are you";
//     cout << strcmp(str2,str) << '\n';
//     return 0;
// }

// int main(){
//     char str[10]="hello";
//     char str2[10]="hi";
//     strcpy(str,str2);
//     cout << str;
//     return 0;
// }

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin ,str);
    for(int i=0;i<str.length();i++){
        cout << str[i] << '\n';
    }

    
}