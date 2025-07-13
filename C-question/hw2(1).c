#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rd() {
    return (rand() % 6) + 1;
}


int itr(int d1, int d2, int d3, int number) {
    return (d1 == number && d2 == number && d3 == number);
}


int pyr(char bet) {
    int d1 = rd();
    int d2 = rd();
    int d3 = rd();
    int total = d1 + d2 + d3;

    if (bet == 'O') {
        if (total == 5 || total == 7 || total == 9 || total == 11 || total == 13 || total == 15 || total == 17) {
            if (itr(d1, d2, d3, 3) || itr(d1, d2, d3, 5)) {
                return 0;
            }
            else
                return 1;
        }
    }

    else if (bet == 'E') {
        if (total == 4 || total == 6 || total == 8 || total == 10 || total == 12 || total == 14 || total == 16) {
            if (itr(d1, d2, d3, 2) || itr(d1, d2, d3, 4)) {
                return 0;
            }
            else
                return 1;
        }
    }

    return 0;
}

int main() {
    int wins = 0;
    int trs = 1000;
    srand(time(0));
    for (int i = 0; i < trs; i++) {
        char bet = (rand() % 2 == 0) ? 'O' : 'E';
        wins += pyr(bet);
    }
    double wp= (wins / (double)trs) * 100;
    printf("%.2f%%\n", wp);

    return 0;
}
