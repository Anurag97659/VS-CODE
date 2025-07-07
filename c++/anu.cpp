#include <iostream>
#include <vector>
#include <queue>
#include<stack>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.front();
    cout<<endl<<q.back();

}
