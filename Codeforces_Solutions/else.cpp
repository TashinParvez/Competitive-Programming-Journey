
//        ****************  Author :  Tashin.Parvez  ****************
//        ************* United International University *************

#include <bits/stdc++.h>
#define CRACKED return 0;
#define nl endl
#define setDec(x) fixed << setprecision(x)
#define tashin cout << "____Tashin____" << nl;
#define deb(n) cout << "Tashin   " << #n << " = " << n << endl;
#define debt cout << "Tashin   " << endl;
using namespace std;

template <typename T>
int len(const T &x) { return x.size(); }
//--------------------------------------------------------------------------------------------------

int convertToNumber(const std::string &numberStr)
{
    string cleanedStr;
    for (char c : numberStr)
    {
        if (isdigit(c))
        {
            cleanedStr += c;
        }
    }
    return stoi(cleanedStr);
}

int main()
{
    vector<pair<string, int>> validEntries;

    string input;

    while (true)
    {
        getline(cin, input); // tashin

        if (input == "exit")
        {
            break;
        }

        // Find "/-" in the input string
        size_t slashDashPos = input.find("/-");

        if (slashDashPos != string::npos)
        {
            // Extract substring before "/-"
            string beforeSlashDash = input.substr(0, slashDashPos);

            // Find the last number-like sequence before "/-"
            regex numberRegex("(\\d{1,3}(,\\d{3})*)$");
            // regex numberRegex("(\\d{1,3}(,\\d{3})*)");

            smatch match;

            if (regex_search(beforeSlashDash, match, numberRegex))
            {
                string numberStr = match.str(1);

                // cout << numberStr << nl;

                int number = convertToNumber(numberStr);

                // Check if the number is in the specified range
                int inputRangeBellow = 27000, inputRangeUP = 40000;
                if (number >= inputRangeBellow && number <= inputRangeUP)
                {
                    validEntries.emplace_back(input, number);
                }
            }
        }
    }

    // Output the valid entries
    for (const auto &entry : validEntries)
    {
        cout << entry.first << ", Price: " << entry.second << endl;
    }

    return 0;
}