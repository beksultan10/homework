#include <iostream>
#include <string>
#include <algorithm>
using namespace std;



using namespace std;

//void func(int* arr, int size, int* summ, int* mult)
//{
//    for (int i = 0; i < size; i++)
//    {
//        *summ += *(arr + i);
//    }
//    cout << "Sum: " << *summ << endl;
//    for (int j = 0; j < size; j++)
//    {
//        *mult *= (*arr + j);
//    }
//    cout << "Mult: " << *mult << endl;
//}
//
//int main()
//{
//    srand(time(0));
//    const int size = 5;
//    int arr[size];
//    int summ = 0, multi = 1;
//    int* psumm = &summ;
//    int* pmulti = &multi;
//    for (int i = 0; i < size; i++)
//    {
//        arr[i] = rand() % 100;
//    }
//    int* pa = &arr[0];
//    func(pa, size, psumm, pmulti);
//
//    return 0;
//}



double DeltaCountEvenOdd(int** x, int N, int M, int& count_even, int& count_odd)
{
    int sum = 0;
    double delta;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            sum += x[i][j];
            if (x[i][j] % 2 == 0) count_even++;
        }
    count_odd = N * M - count_even;
    delta = (double)sum / (N * M);
    return delta;
}

int main()
{
    srand((int)time(0));
    int n, m, count_even = 0, count_odd = 0;
    cout << "n="; cin >> n;
    cout << "m="; cin >> m;

    int** a = new int* [n];
    for (int i = 0; i < n; i++)
        a[i] = new int[m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = rand() % 9 + 1;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "delta=" << DeltaCountEvenOdd(a, n, m, count_even, count_odd);
    cout << "\ncount_even=" << count_even << "\ncount_odd=" << count_odd << "\n";

    for (int i = 0; i < n; i++)
        delete[] a[i];
    delete[] a;
    system("pause");
    return 0;
}
