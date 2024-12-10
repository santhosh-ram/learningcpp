#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int start, end;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;
    int maxJumpingNumber = -1;  
    for (int num = start; num <= end; ++num) {
        int temp = num;
        bool isJumping = true;
        if (temp < 10) {
            isJumping = true;
        } else {
            int prev_digit = temp % 10;
            temp /= 10;
            while (temp > 0) {
                int current_digit = temp % 10;
                if (abs(current_digit - prev_digit) != 1) {
                    isJumping = false;
                    break;
                }
                prev_digit = current_digit;
                temp /= 10;
            }
        }
        if (isJumping) {
            maxJumpingNumber = max(maxJumpingNumber, num);
        }
    }
    if (maxJumpingNumber != -1) {
        cout << "The maximum jumping number within the range [" << start << ", " << end << "] is: " << maxJumpingNumber << endl;
    } else {
        cout << "No jumping numbers found within the range [" << start << ", " << end << "]." << endl;
    }
    return 0;
}
