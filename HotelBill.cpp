#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
    string customerName;
    long long contact;
    int tableNo, n;

    cout << "Enter Table Number: ";
    cin >> tableNo;

    cin.ignore();
    cout << "Enter Customer Name: ";
    getline(cin, customerName);

    cout << "Enter Customer Contact: ";
    cin >> contact;

    cout << "\nEnter number of items: ";
    cin >> n;
    cin.ignore();

    vector<string> item(n);
    vector<int> qty(n);
    vector<double> price(n), total(n);

    double grandTotal = 0;

    for(int i = 0; i < n; i++)
    {
        cout << "\nItem " << i + 1 << " name: ";
        getline(cin, item[i]);

        cout << "Quantity: ";
        cin >> qty[i];

        cout << "Price: ";
        cin >> price[i];
        cin.ignore();

        total[i] = qty[i] * price[i];
        grandTotal += total[i];
    }

    double discount = 0;

    if (grandTotal > 5000)
    {
        discount = grandTotal * 0.20;
    }
    else if (grandTotal > 3000)
    {
        discount = grandTotal * 0.10;
    }
    else if (grandTotal > 1000)
    {
        discount = grandTotal * 0.05;
    }
    double finalAmount = grandTotal - discount;

    // Bill Output
    cout << fixed << setprecision(2);
    cout << "\n------------ MIT ADT Hotel Bill --------------\n";
    cout << "Table No.: " << tableNo << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Customer Contact: " << contact << endl;
    cout << "-----------------------------------------------\n";

    cout << left << setw(20) << "Item"
         << setw(8) << "Qty"
         << setw(10) << "Price"
         << setw(10) << "Total" << endl;

    cout << "-----------------------------------------------\n";

    for(int i = 0; i < n; i++)
    {
        cout << left << setw(20) << item[i]
             << setw(8) << qty[i]
             << setw(10) << price[i]
             << setw(10) << total[i] << endl;
    }

    cout << "-----------------------------------------------\n";
    cout << "Total Amount : " << grandTotal << endl;
    cout << "Discount     : -" << discount << endl;
    cout << "Final Amount : " << finalAmount << endl;
    cout << "-----------------------------------------------\n";

    return 0;
}
