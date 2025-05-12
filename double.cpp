#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <iomanip> 

using namespace std;

int main() {
	setlocale(LC_ALL, "UK_UA");
    const int ROWS = 5;
    const int COLS = 6;
    int array[ROWS][COLS];

    srand(time(0));


    cout << "���������� �����:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            array[i][j] = rand() % 101 - 50;
            cout << setw(5) << array[i][j];
        }
        cout << endl;
    }

    int col, row;

    
    cout << "\n������ ����� ������� (0-" << COLS - 1 << ") ��� ������ ���������: ";
    cin >> col;
    if (col >= 0 && col < COLS) {
        int maxVal = array[0][col];
        for (int i = 1; i < ROWS; ++i) {
            if (array[i][col] > maxVal) maxVal = array[i][col];
        }
        cout << "�������� � ������� " << col << ": " << maxVal << endl;
    }
    else {
        cout << "������� ����� �������!\n";
    }
    return 0;
}
using namespace std;

int main() {
	setlocale(LC_ALL, "UK_UA");
    const int ROWS = 5;
    const int COLS = 6;
    int array[ROWS][COLS];

    srand(time(0));


    cout << "���������� �����:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            array[i][j] = rand() % 101 - 50;
            cout << setw(5) << array[i][j];
        }
        cout << endl;
    }

    int col, row;
    
    cout << "\n������ ����� ����� (0-" << ROWS - 1 << ") ��� ������ ���������: ";
    cin >> row;
    if (row >= 0 && row < ROWS) {
        int maxVal = array[row][0];
        for (int j = 1; j < COLS; ++j) {
            if (array[row][j] > maxVal) maxVal = array[row][j];
        }
        cout << "�������� � ����� " << row << ": " << maxVal << endl;
    }
   
    return 0;
}
using namespace std;

int main() {
	setlocale(LC_ALL, "UK_UA");
    const int ROWS = 5;
    const int COLS = 6;
    int array[ROWS][COLS];

    srand(time(0));


    cout << "���������� �����:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            array[i][j] = rand() % 101 - 50;
            cout << setw(5) << array[i][j];
        }
        cout << endl;
    }

    int col, row;
   
    cout << "\n������ ����� ������� (0-" << COLS - 1 << ") ��� ������: ";
    cin >> col;
    if (col >= 0 && col < COLS) {
        int sumNeg = 0, sumPos = 0, countPos = 0;
        for (int i = 0; i < ROWS; ++i) {
            if (array[i][col] < 0) sumNeg += array[i][col];
            else if (array[i][col] > 0) {
                sumPos += array[i][col];
                countPos++;
            }
        }
        cout << "���� ����������: " << sumNeg << endl;
        if (countPos > 0)
            cout << "������ ����������: " << (double)sumPos / countPos << endl;
        else
            cout << "���������� ������� ����.\n";
    }
   
    return 0;
}

using namespace std;

int main() {
	setlocale(LC_ALL, "UK_UA");
    const int ROWS = 5;
    const int COLS = 6;
    int array[ROWS][COLS];

    srand(time(0));


    cout << "���������� �����:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            array[i][j] = rand() % 101 - 50;
            cout << setw(5) << array[i][j];
        }
        cout << endl;
    }

    int col, row;
    int col1, col2;
    cout << "\n������ ��� ������ �������� (0-" << COLS - 1 << ") ��� �����: ";
    cin >> col1 >> col2;
    if (col1 >= 0 && col1 < COLS && col2 >= 0 && col2 < COLS) {
        for (int i = 0; i < ROWS; ++i) {
            swap(array[i][col1], array[i][col2]);
        }
        cout << "������� �������.\n";
    }
    return 0;
}


using namespace std;

int main() {
	setlocale(LC_ALL, "UK_UA");
    const int ROWS = 5;
    const int COLS = 6;
    int array[ROWS][COLS];

    srand(time(0));


    cout << "���������� �����:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            array[i][j] = rand() % 101 - 50;
            cout << setw(5) << array[i][j];
        }
        cout << endl;
    }

    int col, row;
    int row1, row2;
    cout << "\n������ ��� ������ ����� (0-" << ROWS - 1 << ") ��� �����: ";
    cin >> row1 >> row2;
    if (row1 >= 0 && row1 < ROWS && row2 >= 0 && row2 < ROWS) {
        for (int j = 0; j < COLS; ++j) {
            swap(array[row1][j], array[row2][j]);
        }
        cout << "����� �������.\n";
    }
    return 0;
}

using namespace std;

int main() {
	setlocale(LC_ALL, "UK_UA");
    const int ROWS = 5;
    const int COLS = 6;
    int array[ROWS][COLS];

    srand(time(0));


    cout << "���������� �����:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            array[i][j] = rand() % 101 - 50;
            cout << setw(5) << array[i][j];
        }
        cout << endl;
    }

    int col, row;
    cout << "\n������ ����� ����� (0-" << ROWS - 1 << ") ��� �������: ";
    cin >> row;
    if (row >= 0 && row < ROWS) {
        for (int j = 0; j < COLS / 2; ++j) {
            swap(array[row][j], array[row][COLS - 1 - j]);
        }
        cout << "����� �����������.\n";
    }
    return 0;
}
using namespace std;

int main() {
	setlocale(LC_ALL, "UK_UA");
    const int ROWS = 5;
    const int COLS = 6;
    int array[ROWS][COLS];

    srand(time(0));


    cout << "���������� �����:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            array[i][j] = rand() % 101 - 50;
            cout << setw(5) << array[i][j];
        }
        cout << endl;
    }

    int col, row;
    cout << "\n��������� �����:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << setw(5) << array[i][j];
        }
        cout << endl;
    }

    return 0;
}
