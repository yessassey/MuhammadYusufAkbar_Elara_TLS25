#include <iostream>
using namespace std;

int main(){
    // declare variable
    int n, input, lastDigit, reversed = 0, sum = 0;
    bool isEven = true, isNegative = false;
    
    // get the array length
    cout << "Enter the length of the array: ";
    cin >> n;

    // get the array elements
    int i = 1;
    while(i <= n){
        cout << "Enter the " << i << " / " << n << " number: ";
        cin >> input;
        if (isEven){
            // check whether is negative
            if (input < 0){
                isNegative = true;
                input *= -1;
            }

            while(input > 0){
                lastDigit = input % 10;
                if (lastDigit != 0){
                    reversed += lastDigit;
                    input = input/10;
                } else {
                    input = input/10;
                }
                reversed *= 10; 
            }
            
            // return the negative sign
            if (isNegative){
                reversed *= -1;
                isNegative = false;
            }
            
            reversed /= 10;
            sum += reversed;
            reversed = 0;
            isEven = false;
        } else {
            sum += input;
            isEven = true;
        }
        i++;
    }
    cout << "Sum: " << sum << endl;
    
    return 0;
}
