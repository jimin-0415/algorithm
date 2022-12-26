//
// Created by Programmer on 2022/12/26.
//

#include "Common.h"
#include <vector>
#include <queue>
//기사단원의 무기
//문제 풀이시 알아야 할 점 : 약수란 해당 수를 나누었을때 나머지가 0으로 되게 하는 수
//약수가 아닐 경우에 대한 케이스
//약수를 구하는 효율 적인 알고리즘이 있다.
//단순히 % 연산을 통해서 나누는것은 너무 비효율적이다.
/**
 * 30의 약수 -> 1,2,3,5,6,10,15,30
1*30 = 30
2*15=30
3*10=30
5*6=30
--------------
6*5=30
10*3=30
15*2=30
30*1=30

위와 같이 30의 약수끼리 곱하게 되면 30의 값이 나오게 된다. 위의 원리를 이용해 3이 약수라는 것을 알게 되면 30/3을 해 또다른 약수를 구할수 있게 된다.
일정한 수를 지나게 되면 숫자의 반복이 발생하는데 이 분기점이 '루트'이다.
 */
// https://kbw1101.tistory.com/32 <- 링크
/**
 * 1 -> 1   -> 1개
    2 -> 1 ,2 -> 2
    3 -> 1 ,3 -> 2
    4 -> 1, 2, 4 -> 2
    5 -> 1 ,5   => 3
    6 -> 1, 2, 3, 6 -> 4[2]
    7 -> 1, 7 -> 2
    8 -> 1,2,4,8 -> 4 [2]
    9 -> 1, 3, 9 -> 3
    10 -> 1,2 ,5 ,10 -> 4 [2]
 */
//링크 : https://school.programmers.co.kr/learn/courses/30/lessons/136798
class Programmers_04 : public Question
{
public:
    void Result() override
    {
        int number = 10;
        int limit = 3;
        int power = 2;

        int answer = 0;

        for(int i = 1; i <= number; ++i){
            int measureCount = 0;
            for(int k = 1; k * k <= i; ++k){
                if(k * k == i){
                    measureCount++;
                }
                else if(i % k == 0) {
                    measureCount += 2;
                }
            }
            if(measureCount > limit){
                measureCount = power;
            }
            answer += measureCount;
        }

        //result;
        cout << answer << endl;
        return;
    }
};