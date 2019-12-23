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
    
    
    
    
    for (int j = 0; j < n; j++){
        int average = 0;
        int counter = 0;
        for (int i = 0; i < m; i++){
            average += arr[i][j];
        }
        average /= m;
        
        for (int i = 0; i < m; i++){
            if (arr[i][j] > average){
                counter++;
            }
        }
        cout << counter << "элементов больше чем среднее арифмитическое в" << j << "столбце" << endl;
    }
    
    return 0;
}
