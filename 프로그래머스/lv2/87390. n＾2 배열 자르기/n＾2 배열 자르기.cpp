#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    vector<int> temp;
    
    for(int i=left/n;i<=right/n;i++){
        for(int j=0;j<n;j++){
            if(i>=j) temp.push_back(i+1);
            else temp.push_back(j+1);
        }
    }
    
    for(int i=left-(left/n)*n;i<=right-(left/n)*n;i++){
        answer.push_back(temp[i]);
    }
    
    return answer;
}