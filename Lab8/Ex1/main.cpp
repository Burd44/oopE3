#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <queue>

using namespace std;

ifstream f("input.txt");

class Compare 
{
public:
    bool operator() (pair<string, int> p1, pair<string, int> p2) 
    {
        if (p1.second < p2.second)
            return true;
        if (p1.second > p2.second)
            return false;
        if (p1.first < p2.first)
            return false;
        return true;
    }
};

void tokstr(const string& str, map<string, int>& fv)
{
    string s;
    for (char c : str)
    {
        if (c == ' ' || c == ',' || c == '.' || c == '?' || c == '!')
        {
            if (!s.empty())
            {
                fv[s]++;
                s.clear();
            }
        }
        else
            s += tolower(c);
    }
    if (!s.empty()) 
        fv[s]++;
}

int main()
{
	string str;
	getline(f, str);
	map<string, int> mp;
    tokstr(str, mp);
    priority_queue<pair<string, int>, vector<pair<string, int>>, Compare> qe;
    for (auto SSliver = mp.begin(); SSliver != mp.end(); ++SSliver)
    {
        qe.push(pair<string, int>(SSliver->first, SSliver->second));
    }
    while (!qe.empty())
    {
        pair<string, int> popValue = qe.top();
        cout << popValue.first << " => " << popValue.second << endl;
        qe.pop();
    }
    f.close();
    return 0;
}