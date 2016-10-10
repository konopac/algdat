#include <iostream>
#include <iomanip>

using namespace std;
#define N_MAX 20;

unsigned long long fac(unsigned int n);

int main() {
    unsigned int n;

    cout << fixed << setprecision(0);

    cout << setw(10) << "n" << setw(30) << "Fakultaet von n" << endl << "\n";

    for (n = 1; n <= 20; ++n) {
        cout << setw(10) << n << setw(30) << fac(n) << endl;
    }

    cout << "\nWeiter mit" << " <Return>";
    std::cin.get();

    return 0;
}

unsigned long long fac(unsigned int n) {
    unsigned long long ergebnis = 1;
    if (n > 0) {
		ergebnis = fac(n-1) * n;
    }
    return ergebnis;
}
