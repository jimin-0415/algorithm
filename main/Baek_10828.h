//
// Created by Programmer on 2022/12/25.
//
#include "Common.h"
#include <stack>

class Baek_10828 : public Question
{
public:
    void Result() override
    {
        ios_base :: sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int count = 0;
        cin >> count;

        string input;
        stack<int> container;
        int value = 0;
        for(int i = 0; i < count; i++){
            cin >> input;
            if(input == "push"){
                cin >> value;
                container.push(value);
            }
            else if (input == "pop"){
                if(container.empty())
                    cout << -1 << endl;
                else{
                    cout << container.top() << endl;
                    container.pop();
                }
            }
            else if (input == "size"){
                if(container.empty())
                    cout << 0 << endl;
                else
                    cout << container.size() << endl;
            }
            else if(input == "empty"){
                if(container.empty())
                    cout << 1 << endl;
                else
                    cout << 0 << endl;
            }
            else if(input == "top"){
                if(container.empty())
                    cout << -1 << endl;
                else
                    cout << container.top() << endl;
            }
        }
    }
};
