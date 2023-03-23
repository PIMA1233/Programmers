#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow;
    int height = 3;
    while(1){
        if(sum%height == 0){
            int width = sum/height;
            if((width-2)*(height-2) == yellow){
                answer.push_back(width);
                answer.push_back(height);
                break;
            }
        }
        
        height++;
    }
    
    return answer;
}