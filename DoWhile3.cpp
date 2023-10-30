#include <iostream>
using namespace std;
int main() {
    int num, oct = 0, i = 1;
    cout << "Enter decimal number: ";
    cin >> num;
    do 
    {
        oct += (num % 8) * i;
        num /= 8;
        i *= 10;
    } while (num > 0);
    cout << "\nOctal number: " << oct << endl;
    return 0;
} 