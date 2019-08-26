#include <iostream>

using namespace std;

int main() {

    unsigned int array[3][3];
    unsigned int movPara[3][3];

    // [BIN #][COLOR BGC]
    cin >> array[0][0] >> array[0][1] >> array[0][2] >> array[1][0] >> array[1][1] >> array[1][2]>> array[2][0] >> array[2][1] >> array[2][2];

    for (int i = 0; i < 3; ++i) {
        movPara[0][i] = array[1][i] + array[2][i];
    }
    for (int i = 0; i < 3; ++i) {
        movPara[1][i] = array[0][i] + array[2][i];
    }
    for (int i = 0; i < 3; ++i) {
        movPara[2][i] = array[0][i] + array[1][i];
    }

    //unsigned int aux;
    for (int k = 0; k < 3; ++k) {
        //aux = INTMAX_MAX;
        for (int j = 0; j < 3; ++j) {
            cout << " " << movPara[k][j]<< " ";
        }
        cout << endl;
    }

    unsigned int pos






    return 0;
}