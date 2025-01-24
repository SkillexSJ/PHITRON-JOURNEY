class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> s1;
        // age first bracket nibo
        for (char ch : s)
        {

            if (ch == '(' || ch == '{' || ch == '[')
            {
                s1.push(ch);
            }

            else
            {

                if (s1.empty())
                {
                    return false;
                }

                else
                {

                    if (ch == ')' && s1.top() == '(')
                    {
                        s1.pop();
                    }
                    else if (ch == '}' && s1.top() == '{')
                    {
                        s1.pop();
                    }
                    else if (ch == ']' && s1.top() == '[')
                    {
                        s1.pop();
                    }
                    else
                        return false;
                }
            }
        }

        if (s1.empty())
        {

            return true;
        }

        else
            return false;
    }
};