#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string temp="";
    temp=to_string(n);
    for(int i=0;i<temp.size();i++){
        answer+=(temp[i]-'0');
    }
    return answer;
}