#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item total; // variable to hold data for the next transaction
    // read the first transaction and ensure there are data to process
    if (std::cin >> total) {
        Sales_item trans; // variable to hold the running sum
        // read and process the remaining transactions
        while (std::cin >> trans) {
            // if were still processing the same book
            if (total.isbn() == trans.isbn()){
                total += trans; // update running total
            } else {
                //print results for previous book
                std::cout << total << std::endl;
                total = trans; // total now refers to next book
            }
        }
        std::cout << total << std::endl; // print last transaction
    } else {
        // no input warn user
        std::cerr << "No data?!" << std::endl;
        return -1; // indicate failure
    }
    return 0; // indicate success
}
