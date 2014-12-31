//
//  main.cpp
//  HalloweenPartyHackerRank
//
//  Created by Raquel Alvarez on 12/31/14.
//  Copyright (c) 2014 R. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned long long k[10];
    int T;
    
    cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        cin >> k[i];
    }
    
    
    for (int j = 0; j < T; j++)
    {
        if (k[j] % 2 == 0)
        {
            cout << ((k[j]+1)/2)*(k[j]/2) << endl;
        }
        else
        {
            cout << ((k[j]+1)/2)*(k[j]/2) << endl;
        }
    }
    return 0;
}