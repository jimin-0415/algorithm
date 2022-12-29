//
// Created by Programmer on 2022/12/29.
//

#include "Common.h"
#include <vector>
#include <map>
#include <unordered_map>
/**
 * [Level 1] 성격 유형 검사하기
 * 링크 : https://school.programmers.co.kr/learn/courses/30/lessons/118666
 */
class Programmers_11 : public Question
{
public:
    void Result() override
    {
        vector<string> survey = {"TR", "RT", "TR"};
        vector<int> choices = { 7,1,3 };

        if(survey.size() != choices.size())
            return;

        unordered_map<int, int> pointMap = {
                {1,3},
                {2,2},
                {3,1},
                {4,0},
                {5,1},
                {6,2},
                {7,3}
        };

        map<char, int> surveyPointMap{
                {'R', 0},
                {'T', 0},
                {'C', 0},
                {'F', 0},
                {'J', 0},
                {'M', 0},
                {'A', 0},
                {'N', 0},
        };

        for(int i = 0; i < survey.size(); i++){
            char key;
            if(choices[i] < 4){ //성격 앞 유형
                surveyPointMap[survey[i][0]] += pointMap[choices[i]];
            }
            else if(choices[i] > 4){ //성격 뒤 유형
                surveyPointMap[survey[i][1]] += pointMap[choices[i]];
            }
            else
                continue;
        }

        /**
         *  1번 지표	라이언형(R), 튜브형(T)
            2번 지표	콘형(C), 프로도형(F)
            3번 지표	제이지형(J), 무지형(M)
            4번 지표	어피치형(A), 네오형(N)
         */
        string answer = "";
        answer += surveyPointMap['R'] >= surveyPointMap['T'] ? "R" : "T";
        answer += surveyPointMap['C'] >= surveyPointMap['F'] ? "C" : "F";
        answer += surveyPointMap['J'] >= surveyPointMap['M'] ? "J" : "M";
        answer += surveyPointMap['A'] >= surveyPointMap['N'] ? "A" : "N";
        cout << answer << endl;
        return;
    }
};