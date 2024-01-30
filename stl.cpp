#include <bits/stdc++.h> //header for all algorithms and functionalities
using namespace std;
//Vector Concepts
void explainVector(){
    vector<int> v;
    v.push_back(1); //{1}
    v.emplace_back(2); //work like push_back but faster -> {1,2}
    
    vector<pair<int, int>> vec;
    vec.push_back({1, 2}); //{{1,2}}
    vec.emplace_back(8,9); //{{1,2},{8,9}}

    vector<int> v(5, 100); //{100,100,100,100,100}
    vector<int> v(5); //{0,0,0,0,0} five zero/any garbadge value

    vector<int> v1(5,20);
    vector<int> v2(v1); //copy v1 into v2

    vector<int>::iterator it = v.begin(); //on first element
    cout << *(it) << endl; // first ele of v
    it++;
    cout << *(it) << endl; // second ele of v
    vector<int>::iterator it = v.end(); //after last element
    vector<int>::iterator it = v.rend(); //before first element
    vector<int>::iterator it = v.rbegin(); //on last element

    cout<<v[0]<<v[0]<<" "<<v.at(0);


    // iterationon array
    for (vector<int>::iterator it = v.begin(); it != v.end();it++){
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end();it++){
        cout << *(it) << " ";
    }

    for (auto it:v){
        cout << it << " ";
    }

    // deletion on array
    //{10,20,12,13}
    v.erase(v.begin() + 1); //{10,12,13}

    //{10,20,12,13,35}
    v.erase(v.begin() + 2, v.begin() + 4); //{10,20,35}

    //array insertion
    vector<int> v(2, 100); //{100,100}
    v.insert(v.begin(), 300); //{300,100,100}
    v.insert(v.begin() + 1, 2, 10); //{300,10,10,100,100}

    vector<int> a(2, 50);//{50,50}
    v.insert(v.begin(), a.begin(), a.end()); //{50,50,300,10,10,100,100}

    // size
    v.size(); // 7

    v.pop_back(); //{50}
    v.swap(a); //a={50,300,10,10,100,100},v={50,50}

    v.clear(); //{}

    v.empty(); //true
}
// Pair Concepts
void explainPair(){
    pair<int, int> p = {1, 2};
    cout << p.first <<" "<< p.second<<endl; //1 2
    pair<int, pair<int, int>> q = { 4,{5, 6}};
    cout << p.first << " " << q.second.second << " " << q.second.first; //4 6 5
    pair<int, int> arr[] = {{1, 2}, {9, 3}, {6, 7}};
    cout << arr[1].second; //3
}
//List Concepts
void explainList(){
    list<int> ls;
    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}
    ls.push_front(5); //{5,2,4}
    ls.emplace_front(9); //{9,5,2,4}

    //rest of the concept of vector
    //begin,end,rbegin,rend,clear,insert,size,swap
}
//Deque Concepts
void explainDeque(){
    deque<int> dq;
    dq.push_back(2);
    dq.emplace_back(1);
    dq.push_front(4);
    dq.emplace_front(3); //{3,4,2,1}

    dq.pop_back(); //{3,4,1}
    dq.pop_front(); //{4,1}

    dq.back();
    dq.front();
    //rest of the concept of vector
    //begin,end,rbegin,rend,clear,insert,size,swap
}

int main(){
    explainPair(); //Pair Concepts
    explainVector(); //Vector Concepts
    explainList(); //list concepts
    explainDeque(); //Deque concepts
    return 0;
}