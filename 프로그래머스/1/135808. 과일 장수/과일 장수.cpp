#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.begin(),score.end(),greater<int>());
    for(int i = m-1; i < score.size(); i+=m) {
        answer += (m * score[i]);
    }
    return answer;
}