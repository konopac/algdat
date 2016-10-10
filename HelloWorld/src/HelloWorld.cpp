#include <iostream>
#include <iomanip>

using namespace std;

unsigned long long fac(unsigned int n);

int main() {
    unsigned int N_MAX = 20;

    cout << fixed << setprecision(0);

    cout << setw(10) << "n" << setw(30) << "Fakultaet von n" << endl << "\n";

    for (unsigned int n = 1; n <= N_MAX; ++n) {
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
