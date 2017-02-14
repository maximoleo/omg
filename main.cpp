//
//  main.cpp
//  lab01
//
//  Created by Maksim Lopatin on 13/02/2017.
//  Copyright © 2017 Maksim Lopatin. All rights reserved.
//

#include <iostream>
using namespace std;
void func(int  a, int b);
const int n = 9;
int arr[n];

int main()
{
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    func(0,n-1);
    for (int i = 0; i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}



void func(int  a, int b)
{
    int c = (b+a)/2;
    int central = arr[c];
    int kladovka = 0, i = a, j = b;
    while ((i!=j) or (central !=arr[c]))
    {
        if (central!=arr[c])
        {
            i = a;
            j = b;
        }
         central = arr[c];
        if ((arr[i]<=arr[c])and(i<c))
        {
            i++;
        }
        else if ((arr[j]>=arr[c])and(j>c))
        {
            j--;
        }
        else if ((arr[c]<=arr[i])and(arr[c]>=arr[j]))
        {
            kladovka = arr[i];
            arr[i] = arr[j];
            arr[j] = kladovka;
        }

        
    }
 

    if ((a!=b) and (i = j) and (a!=c))
    {
        func(a,c-1);
    }
    if ((b!=c) and (i = j)and (b!=c+1))
    {
        func(c, b);
    }

}
