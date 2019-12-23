#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int m, n;
    
    cout << "Введите M";
    cin >> m;
    cout << "Введите N";
    cin >> n;
    
    
    int** arr = new int* [m];
    
    
    for (int i = 0; i < m; i++){
        arr[i] = new int [n];
    }
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    
    
    
    bool odd;
    
    for (int j = 0; j < n; j++){
        odd = true;
        for (int i = 0; i < m; i++){
            if (arr[i][j] % 2 != 0){
                continue;
            }
            else{
                odd = false;
                break;
            }
        }
        
        if (odd){
            cout << "Первый столбец содержащий только нечётные числа =" << j;
            break;
        }
    }
    
    if (!odd){
        cout << 0;
    }
