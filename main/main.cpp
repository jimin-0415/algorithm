#include <iostream>

#include "Programmers_11.h"

using namespace std;

template<typename T>
static void Solve(T question){
    question.Result();
}

int main() {
    //확인하고 싶을 경우 클래스를 수정.
    Programmers_11 quest;

    Solve(quest);
    return 0;
}
