#include <bits/stdc++.h> //header for all algorithms and functionalities
using namespace std;
//Pair Concepts
void explainPair(){
    pair<int, int> p = {1, 2};
    cout << p.first <<" "<< p.second<<endl; //1 2
    pair<int, pair<int, int>> q = { 4,{5, 6}};
    cout << p.first << " " << q.second.second << " " << q.second.first; //4 6 5
    pair<int, int> arr[] = {{1, 2}, {9, 3}, {6, 7}};
    cout << arr[1].second; //3
}
int main(){
    explainPair(); //Pair concepts
    return 0;
}