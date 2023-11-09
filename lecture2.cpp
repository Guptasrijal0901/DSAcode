#include <iostream>
using namespace std;
// int main () {
    // int n ;
// cin>>n;
// n = cin.get();
// if (n>=0) {
// cout<< "Number is positive" << endl;
// }
// else {cout << "Number is negative" << endl;
// }
// }
// int main(){
//     int a, b;
//     cout<< "Enter the value of a:" << endl;
//     cin>>a;
//     cout<< "Enter the value of b:" << endl;
//     cin>>b;
// }
int main (){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'a'  && ch <= 'z')
    { cout << "It is in lowercase" << endl;
    }
    else if (ch >= 'A'  && ch <= 'Z' )
    {cout << "It is upper case" << endl; }
    else if ( ch >= '1' && ch <= '9' )
    {cout << "It is number" << endl; }
    else { cout << "It is neither lower case, upper case or number";
    };
}
