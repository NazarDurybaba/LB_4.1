#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int k, N, i;
    double S;
    cout << "N= "; cin >> N;

    // while
     i = 1;
     S = 0;
     k = N;
    while (i <= k) 
    {
        S += 1.0/i + sqrt(1+ pow(sin(i), 2));
        i++;
    }
    cout << " while: " << S << endl;
    
    // do-while
    i = 1;
    S = 0;
    do {
        S += 1.0 / i + sqrt(1 + pow(sin(i), 2));
        i++;
    } while (i <= k);
    cout << " do-while: " << S << endl;
    
    // for (++)
    S = 0;
    for (i = 1; i <= k; i++) 
    {
        S += 1.0 / i + sqrt(1 + pow(sin(i), 2));
    }
    cout << " for (++): " << S << endl;
    // for (--)
    S = 0;
    for (i = k; i >= 1; i--) 
    {
        S += 1.0 / i + sqrt(1 + pow(sin(i), 2));
    }
    cout << " for (--): " << S << endl;

    return 0;
}