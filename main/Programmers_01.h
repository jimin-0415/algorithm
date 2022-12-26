//
// Created by Programmer on 2022/12/26.
//

#include "Common.h"
#include <vector>

//크기가 작은 부분문자열
//링크 : https://school.programmers.co.kr/learn/courses/30/lessons/147355
class Programmers_01 : public Question
{
public:
    void Result() override
    {
        //5, 0, 2, 3, 7
        string t = "500220839878";
        string p = "7";

        vector<int> splitContainer;
        int pSize = p.size();
        long integerP = stol(p);
        int answer = 0;
        for(int i = 0; i <= t.size() - pSize; i++){
            if(stol(t.substr(i, pSize)) <= integerP)
                answer++;
        }
        cout << answer << endl;
        return;
    }
};

/*
 프로그래머스 풀이방법
#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int pSize = p.size();
    long integerP = stol(p);
    int answer = 0;
    for(int i = 0; i <= t.size() - pSize; i++){
        if(stol(t.substr(i, pSize)) <= integerP)
            answer++;
    }

    return answer;
}*/
