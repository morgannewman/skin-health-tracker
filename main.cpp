//The purpose of this function is to collect data on my skincare routine over time

#include <iostream>
#include "csvfile.h"
using namespace std;

int main() {
    try
    {
        csvfile csv("MyTable.csv"); // throws exceptions!
        // Header
        csv << "X" << "VALUE" << endrow;
        // Data
        int i = 1;
        csv << i++ << "String value" << endrow;
        csv << i++ << 123 << endrow;
        csv << i++ << 1.f << endrow;
        csv << i++ << 1.2 << endrow;
        csv << i++ << "One more string" << endrow;
        csv << i++ << "\"Escaped\"" << endrow;
        csv << i++ << "=sum(5,3,5)" << endrow;
    }
    catch (const std::exception &ex)
    {
        std::cout << "Exception was thrown: " << ex.what() << std::endl;
    }
    return 0;
}