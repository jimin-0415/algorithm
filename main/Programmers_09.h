//
// Created by Programmer on 2022/12/27.
//

#include "Common.h"
#include <vector>

/**
 * [Level 0] 7의 계수
 * 링크 : https://school.programmers.co.kr/learn/courses/30/lessons/120906
 * 풀이
 * 1. 문자열로 치환 후 7의 개수를 판단합니다.
 */
class Programmers_09 : public Question
{
public:
    void Result() override
    {
        vector<int> array = { 7, 17 };
        int answer = 0;
        for(int i : array){
            string number = to_string(i);
            while(true){
                int index = number.find("7");
                if(index == -1)
                    break;
                answer++;
                number.erase(index, index+1);
            }
        }
        cout << answer << endl;
        return;
    }
};