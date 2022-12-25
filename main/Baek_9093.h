//
// Created by Programmer on 2022/12/25.
//

#include "Common.h"
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>

class Baek_9093 : public Question
{
public:
    void Result() override
    {
        ios_base :: sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int count = 0;
        cin >> count;
        cin.ignore();

        string input;
        for(int i = 0; i < count ; ++i){
            getline(cin, input);

            istringstream iss(input);
            string buffer;

            vector<string> result;
            while(getline(iss, buffer, ' '))
                result.push_back(buffer);

            for(string result : result){
                reverse(result.begin(), result.end());
                cout << result << " ";
            }
            cout << '\n';
        }
    }
};