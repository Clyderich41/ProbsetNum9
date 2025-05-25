#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    cout<<"Pythagorean Triplets:"<<endl;
    int N = 100;
    for (int a = 1; a <= N; ++a) {
        for (int b = a; b <= N; ++b) { 
           
            int c_squared = a * a + b * b;
            int c = sqrt(c_squared); 

            if (c * c == c_squared && c <= N) {
                cout << "(" << a << ", " << b << ", " << c << ")\n";
            }
        }
    }
    return 0;
}