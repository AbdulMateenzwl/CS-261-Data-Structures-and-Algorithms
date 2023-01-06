#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
bool is_postive(int num)
{
    return num>=0;
}
bool is_negetive(int num)
{
    return num<0;
}
stack<int> asteroidCollision(vector<int>& asteroids) {
    stack<int> s;
    for(int i =0;i<asteroids.size();i++)
    {
        if((is_postive(s.top()) && is_negetive(asteroids[i])) || (is_negetive(s.top()) && is_postive(asteroids[i])))
        {
            if(abs(s.top()) != abs(asteroids[i]) )
            {
                s.pop();
                s.push(asteroids[i]);
            }
            else if(abs(s.top()) == abs(asteroids[i]))
            {
                s.pop();
            }
        }
        else
        {
            s.push(asteroids[i]);
        }
    }
    return s;
}

main()
{
    vector<int> s;
    s.push_back(2);
    s.push_back(-4);
    s.push_back(6);
    s.push_back(-9);
    stack<int> e;
    e= asteroidCollision(s);
    for(int i=0;i<e.size();i++)
    {
        cout<<s[i]<<endl;
    }
}