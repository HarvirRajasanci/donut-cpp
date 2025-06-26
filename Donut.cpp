#include <iostream>
#include <cstring>
#include <cmath>

int main() {
    float A = 0, B = 0, i, j, z[1760];
    char b[1760];
    int k;

    std::cout << "\x1b[2J";  // Clear screen

    for (;;) {
        std::memset(b, 32, 1760);
        std::memset(z, 0, 7040);

        for (j = 0; 6.28 > j; j += 0.004) {
            for (i = 0; 6.28 > i; i += 0.035) {
                float c = std::sin(i),
                    d = std::cos(j),
                    e = std::sin(A),
                    f = std::sin(j),
                    g = std::cos(A),
                    h = d + 2,
                    D = 1 / (c * h * e + f * g + 5),
                    l = std::cos(i),
                    m = std::cos(B),
                    n = std::sin(B),
                    t = c * h * g - f * e;

                int x = 40 + 30 * D * (l * h * m - t * n);
                int y = 12 + 15 * D * (l * h * n + t * m);
                int o = x + 80 * y;
                int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);

                if (22 > y && y > 0 && 80 > x && x > 0 && D > z[o]) {
                    z[o] = D;
                    b[o] = ".,-~:;=!*#$@:"[std::max(N, 0)];
                }
            }
        }

        std::cout << "\x1b[H";  // Reset cursor
        for (k = 0; k < 1760; k++) {
            std::putchar(k % 80 ? b[k] : 10);
        }

        A += 0.04;
        B += 0.02;
    }

    return 0;
}
