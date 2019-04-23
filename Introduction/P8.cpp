#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int row,col;
    int tak1,tak2;
    int query;

    cin>>row>>query;
    
    vector<vector<int>> vect(row);
    int res[query];
    
  // fill vector
    for (int i =0;i<row;i++){
        cin>>col;
        vect[i] = vector<int>(col);
        for (int j=0;j<col;j++)
            cin>>vect[i][j];
    }
  
  //take query
    for (int i=0;i<query;i++){
        cin>>tak1>>tak2;
        res[i]=vect[tak1][tak2];
    }

  //give output
    for (int i = 0; i < query; i++) {
      cout << res[i] <<endl;
    }

    return 0;
}

