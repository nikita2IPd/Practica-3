#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n; 
    cout << "Введите количество участников: ";
    cin >> n;


    int* id = new int[n];
    int* points = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Введите идентификационный номер участника " << i + 1 << ": ";
        cin >> id[i];
        cout << "Введите количество набранных баллов участника " << i + 1 << ": ";
        cin >> points[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (points[j] < points[j + 1]) {
                int tempId = id[j];
                id[j] = id[j + 1];
                id[j + 1] = tempId;
                int tempPoints = points[j];
                points[j] = points[j + 1];
                points[j + 1] = tempPoints;
            }
        }
    }

    cout << "Отсортированный список участников олимпиады:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Участник " << i + 1 << ": Идентификационный номер - " << id[i] << ", Баллы - " << points[i] << endl;
    }

    delete[] id;
    delete[] points;

    return 0;
}