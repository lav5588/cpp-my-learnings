#include <iostream>
using namespace std;

int main() {
    long long binary1, binary2;
    int i = 0, remainder = 0, sum[20];
    
    cout << "Enter the first binary number: ";
    cin >> binary1;
    cout << "Enter the second binary number: ";
    cin >> binary2;
    
    while (binary1 != 0 || binary2 != 0) {
        sum[i++] = (binary1 % 10 + binary2 % 10 + remainder) % 2;
        remainder = (binary1 % 10 + binary2 % 10 + remainder) / 2;
        binary1 /= 10;
        binary2 /= 10;
    }
    
    if (remainder != 0) {
        sum[i++] = remainder;
    }
    
    --i;
    cout << "The sum of the two binary numbers is: ";
    while (i >= 0) {
        cout << sum[i--];
    }
    cout << endl;
    
    return 0;
}
