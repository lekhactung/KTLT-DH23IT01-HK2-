#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binary, int index = 0) {
    if (binary == 0) 
        return 0;
    
    int digit = binary % 10;
    int decimal = digit * pow(2, index) + binaryToDecimal(binary / 10, index + 1);
    
    return decimal;
}

int main() {
    int binaryNumber =111;

    cout<< binaryToDecimal(binaryNumber) << endl;

    return 0;
}
