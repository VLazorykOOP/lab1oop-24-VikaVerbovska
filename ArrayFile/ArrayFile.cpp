#include <iostream>
using namespace std;

int mainone() {
    const int N = 10;
    int A[N];

    // Заповнення масиву
    cout << "vedit elementu masivu" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << "A[" << i << "]: ";
        std::cin >> A[i];
    }

    int maxNegative = -1; // Початкове значення для максимального від'ємного елемента
    int maxNegativeIndex = -1; // Початкове значення для індексу максимального від'ємного елемента

    // Пошук максимального від'ємного елемента та його індексу
    for (int i = 0; i < N; ++i) {
        if (A[i] < 0 && (maxNegative == -1 || A[i] > A[maxNegative])) {
            maxNegative = i;
            maxNegativeIndex = A[i];
        }
    }

    // Виведення результатів
    if (maxNegativeIndex != -1) {
        std::cout << "max videmniy element: " << A[maxNegative] << std::endl;
        std::cout << "index: " << maxNegative << std::endl;
    }
    else {
        std::cout << "vidsutni" << std::endl;
    }


    return 0;
}

int maintwo() {

    const int N = 10;
    int A[N];

    // Введення значень масиву
    std::cout << "vedir elementi masivu:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << "A[" << i << "]: ";
        std::cin >> A[i];
    }
    int A1, B;
    std::cout << "A1: ";
    std::cin >> A1;

    std::cout << "B: ";
    std::cin >> B;

    int minBelowB = INT_MAX; // Початкове значення для мінімального елемента нижче B

    for (int i = 0; i < N && A[i] <= A1; ++i) {
        if (A[i] < B && A[i] < minBelowB) {
            minBelowB = A[i];
        }
    }

    // Виведення результатів
    if (minBelowB != INT_MAX) {
        std::cout << "Min element, menshiy " << B << " i roztashovaniy do pershogo elementa, bilshogo " << A1 << ": " << minBelowB << std::endl;
    }
    else {
        std::cout << "Vidsutni" << std::endl;
    }

    return 0;
}
int main()
{
    //Створюємо змінні та пояснюємо завдання
    int task;
    std::cout << "Zadano odnovimirniy masiv A rozmiron B.Znayti sered vsih videmnix max element masivu ta yogo index" << endl;
    std::cout << endl;
    std::cout << "Second task: Find the maximum value among the negative elements located to the first element, smaller than the given number X." << endl;
    std::cout << endl;

    //Вибір завдання
    std::cout << "Vibrat zavdannya 1 abo 2:" << endl;
    std::cin >> task;

    //Виклик функції
    if (task == 1) {
        cout << "Pershe zavdannya" << endl;
        mainone();
    }
    else if (task == 2) {
        cout << "Druge zavdannya" << endl;
        maintwo();
    }
    return 0;
}


