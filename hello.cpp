#include <iostream>
#include <string>
#include <math.h>
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

// int main(){
//     int a,b,temp=0;
//     cout << "Enter any two numbers: ";
//     cin >> a >> b;
//     // temp= a;
//     // a=b;
//     // b=temp;
//     a=a^b^(b=a);
//     cout << "a = " << a << ",b = " << b << '\n';
//     return 0;
// }

// int main(){
//     int radius;
//     double pi= numbers::pi;
//     cout << "Enter the radius of cricle: ";
//     cin >> radius;
//     double area= pi * (double)radius *(double)radius;
//     cout << "The area of circle is: " << area <<'\n';
//     return 0;
// }

// int main(){
//     int celsius;
//     double fahrenheit=0;
//     cout << "Enter celsius: ";
//     cin >> celsius;
//     fahrenheit= ((double)celsius * 9/5) + 32;
//     cout << "The fahrenhiet of " << celsius << " celsius is " << fahrenheit << " fahrenheit" <<'\n';
// }

// int main(){
//     int salary;
//     cout << "Enter your salary: ";
//     cin >> salary;
//     salary+= 5000;
//     cout << "Your salary is increased by 5000: " << salary << '\n';
// }

// int main(){
//     char a;
//     cout << "Enter a character: ";
//     cin >> a;
//     cout << "The ASCII value of " << a << " is " << (int)a << '\n';
// }

// int main(){
//     int a,b;
//     cout << "Enter any two number: ";
//     cin >> a >> b;
//     if (a>b){
//         cout << a << " is the greatest one";
//     }else{
//         cout << b << " is the greatest one";
        
//     }
// return 0;
// }

// int main(){
//     int a;
//     cout << "Enter a number: ";
//     cin >> a;
//     if (a%2==0){
//         cout << "Even";
//     }else{
//         cout << "odd";
//     }
//     return 0;
// }


// int main(){
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (num > 0){
//         cout  << "Positive" << '\n';
//     }else if(num < 0){
//         cout << "Negative" << '\n';
//     }else{
//         cout << "Zero" << '\n';
//     }
//     return 0;
// }

// int main(){
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (num % 100 == 0){
//         if (num % 4 == 0){
//             cout << "Lead year.\n";
//         }else{
//             cout << "Not a leap year.\n";
//         }
//     }else{
//         if (num % 4 == 0){
//             cout << "Leap year.\n";
//         }else{
//             cout << "Not a leap year.\n";
//         }
//     }
//     return 0;
// }

// int main(){
//     int amount=0,discount=0;
//     cout << "Enter your billing amount: ";
//     cin >> amount;
//     if (amount <= 5000){
//         discount= 0;
//     }else if(amount > 5000 && amount <= 7000){
//         discount= 5;
//     }else if(amount > 7000 && amount <= 9000){
//         discount= 10;
//     }else if (amount > 9000){
//         discount= 20;
//     }
//     amount-= (amount/100)*discount;
//     cout << "Discount grandted: " << discount << '%' << '\n';
//     cout << "Your billing amount is " << amount << '\n';
//     return 0;
// }

// int main(){
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;
//     switch (ch){
//         case 'a':
//         case 'A':
//         case 'e':
//         case 'E':
//         case 'i':
//         case 'I':
//         case 'o':
//         case 'O':
//         case 'u':
//         case 'U':
//             cout << "Vowel";
//             break;
//         default:
//             cout << "Consonant";
//     }
//     return 0;
// }

// int main(){
//     int units;
//     double bill=0;
//     cout << "Enter your electricity unit: ";
//     cin >> units;
//     if (units > 400){
//         bill +=(units -400)*13;
//         units= 400;
//     }
//     if (units > 200 && units <= 400){
//         bill += (units - 200)*8;
//         units= 200;
//     }
//     if (units > 100 && units <= 200){
//         bill += (units=100)*6;
//         units= 100;
//     }
//     bill+ units*4.2;
    
//     cout << "Total amount: " << bill << '\n';
//     return 0;
// }

// int main(){
//     int day;
//     cout << "Enter a number: ";
//     cin >> day;
//     switch(day){
//         case 1:
//             cout << "Snuday";
//             break;

//         case 2:
//             cout << "Monday";
//             break;

//         case 3:
//             cout << "Tuesday";
//             break;

//         case 4:
//             cout << "Wednesday";
//             break;

//         case 5:
//             cout << "Thursday";
//             break;

//         case 6:
//             cout << "Friday";
//             break;

//         case 7:
//             cout << "Saturda";
//             break;

//         default:
//            cout << "Invalid choice";
//     }
//     return 0;
// }


// int main(){
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;
//     if ((int)ch>=65 && (int)ch <=90){
//         cout << "Upper case";
//     }else if((int)ch>=97 && (int)ch <=122){
//         cout << "Lower case";
//     }else{
//         cout << "Not an alphabet";
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cout << "Enter anumber: ";
//     cin >> n;
//     for (int i=0;i<=n;i++){
//         cout << "Hello world\n";
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i=n;i>=1;i--){
//         cout << i << '\n';
//     }
//     return 0;
// }

// int main(){
//     int n,sum=0;
//     cout << "Enter a number: ";
//     cin >> n;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     cout << sum;
//     return 0;
// }

// int main(){
//     int n,fact=1;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i=1;i<=n;i++){
//         fact*=i;
//     } 
//     cout << fact;
//     return 0;
// }

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i=1;i<=n;i++){
//         if(n%i==0){
//             cout << i <<'\n';
//         }
//     }
//     return 0;
// }

// int main(){
//     int n,prime=0;
//     cout << "Enter anumber: ";
//     cin >> n;
//     if(n>0){
//         for(int i=1;i<=n;i++){
//             if(n%i==0){
//                 prime++;
//             }
//         }
//         if(prime==2){
//             cout << "Prime";
//         }else{
//             cout << "Composite";
//         }
//     }else{
//         cout << "Enter number greater than 0";
//     }
//     return 0;
// }