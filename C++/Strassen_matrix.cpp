#include <iostream>
using namespace std;

void strassen_alg(int a[2][2], int b[2][2])
{
    int m1 = (a[0][0] + a[1][0]) * (b[0][0] + b[0][1]);
    int m2 = (a[0][1] + a[1][1]) * (b[1][0] + b[1][1]);
    int m3 = (a[0][0] - a[1][1]) * (b[0][0] + b[1][1]);
    int m4 = (a[0][0]) * (b[0][1] - b[1][1]);
    int m5 = (a[1][0] + a[1][1]) * b[0][0];
    int m6 = (a[0][0] + a[0][1]) * b[1][1];
    int m7 = (a[1][1]) * (b[1][0] - b[0][0]);

    int I = m2 + m3 - m6 - m7;
    int J = m4 + m6;
    int K = m5 + m7;
    int L = m1 - m3 - m4 - m5;

    cout << "VALUE OF M1: " << m1 << endl;
    cout << "VALUE OF M2: " << m2 << endl;
    cout << "VALUE OF M3: " << m3 << endl;
    cout << "VALUE OF M4: " << m4 << endl;
    cout << "VALUE OF M5: " << m5 << endl;
    cout << "VALUE OF M6: " << m6 << endl;
    cout << "VALUE OF M7: " << m7 << endl;

    cout << "value of I : " << I << endl;
    cout << "value of J : " << J << endl;
    cout << "value of K : " << K << endl;
    cout << "value of L : " << L << endl;

    cout << "Elements of New Matrix are : \n"
         << I << " "
         << J << "\n"
         << K << " "
         << L << endl;
}

int main()
{
    int row, col, ma[2][2], mat[2][2];

    cout << "Enter the elements of first matrix: ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> ma[i][j];
        }
    }
    cout << "Enter the elements of second matrix: ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> mat[i][j];
        }
    }
    strassen_alg(ma, mat);

    return 0;
}
