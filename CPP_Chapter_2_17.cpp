/*******************************************************
 * Stock Commission: Assignment                        *
 *                                                     *
 * Kathryn bought 750 shares of stock at $35.00/share. *
 * She must pay a 2% commission to her stockbroker.    *
 * This program calculates and displays:               *
 * 1. Stock cost (no commission)                       *
 * 2. Commission amount                                *
 * 3. Total amount paid (stock + commission)           *
 *******************************************************/

#include <iostream>
using namespace std;

int main()
{
    /*******************************************************
     * Define values for the stock purchase                *
     *******************************************************/
    double Shares = 750;             // Number of shares bought
    double costPerShare = 35.00;     // Price for each share
    double brokerCommission = 0.02;  // Broker's commission rate (2%)

    /*******************************************************
     * Perform calculations                                *
     *******************************************************/
    double totalStockCost = Shares * costPerShare;            // Stock price without commission
    double commissionFee = totalStockCost * brokerCommission; // Commission amount
    double finalAmountPaid = totalStockCost + commissionFee;  // Total amount including commission

    /*******************************************************
     * Display the results                                 *
     *******************************************************/
    cout << "Stock Purchase Summary:" << endl;
    cout << "Total stock cost: $" << totalStockCost << endl;
    cout << "Broker's commission: $" << commissionFee << endl;
    cout << "Total amount paid: $" << finalAmountPaid << endl;
    cout << "----------------------" << endl;
    cout << "Developed by: Nikita Baiborodov" << endl;

    return 0; // Program ends here
}
