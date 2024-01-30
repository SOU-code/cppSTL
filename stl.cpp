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
//Stcak Concepts
void explainStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4); //{4,3,2,1}
    st.emplace(5); //{5,4,3,2,1}

    st.top(); //5
    st.pop(); //{4,3,2,1}
    st.size(); //4
    st.empty(); //false
    stack<int> st1,st2;
    st1.swap(st2);
}
//Explain Queue
void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4); //{1,2,3,4}
    q.emplace(5); //{1,2,3,4,5}

    q.back(); //5
    q.front();//1
    q.pop(); //{2,3,4,5}

    //size,swap same
}
//Priority Queue concepts ( push,pop->o(logn) , top->o(1) )
void explainPQ(){
    // max heap
    priority_queue<int> pq;
    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    pq.emplace(10);//{10,8,5,2}
    pq.top(); //10
    pq.pop(); //{8,5,2}

    //min heap
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(5);//{5}
    pq.push(2);//{2,5}
    pq.push(8);//{2,5,8}
    pq.emplace(10);//{2,5,8,10}
    pq.top(); //2
    pq.pop(); //{5,8,10}
}
// All set concepts
//normal set ->(unique,sorted) o(logn)
void explainSet(){
    set<int> st;
    st.insert(1);
    st.insert(3);
    st.insert(2);
    st.insert(3); //{1,2,3}

    //begin,end,rbegin,rend,clear,insert,size,swap

    auto it = st.find(3); //where present iteration loc
    auto it = st.find(5); //if not present return st.end()

    //erase same concepts

    int cnt = st.count(1); //1

    //this is the syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}
//Multi set concepts
void explainMultiSet(){
    //all same but can store duplicate elements
    multiset<int> mst;
}
//unodered set concepts (most of time take o(1) rare case o(1) )
void explainUSet(){
    //unique and unsorted
    unordered_set<int> st;
}
//All concepts of map sorted
//normal map -> o(logn)
void explainMap(){
    // <key,value> unique key
    map<pair<int, int>, int> mp1;
    map<int, int> mp;
    mp[1] = 2;
    mp.emplace({3, 1});
    mp.insert({2, 4});
    
    // {{1,2},{3,1},{2,4}}
    for(auto it:mp){
        cout << it.first << " " << it.second;
    }
    mp[1]; //2
    mp[5]; //0
    //find same as set
    //lower_bound,upper_bound


}
// multiple map
void explainMultiMap(){
    multimap<int, int> mmp;
    //same but store multiple key pairs
}
//unordered map
void explainUnorderedMap(){
    multimap<int, int> mmp;
    //time take most of time o(1) but rare case o(n)
}
int main(){
    explainPair(); //Pair Concepts
    explainVector(); //Vector Concepts
    explainList(); //list concepts
    
    explainDeque(); //Deque concepts
    explainStack(); //Stack Concepts
    explainQueue(); //Queue Concepts
    
    explainPQ(); //priority concepts
    
    explainSet(); //normal set concepts
    explainMultiSet(); //Multi set concepts
    explainUSet(); //unodered set
    
    explainMap(); //normal map
    explainMultiMap();
    explainUnorderedMap();

    return 0;
}