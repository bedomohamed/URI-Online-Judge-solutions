//
//  main.cpp
//  URI Online Judge | 1042 Simple Sort
//
//  Created by abdelrahman abdelmoneim on 9/21/19.
//  Copyright © 2019 Abdelrahman Abdelmoneim. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    vector<int> unsoted_data;
    unsoted_data.push_back(x);
    unsoted_data.push_back(y);
    unsoted_data.push_back(z);
    
    sort(unsoted_data.begin(),unsoted_data.end());
    
    for(int i = 0; i < unsoted_data.size(); i++){
        cout << unsoted_data.at(i) <<endl;
    }
    
    cout<<endl << x << endl<< y << endl << z << endl;
    
    
    
    return 0;
}
