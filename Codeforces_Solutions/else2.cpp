#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main()
{
    std::string input = "Price: 40,499/-";
    getline(cin, input); // tashin
    cout << (input) << endl;


    // regex numberRegex("(\\d{1,3}(,\\d{3})*)");
    // std::smatch match;

    // if (std::regex_search(input, match, numberRegex))
    // {
    //     std::cout << "Matched number: " << match.str(1) << std::endl;
    // }
    // else
    // {
    //     std::cout << "No match found!" << std::endl;
    // }

    {
        // Refined regex to match numbers with commas (e.g., 28,499)
        std::regex numberRegex("Tk\\.(\\d{1,3}(,\\d{3})*)");
        std::smatch match;

        // Search for the price in the input
        if (std::regex_search(input, match, numberRegex))
        {
            std::cout << "Matched number: " << match.str(1) << std::endl;

            // Remove commas and convert to integer
            std::string numberStr = match.str(1);
            numberStr.erase(remove(numberStr.begin(), numberStr.end(), ','), numberStr.end());
            int number = stoi(numberStr);

            std::cout << "Converted number: " << number << std::endl;
        }
        else
        {
            std::cout << "No match found!" << std::endl;
        }
    }

    return 0;
}
