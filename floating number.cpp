#include <iostream>
#include <cmath>  
using namespace std;
int main() {
    float num;
    cout << "Enter a floating-point number: ";
    cin >> num;
    int floor_val = floor(num);
    int ceil_val = ceil(num);
    if (num - floor_val < 0.5) {
        cout << "Rounded value: " << floor_val << endl;
    } else {
        cout << "Rounded value: " << ceil_val << endl;
    }
    return 0;
}
