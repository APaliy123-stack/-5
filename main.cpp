//
//  main.cpp
//  Лабораторная 5
//
//  Created by Андрей Палий on 12.10.2025.
//

#include <iostream>
using namespace std;
int main() {
    int n, m, i, ii, z, zz;
    cout<<"введите число строк"<<"\n";
    
    cin>>m;
    cout<<"введите число столбцов"<<"\n";
    cin>>n;
    
    int arr [m] [n];
    for (z=0; z<m; z++)/*вводим двумерный массив */
    {
        for (zz=0; zz<n; zz++)
        {
            cin>>arr[z] [zz];
            
        }
    }
 
    int k=0; /*переменная i обращается к позиции по столбцу. переменная ii обращается к позиции по строке*/
    for(i=0; i<n; i++)
    {
        int mx=0, su=0;/*mx-переменная, хранящая максимальный элемент в каждом столбце. su-сумма элементов строки*/
        
        for(ii=0; ii<m; ii++)
        {
            if((arr[ii] [i])>mx)
            {
                mx=(arr[ii] [i]);
            }
            su+=arr[ii] [i];
            
        }
        if((su-mx)<mx)
        {
            k+=1;
        }
    }
    cout<<k;
    return 0;
}
