#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int first,last;
    cin>>first;
    cin>>last;

    for (int i=first;i<=last;i++){
        if (i%2==0){
            if (i==2)
                cout<<"two"<<endl;
            else if (i==4)
                cout<<"four"<<endl;
            else if (i==6)
                cout<<"six"<<endl;
            else if (i==8)
                cout<<"eight"<<endl;
            else 
                cout<<"even"<<endl;
        }   
        else {
            if (i==1)
                cout<<"one"<<endl;
            else if (i == 3)
              cout << "three" << endl;
            else if (i == 5)
              cout << "five" << endl;
            else if (i == 7)
              cout << "seven" << endl;
            else if (i == 9)
              cout << "nine" << endl;
            else{
                cout<<"odd"<<endl;
              }
        }
    }
    return 0;
}