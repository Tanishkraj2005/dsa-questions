#include <iostream>
using namespace std;

int main() {
    int n, m, a, b;
    cout << "Enter rows and columns for the first matrix: ";
    cin >> n >> m;
    cout << "Enter rows and columns for the second matrix: ";
    cin >> a >> b;

 
    int matrix1[n][m], matrix2[a][b], result[n][b];

    
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix1[i][j];
        }
    }


    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < b; ++j) {
            result[i][j] = 0;
        }
    }

    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < b; ++j) {
            for (int k = 0; k < m; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }


    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < b; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
