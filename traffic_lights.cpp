#include <iostream>
using namespace std;

int main() {
    int lightDuration[3] = {3, 80, 20};
    string color[3] = {"Yellow", "Red", "Green"};
    int duration, state = 0;
    cout << "Enter the duration(in seconds): ";
    cin >> duration;
    duration -= 44; //assuming the duration always more than 44
    while (duration > 0 && duration >= lightDuration[state]){
        duration -= lightDuration[state];
        if (state == 2){
            state = 0;
        } else {
            state++;
        }
    }
    cout << "The last color is " << color[state] << endl;
}
