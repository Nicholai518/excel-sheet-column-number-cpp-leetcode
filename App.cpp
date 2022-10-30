#include <iostream>
#include <string>
using namespace std;

class Solution 
{
public:
    int titleToNumber(string columnTitle) 
    {
        // number to be returned
        int number = 0;

        // iterate through column title
        for (char c : columnTitle)
        {
            int digit = c - 'A' + 1;

            // multiple by 26 because base 26 (each letter of alphabet)
            number = number * 26 + digit;
        }
        return number;
    }
};

int main()
{
    Solution solution;
    string example_one = "BCD";
    cout << "Example One : " << solution.titleToNumber(example_one) << endl;
	return 0;
}
