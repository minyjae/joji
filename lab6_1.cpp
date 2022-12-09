#include<iostream>
using namespace std;

int main(){
    int x;
    int o=0;
    int e=0;
    do {
    cout << "Enter an integer: ";
    cin >> x;
    if (x %2 == 0 && x != 0) {
        e++;
    }
    else if (x %2 != 0 && x !=0) {
        o++;
    }
    } while (x != 0) ;
    

    cout << "#Even numbers = ";
    cout << e << endl;
    cout << "#Odd numbers = ";
    cout << o;
    return 0;
}
   
   
