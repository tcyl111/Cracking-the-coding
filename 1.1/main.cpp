//
//  main.cpp
//  test in c++
//
//  Created by JOE on 4/18/16.
//  Copyright (c) 2016 Joe. All rights reserved.
//

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isUniqueChars_1(string str) {
        unordered_map<char, int> charMap;
        for (int i=0; i< str.size(); i++) {
            if (charMap.count(str[i])!=0) return false;
            else charMap[str[i]] =1;
        }
        return true;
    }
/* biggest diff is less than size of data type, such as int(32) for all lower case letters long(64) can include upper case*/
    bool isUniqueChars_2(string str) {
        int check = 0;
        int len = str.length();
        for(int i=0; i<len; ++i)
        {
            int v = (int)(str[i]-'a');
            if(check & (1<<v)) return false;
            check |= (1<<v);
        }
        return true;
    }
};


int main(int argc, const char * argv[])
{

    // insert code here...
    Solution sol;
    string str("adfgreqnsas");
    cout << sol.isUniqueChars_1(str) << endl;
    cout << sol.isUniqueChars_2(str) << endl;
    return 0;
}

