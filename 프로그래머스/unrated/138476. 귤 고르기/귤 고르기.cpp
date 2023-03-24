#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int tangerine_cnt[10000001]={0,};

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    
    int min_idx=10000002, max_idx=0;
    for(int i=0;i<tangerine.size();i++){
        tangerine_cnt[tangerine[i]]++;
        if(min_idx > tangerine[i]) min_idx = tangerine[i];
        if(max_idx < tangerine[i]) max_idx = tangerine[i];
    }
    
    sort(tangerine_cnt+min_idx,tangerine_cnt+max_idx+1,greater<int>());
    while(k>0){
        k-=tangerine_cnt[min_idx];
        min_idx++;
        answer++;
    }
    return answer;
}