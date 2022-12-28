//
// Created by Programmer on 2022/12/26.
//

#include "Common.h"
#include <vector>
#include <queue>
//과일장수 [Level 1]
// ->
//링크 : https://school.programmers.co.kr/learn/courses/30/lessons/120897
class Programmers_07 : public Question
{
public:
    void Result() override
    {
        int k = 3;  //최상 품질 계수
        int m = 3;  //상자에 담기는 개수
        vector<int> score { 1, 1, 2, 2, 3, 3, 3};
        int answer = 0;

        priority_queue<int, vector<int>, less<int>> pq(score.begin(), score.end());
        int tempScore = 0;
        int insertCount = 0;
        while(!pq.empty()){
            tempScore = pq.top();   //기록
            pq.pop();               //뺴고
            insertCount++;          //카운트 증가.
            if(insertCount >= m){
                insertCount = 0;
                answer += tempScore * m;    //완제품일 경우 등록
            }
        }
        cout << answer << endl;
        return;
    }
};
