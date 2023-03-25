#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    int elements_len = elements.size();
    map<int, int> v;
    
    for(int i=0;i<elements_len;i++){
        int sum=0, sum_size=0, arr_idx=i;
        while(sum_size < elements_len){
            sum+= elements[arr_idx%elements_len];
            v[sum]++;
            arr_idx++;
            sum_size++;
        }
    }
    
    answer = v.size();
    
    return answer;
}