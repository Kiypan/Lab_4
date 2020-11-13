#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double R, x, xp, xk, dx, y;
    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    for (x = xp; x <= xk; x += dx) {
        if (x <= -2)
            y = 1;
        else
            if (-2 < x && x <= 0)
                y = -x / 2.;
            else
                if (0 < x && x <= R)
                    y = R - sqrt(R * R - x * x);
                else
                    if (R < x && x <= 2 * R)
                        y = sqrt(R * R - (x - R) * (x - R));
                    else
                        y = -(x - 2 * R) / (6 - 2 * R);
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
    }

    cout << "---------------------------" << endl;

    return 0;
}