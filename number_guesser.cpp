#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int n=0,random=0,attemps=0;
    srand(time(0));
    random= rand()%100+1;
    do{
        cout << "Enter a number: ";
        cin >> n;
        if(n> random){
            cout << "Think a lower number\n";
            attemps++;
        }else if(n< random){
            cout << "This a hihger number\n";
            attemps++;
        }else{
            cout << "You guessed the number: " << random << '\n';
            cout << "Attemps: " << attemps << '\n';
        }
    }while(n!=random);
    return 0;
}