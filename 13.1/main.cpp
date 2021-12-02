#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.hpp"
#include "sum.hpp"
#include "var.hpp"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main() {
    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout<<"dx = "; cin>>dx;
    cout<<"e = "; cin>>e;
    cout << endl;
    
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |" << setw(10) << "exp(1/x)" << "   |" << setw(7) << "S" << "     |" << setw(5) << "n" << "   |" << endl;
    cout << "-------------------------------------------------" << endl;
    
    x = x_p;
    while(x<=x_k){
        if (x==0){
            x+=dx;
        }
        else{
        sum();

            cout << "|"
            << setw(7)  << setprecision(2) << x      << "   |"
            << setw(10) << setprecision(5) << exp(1/x) << "   |"
            << setw(10) << setprecision(5) << s      << "   |"
            << setw(5)  << n << "   |" << endl;
            x+=dx;
        }
        
    }
    cin.get();
    return 0;
}
