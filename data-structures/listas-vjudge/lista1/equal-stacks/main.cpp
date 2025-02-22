#include <iostream>
#include "alist.h"
#include <vector> //importanto vector para tratamento de entradas

using namespace std;

int equalStacks(AList<int> &h1, AList<int>& h2, AList<int> &h3);

int main() {

    int input;
    vector<int> lenStacks;

    for(int i = 0; i < 3; i++)
    {
        cin >> input;
        lenStacks.push_back(input);
    }
    
    AList<int> h1(lenStacks[0]);
    AList<int> h2(lenStacks[1]);
    AList<int> h3(lenStacks[2]);
    
    for(int i=0; i < lenStacks[0]; i++){
        cin >> input;
        h1.append(input);
    }
    for(int i=0; i < lenStacks[1]; i++){
        cin >> input;
        h2.append(input);
    }
    for(int i=0; i < lenStacks[2]; i++){
        cin >> input;
        h3.append(input);
    }
    
    cout << equalStacks(h1, h2, h3) << endl;
    
    return 0;
}

int equalStacks(AList<int> &h1, AList<int>& h2, AList<int> &h3) {
    int sum1;
    int sum2;
    int sum3;

    sum1 = h1.sum();
    h1.moveToStart();
    sum2 = h2.sum();
    h2.moveToStart();
    sum3 = h3.sum();
    h3.moveToStart();
    
    if(sum1 == sum2 && sum1==sum3) {
        return sum1;
    }
    
    while (sum1 != sum2 || sum1 != sum3) {
        if(sum1 > sum2 || sum1 > sum3) {
            sum1 -= h1.getValue();
            h1.remove();
        }
        if(sum2 > sum1 || sum2 > sum3) {
            sum2 -= h2.getValue();
            h2.remove();
        }
        if(sum3 > sum2 || sum3 > sum1) {
            sum3 -= h3.getValue();
            h3.remove();
        }
    }
    
    return sum1;
}