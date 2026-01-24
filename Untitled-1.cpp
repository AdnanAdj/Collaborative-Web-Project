
#include <iostream>
using namespace std;
int main() {
    double values[5];
    cout << "Enter 5 double values:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": ";
        cin >> values[i];
    }
    cout << "You entered:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << value[i] << endl;
    } return 0;
}
