#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double r;
    
    cin >> r;
    cout << fixed << setprecision(4);
    cout << "A=" << (r * r) * 3.14159 << endl;

    return 0;
}
