
// 844. Backspace String Compare
//     Easy 6.5K 297 Companies
//         Given two strings s and t,
//     return true if they are equal when both are typed into empty text editors.'#' means a backspace character.

//     Note that after backspacing an empty text,
//     the text will continue empty.

//     Example 1 :

//     Input : s = "ab#c",
//             t = "ad#c" Output : true Explanation : Both s and t become "ac".Example 2 :

//     Input : s = "ab##",
//             t = "c#d#" Output : true Explanation : Both s and t become "".Example 3 :

//     Input : s = "a#c",
//             t = "b" Output : false Explanation : s becomes "c" while t becomes "b".

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> st1;
        stack<char> st2;

        for (char c : s)
        {
            if (c == '#')
            {
                if (!st1.empty())
                    st1.pop();
            }
            else
                st1.push(c);
        }
        for (char c : t)
        {
            if (c == '#')
            {
                if (!st2.empty())
                    st2.pop();
            }
            else
                st2.push(c);
        }

        return st1 == st2;
    }
};

int main()
{
    return 0;
}