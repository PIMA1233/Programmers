#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool cmp(pair<string,int> a, pair<string,int> b){
    return a.second > b.second;    
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    map<string,int> m;
    int size = genres.size();
    
    // 1. genres의 재생 횟수 구하기
    for(int i = 0; i < size; ++i){
        if (m.find(genres[i]) == m.end())
            m.insert(make_pair(genres[i], plays[i]));
        else
            m[genres[i]] += plays[i];
    }
    
    // 2. plays(map의 value값)를 기준으로 정렬
    vector<pair<string,int>> v(m.begin(), m.end()); // iterator와 for문을 사용하는 것보다 훨씬 효과적!
    sort(v.begin(), v.end(), cmp);

    
    // 3. genres에서 v에 있는 genres를 순서대로 찾은 후 play수가 많은 1가지 혹은 2가지 값을 answer에 넣기
    for (int i = 0; i < v.size(); ++i){
        int f = 0; // 그 장르에서 가장 큰 값의 play
        int fi = 0; // 그 장르에서 가장 큰 값의 index
        int s = 0; // 그 장르에서 두 번째로 큰 값의 play
        int si = 0; // 그 장르에서 두 번째로 큰 값의 index
        for (int j = 0; j < size; ++j){ // 계속 비교하면서 그 장르에서 plays가 가장 큰 값, 두 번째로 큰 값, 값들의 index를 저장
            if (genres[j] == v[i].first){
                if (plays[j] > f){
                    s = f; // 밀리는 부분도 체크!!
                    si = fi; // 밀리는 부분도 체크!!            
                    f = plays[j];
                    fi = j;
                    
                }
                else if (plays[j] > s){
                    s = plays[j];
                    si = j;
                }
            }
        }
        answer.push_back(fi);
        if(s > 0) // 두 번째 값이 존재하면 두 번째 값도 넣어준다
            answer.push_back(si);
    }
    
    return answer;
}