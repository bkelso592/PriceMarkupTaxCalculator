#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declare variables
    double originalPrice, markupPercentage, salesTaxRate;

    // Prompt for input
    cout << "Enter the original price of the item: $";
    cin >> originalPrice;
    cout << "Enter the markup percentage (For example, 60 for 60%): ";
    cin >> markupPercentage;
    cout << "Enter the sales tax rate (For example, 5.25 for 5.25%): ";
    cin >> salesTaxRate;

    // Calculate selling price and sales tax amount
    double sellingPrice = originalPrice * (1 + markupPercentage / 100);
    double salesTax = sellingPrice * (salesTaxRate / 100);
    double finalPrice = sellingPrice + salesTax;

    // Output results
    cout << fixed << setprecision(2);
    cout << "Original price of the item: $" << originalPrice << endl;
    cout << "Markup percentage: " << markupPercentage << "%" << endl;
    cout << "Amount of sales tax: $" << salesTax << endl;
    cout << "Final price of the item with tax: $" << finalPrice << endl;

    return 0;
}
