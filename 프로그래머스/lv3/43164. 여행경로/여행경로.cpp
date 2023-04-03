#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int used[10000] = {0,};
vector<string> res;

bool dfs(string start, vector<vector<string>> tickets, int chkcnt) {
    if(chkcnt == tickets.size()) return true;
    
    for(int i=0;i<tickets.size();i++) {
        if(used[i] == 0 && start == tickets[i][0]) {
            used[i] = 1;
            res.push_back(tickets[i][1]);
            bool resbool = dfs(tickets[i][1], tickets, chkcnt+1);
            if(resbool) return true;
            
            used[i] = 0;
        }
    }
    res.pop_back();
    return false;
}

vector<string> solution(vector<vector<string>> tickets) {
    vector<string> answer;
    sort(tickets.begin(),tickets.end());
    
    string start = "ICN";
    res.push_back(start);
    
    dfs(start, tickets, 0);
    answer = res;
    
    return answer;
}