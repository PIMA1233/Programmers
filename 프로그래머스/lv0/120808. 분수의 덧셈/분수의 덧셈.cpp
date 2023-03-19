#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int denom = denom1 * denom2;
    int numer = numer1*denom2 + numer2*denom1;
    int min_num = min(denom,numer);
    int max_div_num=1;
    
    for(int i=1;i<=min_num;i++){
        if(denom%i == 0 && numer%i == 0){
            if(max_div_num < i) max_div_num=i;
        }
    }
    
    answer.push_back(numer/max_div_num);
    answer.push_back(denom/max_div_num);
    
    return answer;
}