#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int f, n, k;
    
    cout << "Введите F";
    cin >> f;
    
    cout << "Введите N";
    cin >> n;
    
    
    int** arr = new int* [f];
    
    
    for (int i = 0; i < f; i++){
        arr[i] = new int [n];
    }
    
    for (int i = 0; i < f; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    
    
    
    int multi_min = INT_MAX;
    int index;
    
    for (int j = 0; j < n; j++){
        
        int multi = 1;
        
        for (int i = 0; i < f; i++){
            multi *= arr[i][j];
        }
        
        if ( multi <= multi_max){
            multi_max = multi;
            index = j;
        }
    }
    
    
    cout << "Индекс столбца = " << index << endl;
    cout << "Значение = " << multi_max << endl;
    
    
    return 0;
}
