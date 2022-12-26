//
// Created by Programmer on 2022/12/26.
//

#include "Common.h"
#include <vector>
#include <map>
//가장 가까운 같은 글자
// 해당 문제 풀이법 : Pos 위 차이를 어떻게 구할것인가.
//링크 : https://school.programmers.co.kr/learn/courses/30/lessons/142086
class Programmers_02 : public Question
{
public:
    void Result() override
    {
        string s = "banana";
        map<char, int> recordMap;
        vector<int> answer;
        for(int i = 0; i < s.size(); i++){
            if(recordMap.find(s[i]) == recordMap.end()){
                recordMap.insert(pair<char, int>(s[i], i));
                answer.push_back(-1);
            }
            else {
                int diffPos = i - recordMap[s[i]];
                recordMap[s[i]] = i;
                answer.push_back(diffPos);
            }
        }

        for(int i : answer){
            cout << i << endl;
        }
        return;
    }
};

/**
 * Programmers 답변
#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    map<char, int> recordMap;
    for(int i = 0; i < s.size(); i++){
        if(recordMap.find(s[i]) == recordMap.end()){
            recordMap.insert(pair<char, int>(s[i], i));
            answer.push_back(-1);
        }
        else {
            int diffPos = i - recordMap[s[i]];
            recordMap[s[i]] = i;
            answer.push_back(diffPos);
        }
    }
    return answer;
}
*/