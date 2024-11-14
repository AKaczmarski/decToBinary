#include <iostream>
#include <vector>

using namespace std;

void decToBinary(int n) {
    vector<int> binary;

    //Collect remainders and divide by 2
    while (n > 0) {
        binary.push_back(n % 2);
        n /= 2;
    }

    //Print the result in reverse order
    cout << "Binary number: ";
    for (int i = binary.size() - 1; i >= 0; --i) {
        cout << binary[i];
    }
    cout << endl;
}

int main() {
    int number;

    cout << "Enter a decimal number to convert to binary: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }

    decToBinary(number);

    cout << "Press any key to close the program...";
    cin.ignore();
    cin.get();

    return 0;
}
