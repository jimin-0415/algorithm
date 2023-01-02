//
// Created by Programmer on 2023/01/01.
//
#include "Common.h"
#include <vector>
#include <deque>
#include <algorithm>

class Programmers_20 : public Question
{
public:
    void Result() override
    {
        vector<int> truck { 2, 7, 4, 9};//무게제한 트럭
        vector<int> w { 7, 6, 8}; //짐
        vector<int> answer; //몇번째 트럭에 들어가는지 기록

        vector<int> addWegihtTruck(truck.size() + 1, 0);
        vector<int> loadFirtstInsertTruck(w.size(), -1);

        for(int i = 0; i < w.size(); i++){
            for(int truckNum = 0; truckNum < truck.size(); truckNum++) {
                if(w[i] + addWegihtTruck[truckNum + 1] <= truck[truckNum]){
                    addWegihtTruck[truckNum + 1] += w[i];   //add;
                    if(loadFirtstInsertTruck[i] == -1){
                        loadFirtstInsertTruck[i] = truckNum + 1;
                    }
                    break;
                }
            }
        }

        for(int i = 0; i < loadFirtstInsertTruck.size(); i++){
            cout << loadFirtstInsertTruck[i] << endl;

        }
        return;
    }
};