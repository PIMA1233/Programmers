#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    map<string, int> shopping;
    vector<string> discount_temp = discount;
    
    for(int i=0;i<want.size();i++) {
        shopping.insert({want[i], number[i]});
    }
    
    sort(discount_temp.begin(), discount_temp.end());
    auto last = unique(discount_temp.begin(), discount_temp.end());
    discount_temp.erase(last, discount_temp.end());
    
    for(auto str : want) {
        auto it = find(discount_temp.begin(), discount_temp.end(), str);
        if (it == discount_temp.end()) return answer;
    }
    
    for(int i = 0;i<discount.size();i++) {
        map<string, int> shopping_temp = shopping;
        for(int j=i;j<i+10 && j<discount.size();j++){
            shopping_temp[discount[j]]--;
        }
        
        int flag = 0;
        for(auto it : shopping_temp) {
            if(it.second != 0) {
                flag = 1;
                break; 
            }
        }
        if(flag == 0) {
            answer++;
        }
    }
    
    
    return answer;
}