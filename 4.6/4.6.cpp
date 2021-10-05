#include <iostream>

using namespace std;

int main()
{
    int n = 1;
    int k = 1;

    double S = 1;

    double P = 0;

    while (n <= 25) {

        P = 0;
        k = 1;

        while (k <= n) {

            P *= sqrt(pow(cos(k + n), 2));
            k++;
        }

        P += cos(n);

        S += P;
        n++;
    }

    cout << "S = " << S << endl;

    S = 1;
    n = 1;

    do {
        P = 0;
        k = 1;

        do {

            P *= sqrt(pow(cos(k + n), 2));
            k++;

        } while (k <= n);

        P += cos(n);

        S += P;
        n++;

    } while (n <= 25);

    cout << "S = " << S << endl;

    S = 1;

    for (n = 1; n <= 25; n++) {
        P = 0;
        for (k = 1; k <= n; k++) {
            P *= sqrt(pow(cos(k + n), 2));
        }
        P += cos(n);
        S += P;
    }

    cout << "S = " << S << endl;

    S = 1;

    for (n = 25; n >= 1; n--) {
        P = 0;
        for (k = n; k >= 1; k--) {
            P *= sqrt(pow(cos(k + n), 2));
        }
        P += cos(n);
        S += P;
    }

    cout << "S = " << S << endl;


    system("pause");
    return 0;
}
