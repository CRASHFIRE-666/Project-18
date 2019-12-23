#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int m;
    
    do{
        cout << "Введите M";
        cin >> m;
    }while(m % 2 == 0);
    
    int** arr = new int* [m];
    
    
    for (int i = 0; i < m; i++){
        arr[i] = new int [m];
    }
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    
    
    int counter = 0;
    int t = 0;
    int mer = m;
    
    while (counter != m * m){
        for (int i = t; i < mer; i++){
            cout << arr[i][t] << " ";
            counter++;
        }
        for (int i = t + 1; i < mer; i++){
            cout << arr[mer - 1][i] << " ";
            counter++;
        }
        for (int i = mer - 2; i >= t; i--){
            cout << arr[i][mer - 1] << " ";
            counter++;
        }
        for (int i = mer - 2; i >= t + 1; i--){
            cout << arr[t][i] << " ";
            counter++;
        }
        
        mer--;
        t++;
    }
            
    
}
