//
// Created by Programmer on 2022/12/26.
//

#include "Common.h"
#include <vector>
//약수 구하기
// 기본 약수에 대한 개념만을 알면 풀 수 있습니다.
//링크 : https://school.programmers.co.kr/learn/courses/30/lessons/120897
class Programmers_05 : public Question
{
public:
    void Result() override
    {
        int n = 10;
        vector<int> answer;
        for(int i = 1 ; i <= n; i++) {
            if(n % i == 0)
                answer.push_back(i);
        }

        for(int i : answer){
            cout << i << endl;
        }
        return;
    }
};

/**
* 기본적인 소수에 대한 이해를 요하는 문제
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for(int i = 1 ; i <= n; i++) {
        if(n % i == 0)
            answer.push_back(i);
    }
    return answer;
}
*/