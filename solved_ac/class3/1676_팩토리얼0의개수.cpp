#include <cstdio>

using namespace std;


int main(void) {
    int N;
    scanf("%d", &N);

    int result = 0;
    for (int i = 1; i <= N; i++) {
        if (i%5 == 0) {
            int k = i;
            while (true) {
                if (k % 5 != 0) {
                    break;
                } else {
                    k /= 5;
                    result += 1;
                }
            }
        }
    }

    printf("%d", result);

    return 0;
}
