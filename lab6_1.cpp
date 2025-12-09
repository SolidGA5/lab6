#include<iostream>
using namespace std;

int main(){
    int n;
    int odd = 0;
    int even = 0;
    while (true){
      cout << "Enter an integer: ";
      cin >> n;
      if (n == 0){break;}  
      if (n %2 == 0){
        even++;
      }else{odd++;}
    }
    cout << "#Even numbers = " << even;
    cout << "#Odd numbers = " << odd;
    return 0;
}