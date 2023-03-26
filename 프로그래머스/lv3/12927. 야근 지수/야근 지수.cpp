#include <string>
#include <vector>
#include <queue>

using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
    priority_queue<int> q(works.begin(), works.end());
    
    while(n-- && !q.empty()){
        int num = q.top();
        q.pop();
        if(num!=1) q.push(num-1);
    }
    
    while(!q.empty()){
        answer += (q.top()*q.top());
        q.pop();
    }
    
    return answer;
}