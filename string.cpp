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

// int main(){
//     string str;
//     cout << "Enter a string: ";
//     getline(cin ,str);
//     for(int i=0;i<str.length();i++){
//         cout << str[i] << '\n';
//     }
// }

struct Students{
    string name,address;
    int age,std;
};

// int main(){
//     students s1;
//     s1.name= "Anuj";
//     s1.age= 19;

//     cout << s1.name << " " << s1.age <<'\n';
//     return 0;
// }

int main(){
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    Students s[n];
    cin.ignore();

    for(int i=0;i<n;i++){
        cout << "Enter the name of student: ";
        getline(cin,s[i].name);
        cout << "Enter the age of student: ";
        cin >> s[i].age;
        cout << "Enter the class of student: ";
        cin >> s[i].std;
        cin.ignore();
        cout << "Enter the address of student: ";
        getline(cin,s[i].address);
    }

    cout << "\n----Students Details----\n";

    for(int i=0;i<n;i++){
        cout<< "Name: " << s[i].name << " Age: " << s[i].age << " Class: " << s[i].std << " Address: " << s[i].address << '\n';
    }
    return 0;
}

// struct students{
//     string name;
//     int age;
// };

// void initialise(students *s,string name,int age){
//     s->name= name;
//     s->age= age;
// }

// int main(){
//     students s1,s2;
//     initialise(&s1,"Anuj",19);
//     initialise(&s2,"Anij",18);
//     cout << "{Name: " << s1.name << " Age: " << s1.age << "}\n";
//     cout << "{Name: " << s2.name << " Age: " << s2.age << "}\n";
// }