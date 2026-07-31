#include <iostream>
#include <string>
using namespace std;

// int main(){
//     //this is a command
//     /*This is a 
//     multi-line command*/
//     cout << "hello" << std::endl;
//     cout <<"how are you" << '\n';
//     int num;//variable declaration
//     num= 10; //variable initialization
//     cout << "num: " << num << '\n';
//     int num2= 10;
//     int sum= num+num2;
//     cout << "Sum: " << sum << '\n';
//     cout << sizeof(sum) << '\n';
//     return 0;
// }

// int main(){
// //     double pi= 3.9;
// //     int x= (int)pi;
// //     cout << x;
//     // char ch= 'a';
//     // cout << ch+1 <<'\n';
//     int a=10,b=10;
//     cout << ++a <<'\n';
//     cout << b++ <<'\n';
//     cout << b << '\n';
//     return 0;
// }

// int main(){
//     int x= 5;
//     bool result= (x>10) && (++x>0);
//     cout << result;
// }

// int main(){
//     int a;
//     cout << "Enter a number: ";
//     cin >> a;
//     cout << a << '\n' ;
// }

// int main(){
//     int a,b;
//     cout <<"Enter the frist number: ";
//     cin >> a;
//     cout <<"Enter the second number: ";
//     cin >> b;
//     int sum = a+b;
//     cout << "The sum of "<< a << " and " << b << " is " << ": " << sum << '\n';
//    return 0;
// }

// int main(){
//    int age;
//    string name;
//    cout << "Enter your name: ";
//    getline(cin, name);
// //    cin >> name;
//    cout << "Enter your age: ";
//    cin >> age;
//    cout << "Hello " << name << ", you are " << age << " years old.";
//    return 0;
// }

// int main(){
//     int a,b,c;
//     double avg=0;
//     cout << "Enter any three numbers: ";
//     cin >> a >> b >> c;
//     avg=(double)(a+b+c)/3;
//     cout << "The aveage of " << a << "," << b << " and " << c << " is: " << avg <<'\n';
//     return 0; 
// }

int main(){
    int a,b,temp=0;
    cout << "Enter any two numbers: ";
    cin >> a >> b;
    // temp= a;
    // a=b;
    // b=temp;
    a=a^b^(b=a);
    cout << "a = " << a << ",b = " << b << '\n';
    return 0;
}