#include <bits/stdc++.h>
using namespace std;

string getFinalColor(stack<char> s)
{
    string colorString = "";
    while (!s.empty())
    {
        colorString = s.top() + colorString;
        s.pop();
    }
    return colorString;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        stack<char> colorBox;
        int stringLength;
        cin >> stringLength;
        string colors;
        cin >> colors;

        for (char c : colors)
        {
            if (colorBox.empty())
            {
                colorBox.push(c);
            }
            else if ((c == 'G' && colorBox.top() == 'R') || (c == 'R' && colorBox.top() == 'G'))
            {
                colorBox.pop();
                if (!colorBox.empty())
                {
                    if (colorBox.top() != 'Y')
                    {
                        colorBox.push('Y');
                    }
                    else
                    {
                        colorBox.pop();
                    }
                }
                else
                {
                    colorBox.push('Y');
                }
            }
            else if ((c == 'R' && colorBox.top() == 'B') || (c == 'B' && colorBox.top() == 'R'))
            {
                colorBox.pop();
                if (!colorBox.empty())
                {
                    if (colorBox.top() != 'P')
                    {
                        colorBox.push('P');
                    }
                    else
                    {
                        colorBox.pop();
                    }
                }
                else
                {
                    colorBox.push('P');
                }
            }
            else if ((c == 'B' && colorBox.top() == 'G') || (c == 'G' && colorBox.top() == 'B'))
            {
                colorBox.pop();
                if (!colorBox.empty())
                {
                    if (colorBox.top() != 'C')
                    {
                        colorBox.push('C');
                    }
                    else
                    {
                        colorBox.pop();
                    }
                }
                else
                {
                    colorBox.push('C');
                }
            }
            else if (c == colorBox.top())
            {
                colorBox.pop();
            }
            else
            {
                colorBox.push(c);
            }
        }
        // cout << colorBox.empty();
        string result = getFinalColor(colorBox);
        cout << result << endl;
    }
    return 0;
}