#include <iostream>
using namespace std;

int main() {
    const int SIZE = 20;
    int arr[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        arr[i] = (i + 1) * 2;
    }


    for (int index = 0; index < SIZE; index++) {
        printf("array[%i] = %i\n", index, arr[index]);
    }

    return 0;
}


using namespace std;

int main() {
    const int SIZE = 20;
    int arr[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        arr[i] = (i + 1) * -1;
    }


    for (int index = 0; index < SIZE; index++) {
        printf("array[%i] = %i\n", index, arr[index]);
    }

    return 0;
}



#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "UK_UA");
    const int SIZE = 20;
    int arr[SIZE];
    int sum = 0;

    srand(time(0));

    cout << "�����: ";
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 41 - 20;
        cout << arr[i] << " ";
        sum += arr[i];
    }

    cout << "\n���� ��� ��������: " << sum << endl;

    return 0;
}



using namespace std;

int main() {
    setlocale(LC_ALL, "UK_UA");
    const int SIZE = 20;
    int arr[SIZE];
    int sum = 0;

    srand(time(0));

    cout << "�����: ";
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 41 - 20;
        cout << arr[i] << " ";
        sum += arr[i] / 20;
    }

    cout << "\n������� �������� ��� ��������: " << sum << endl;

    return 0;
}


using namespace std;

int main() {
    setlocale(LC_ALL, "UK_UA");
    const int SIZE = 10;
    int arr[SIZE] = { 5, 8, 3, 12, 7, 1, 9, 4, 6, 10 };

    int number;
    cout << "������ �����: ";
    cin >> number;

    bool found = false;

    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] == number) {
            cout << "����� �������� �� ������: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "����� �� � �������� �������" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "UK_UA");
    float num[10];
	for (int i = 0; i < 10; i++) {
		cout << "������ �����: ";
		cin >> num[i];
	}
    float min = num[0];
	for (int i = 0; i < 10; i++) {
		if (num[i] < min) {
			min = num[i];
		}
     float max = num[9];
     for (int i = 0; i < 10; i++) {
         if (num[i] > max) {
            min = num[i];
        }
        cout << "̳������� �����: " << max << endl;
		cout << "����������� �����: " << min << endl;
	}
	 return 0;
}
    
#include <iostream>
    using namespace std;

    int main() {
        const int SIZE = 15;
        int arr[SIZE];

        
        arr[0] = 0;
        arr[1] = 1;
        for (int i = 2; i < SIZE; ++i) {
            arr[i] = arr[i - 1] + arr[i - 2];
        }

        
        cout << "����� ����� Գ�������: ";
        for (int i = 0; i < SIZE; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;

        
        int number;
        cout << "������ �����: ";
        cin >> number;

        bool found = false;

        for (int i = 0; i < SIZE; ++i) {
            if (arr[i] == number) {
                cout << "����� �������� �� ������: " << i << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "����� �� � �������� �������" << endl;
        }

        return 0;
    }

#include <iostream>
    using namespace std;

    int main() {
        const int size = 5;
        int arr[size] = { 1, 2, 3, 4, 5 };

        cout << "����� � ���������� �������: ";
        for (int i = size - 1; i >= 0; i--) {
            cout << arr[i] << " ";
        }

        cout << endl;
        return 0;
    }



