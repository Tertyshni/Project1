#include<iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "uk-ua");
    cout << boolalpha;
    int a, b, X;

    cout << "������� a: ";
    cin >> a;

    cout << "������� b: ";
    cin >> b;

    if (a > b) {
        X = b - 5 * a;
    }
    else if (a == b) {
        if (a != 0) {
            X = (5 - b) / a;
        }
        else {
            cout << "�������: ������ �� ����!" << endl;
            return 1;
        }
    }
    else {
        if (b != 0) {
            X = (a - 5) / b;
        }
        else {
            cout << "�������: ������ �� ����!" << endl;
            return 1;
        }
    }

    cout << "��������� X = " << X << endl;

    return 0;
}

#include<iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "uk-ua");
    cout << boolalpha;
    int commodity, cost, discount = 0;

    cout << "������� ������� ������: ";
    cin >> commodity;

    cout << "������� �������: ";
    cin >> cost;

    int all_cost = commodity * cost;

    if (all_cost >= 300) {
        discount = 0.07;
    }
    else if (all_cost >= 200) {
        discount = 0.05;
    }
    else if (all_cost >= 100) {
        discount = 0.03;
    }



    cout << "�������� �������: " << all_cost << " ���" << endl;
    cout << "������: " << discount * 100 << "% = " << all_cost << " ���" << endl;
    return 0;
}

#include <iostream>
#include <cmath> 

int main() {
    double number;
    std::cout << "������ ������� �����: ";
    std::cin >> number;

    if (fabs(number - static_cast<int>(number)) < 1e-9) {
        std::cout << "��������� ������� ������� ����." << std::endl;
    }
    else {
        std::cout << "� ��������� ��������� �������." << std::endl;
    }

    return 0;
}

#include <iostream>

int main() {
    int day;
    std::cout << "������ ����� ��� ����� (1-7): ";
    std::cin >> day;

    switch (day) {
    case 1:
        std::cout << "��������" << std::endl;
        break;
    case 2:
        std::cout << "³������" << std::endl;
        break;
    case 3:
        std::cout << "������" << std::endl;
        break;
    case 4:
        std::cout << "������" << std::endl;
        break;
    case 5:
        std::cout << "�'������" << std::endl;
        break;
    case 6:
        std::cout << "������" << std::endl;
        break;
    case 7:
        std::cout << "�����" << std::endl;
        break;
    default:
        std::cout << "������� ����� ���! ������ ����� �� 1 �� 7." << std::endl;
        break;
    }

    return 0;
}

#include <iostream>

int main() {
    double x, y;
    std::cout << "������ ���������� ����� (x y): ";
    std::cin >> x >> y;

    if (x == 0 && y == 0) {
        std::cout << "����� ����������� � ������� ���������." << std::endl;
    }
    else if (x == 0) {
        std::cout << "����� ����������� �� �� Y." << std::endl;
    }
    else if (y == 0) {
        std::cout << "����� ����������� �� �� X." << std::endl;
    }
    else if (x > 0 && y > 0) {
        std::cout << "����� ����������� � � �����." << std::endl;
    }
    else if (x < 0 && y > 0) {
        std::cout << "����� ����������� � �� �����." << std::endl;
    }
    else if (x < 0 && y < 0) {
        std::cout << "����� ����������� � ��� �����." << std::endl;
    }
    else if (x > 0 && y < 0) {
        std::cout << "����� ����������� � �V �����." << std::endl;
    }

    return 0;
}

#include <iostream>

int main() {
    double uah, result;
    int choice;
    const double EUR_RATE = 41.5; 
    const double USD_RATE = 38.2; 
    const double RUB_RATE = 0.42; 

    std::cout << "������ ���� � �������: ";
    std::cin >> uah;

    if (uah < 0) {
        std::cout << "���� �� ���� ���� ��'�����!" << std::endl;
    }
    else {
        std::cout << "������ ������ ��� �����������:" << std::endl;
        std::cout << "1 - ����" << std::endl;
        std::cout << "2 - ������ ���" << std::endl;
        std::cout << "3 - ������� ����" << std::endl;
        std::cout << "��� ����: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            result = uah / EUR_RATE;
            std::cout << "���� � ����: " << result << " EUR" << std::endl;
            break;
        case 2:
            result = uah / USD_RATE;
            std::cout << "���� � ������� ���: " << result << " USD" << std::endl;
            break;
        case 3:
            result = uah / RUB_RATE;
            std::cout << "���� � ��������� ������: " << result << " RUB" << std::endl;
            break;
        default:
            std::cout << "������� ���� ������!" << std::endl;
            break;
        }
    }

    return 0;
}
#include <iostream>

int main() {
    int day, month, year;
    int hour, minute, second;
    bool isValid = true;

    std::cout << "������ ��: ";
    std::cin >> year;
    std::cout << "������ ����� (1-12): ";
    std::cin >> month;
    std::cout << "������ ����: ";
    std::cin >> day;
    std::cout << "������ ������ (0-23): ";
    std::cin >> hour;
    std::cout << "������ ������� (0-59): ";
    std::cin >> minute;
    std::cout << "������ ������� (0-59): ";
    std::cin >> second;

    if (year < 0) {
        isValid = false;
    }

    if (month < 1 || month > 12) {
        isValid = false;
    }

    int maxDays = 31;
    switch (month) {
    case 4: case 6: case 9: case 11:
        maxDays = 30;
        break;
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            maxDays = 29;
        else
            maxDays = 28;
        break;
    }

    if (day < 1 || day > maxDays) {
        isValid = false;
    }

  
    if (hour < 0 || hour > 23 || minute < 0 || minute > 59 || second < 0 || second > 59) {
        isValid = false;
    }

   
    if (isValid) {
        std::cout << "���� � ��� ������ ��������!" << std::endl;
    }
    else {
        std::cout << "�������! ������ ������ ���." << std::endl;
    }

    return 0;
}

#include <iostream>

int main() {
    int ticket;
    std::cout << "������ ����� ������ (6 ����): ";
    std::cin >> ticket;

    if (ticket < 0 || ticket > 999999) {
        std::cout << "������� ����� ������! ³� �� ���� ������������." << std::endl;
    }
    else {
        int d1 = (ticket / 100000) % 10;
        int d2 = (ticket / 10000) % 10;
        int d3 = (ticket / 1000) % 10;
        int d4 = (ticket / 100) % 10;
        int d5 = (ticket / 10) % 10;
        int d6 = ticket % 10;

        int sumFirstHalf = d1 + d2 + d3;
        int sumSecondHalf = d4 + d5 + d6;

        if (sumFirstHalf == sumSecondHalf) {
            std::cout << "������ ��������!" << std::endl;
        }
        else {
            std::cout << "������ ����������." << std::endl;
        }
    }

    return 0;
}

#include <iostream>

int main() {
    int age;
    std::cout << "������ ��� ��: ";
    std::cin >> age;

    if (age < 0) {
        std::cout << "³� �� ���� ���� ��'�����!" << std::endl;
    }
    else if (age >= 60) {
        std::cout << "��� ���� �� �����." << std::endl;
    }
    else {
        std::cout << "�� ������ �� �����." << std::endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "������ ���������� ����� ����� (�� 0 �� 35): ";
    cin >> number;

    if (number < 0 || number > 35) {
        cout << "�������: ����� �� ���� � ����� �� 0 �� 35!" << endl;
        return 1;
    }

    string suits[] = { "ϳ��", "�����", "�����", "�����" };
    string ranks[] = { "6", "7", "8", "9", "10", "�����", "����", "������", "���" };

    int suit = number / 9;  
    int rank = number % 9;  

    cout << "���� �����: " << ranks[rank] << " " << suits[suit] << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int hours, minutes;

    cout << "������ ������ (0-23): ";
    cin >> hours;
    cout << "������ ������� (0-59): ";
    cin >> minutes;


    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
        cout << "�������: ������ �������� ���!" << endl;
        return 1;
    }

    if (hours >= 5 && hours < 12) {
        cout << "������ �����!" << endl;
    }
    else if (hours >= 12 && hours < 18) {
        cout << "������ ����!" << endl;
    }
    else if (hours >= 18 && hours < 23) {
        cout << "������ �����!" << endl;
    }
    else {
        cout << "����� ����!" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int height, weight, idealWeight, difference;

    cout << "������ ��� ��� (� �����������): ";
    cin >> height;
    cout << "������ ���� ���� (� ���������): ";
    cin >> weight;

    idealWeight = height - 110;
    difference = weight - idealWeight;

    cout << "�������� ���� ��� ���: " << idealWeight << " ��." << endl;

    if (difference > 0) {
        cout << "��� ������� ������� " << difference << " ��." << endl;
    }
    else if (difference < 0) {
        cout << "��� ������� ������� " << -difference << " ��." << endl;
    }
    else {
        cout << "���� ���� ��������!" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

// ������� �������� ����������� ����
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int day, month, year;

    cout << "������ ����: ";
    cin >> day;
    cout << "������ �����: ";
    cin >> month;
    cout << "������ ��: ";
    cin >> year;

  
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30,
                         31, 31, 30, 31, 30, 31 };


    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    day++;

    if (day > daysInMonth[month - 1]) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }

    cout << "�������� ����: " << day << "." << month << "." << year << endl;

    return 0;
}

#include <iostream>
using namespace std;


bool isPrimeDigit(int digit) {
    return (digit == 2 || digit == 3 || digit == 5 || digit == 7);
}

int main() {
    int number;
    cout << "������ �'��������� �����: ";
    cin >> number;

  
    if (number < 10000 || number > 99999) {
        cout << "�������: ������� ������ �'��������� �����!" << endl;
        return 1;
    }

    bool allPrime = true;

    int temp = number;
    while (temp > 0) {
        int digit = temp % 10;
        if (!isPrimeDigit(digit)) {
            allPrime = false;
            break;
        }
        temp /= 10; 
    }

    if (allPrime) {
        cout << "�� ����� � �������� �������!" << endl;
    }
    else {
        cout << "�� �� ����� � �������� �������." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "������ ��: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " �� � ����������." << endl;
    }
    else {
        cout << year << " �� �� � ����������." << endl;
    }

    return 0;
}






