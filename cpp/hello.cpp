// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     string num;
//     int lenum;

//     cin >> num >> lenum;
//     int n=num.size();

//     if (lenum > 0 and lenum<=n)
//     {
//         for (int i = 0; i < lenum; i++)
//         {
//             num.erase(min_element(num.begin(), num.end()));
//         }
//     }

//     int result = stoi(num);

//     cout << result << endl;

//     return 0;
// }

#include <iostream>
#include <string>
#include <algorithm>

void remove_smallest(std::string &num, int lenum)
{
    if (lenum == 0 || num.empty())
    {
        return;
    }

    auto smallest = std::min_element(num.begin(), num.end());
    num.erase(smallest);

    remove_smallest(num, lenum - 1);
}

int main()
{
    std::string num;
    int lenum;
    int n = num.size();

    std::cin >> num >> lenum;

    if (lenum > 0 and lenum < n)
    {
        remove_smallest(num, lenum);

        if (num.empty())
        {
            std::cout << "0\n";
        }
        else
        {
            std::cout << std::stoi(num) << "\n";
        }
    }

    return 0;
}