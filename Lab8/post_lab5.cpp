#include <iostream>
using namespace std;

int main() {
    string input;
    string temp = " ";

    cout << "Enter a line : ";
    getline(cin, input);

    for (int i = 0; i < input.size(); ++i) {
        if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')) {
            temp = temp + input[i];
        }
    }
    input = temp;
    cout << "Output without Space: " << input;
    return 0;
}
