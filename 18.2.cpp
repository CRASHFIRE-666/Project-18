#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int m, n, s;
    
    cout << "Ведите M";
    cin >> m;
    cout << "Введите N";
    cin >> n;
    cout << "Enter S";
    cin >> s;
    
    if (s > m || s < 0){
        cout << "НЕВЕРНОЕ ЗНАЧЕНИЕ";
        return 0;
    }
    
    int** arr = new int* [m];
    
    
    for (int i = 0; i < m; i++){
        arr[i] = new int [n];
    }
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    
    
    int sum = 0;
    int mult = 1;
    
    for (int j = 0; j < n; j++){
        sum += arr[s][j];
        mult *= arr[s][j];
    }
    
    cout << "Сумма=" << sum << endl;
    cout << "Умножение=" << mult << endl;
    
    
    return 0;
}
