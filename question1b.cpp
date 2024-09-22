#include <iostream>
using namespace std;

int main() {
    double sum = 0.0;

    for (int i = 1; i <= 95; i += 2) {
        int denominator = i + 2;
        double fraction = static_cast<double>(i) / denominator;
        sum += fraction;
    }

    cout << "Sum of the series: " << sum << endl;

    return 0;
}
