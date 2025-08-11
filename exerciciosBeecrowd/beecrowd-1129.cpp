#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    int numDeQuestoes;

    while (cin >> numDeQuestoes && numDeQuestoes != 0) {
        for (int i = 0; i < numDeQuestoes; i++) {
            int valores[5];
            int count_marcadas = 0;
            int alternativa_marcada = -1;

            for (int j = 0; j < 5; j++) {
                cin >> valores[j];
                if (valores[j] <= 127) {
                    count_marcadas++;
                    alternativa_marcada = j;
                }
            }

            if (count_marcadas == 1) {
                switch (alternativa_marcada) {
                    case 0:
                        cout << "A" << endl;
                        break;
                    case 1:
                        cout << "B" << endl;
                        break;
                    case 2:
                        cout << "C" << endl;
                        break;
                    case 3:
                        cout << "D" << endl;
                        break;
                    case 4:
                        cout << "E" << endl;
                        break;
                }
            } else {
                cout << "*" << endl;
            }
        }
    }
    
    return 0;
}