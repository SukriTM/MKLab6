#include<iostream>
using namespace std;

int main(){
    int N;
    int E=0;
    int O=0;
       
        cout << "Enter an integer: ";
        cin >> N;
    while (N!=0){
    
        if(N%2==0){
            E+=1;    
        }
        else {
            O+=1;
        }
        cout << "Enter an integer: ";
        cin >> N;
    }
    cout << "#Even numbers = " << E << "\n";
    cout << "#Odd numbers = " << O << "\n";
    
    return 0;
}