#include<iostream>
using namespace std;

int main()
{
    int categ;
    cout << "Choose the category of an item from list your want to buy\n"
         << "1. Electronics\n"
         << "2. Clothing\n"
         << "3. Groceries\n";
    cin >> categ;
    
    switch(categ)
    {
        case 1: // Electronics
        {
            int ele, qun;
            cout << "Select the item from electronics\n"
                 << "1. Laptop ($1000)\n"
                 << "2. Smartphone ($700)\n"
                 << "3. Headphones ($150)\n";
            cin >> ele;
            cout << "Enter the quantity of item: ";
            cin >> qun;
            
            switch(ele)
            {
                case 1: // Laptop
                {
                    double price = qun * 1000.0;
                    double discount = price * 0.2; // 20% discount
                    double finalPrice = price - discount;
                    cout << "Final price with discount = $" << finalPrice;
                    break;
                }
                case 2: // Smartphone
                {
                    double price = qun * 700.0;
                    double discount = price * 0.2; // 20% discount
                    double finalPrice = price - discount;
                    cout << "Final price with discount = $" << finalPrice;
                    break;
                }
                case 3: // Headphones
                {
                    double price = qun * 150.0;
                    double discount;
                    if(price >= 100 && price <= 500)
                        discount = price * 0.1; // 10% discount
                    else
                        discount = price * 0.2; // 20% discount
                    double finalPrice = price - discount;
                    cout << "Final price with discount = $" << finalPrice;
                    break;
                }
                default:
                    cout << "Invalid electronics item selection!";
            }
            break;
        }
        
        case 2: // Clothing
        {
            int clo, qun;
            cout << "Select the item from clothing\n"
                 << "1. Jacket ($120)\n"
                 << "2. T-shirt ($40)\n"
                 << "3. Jeans ($60)\n";
            cin >> clo;
            cout << "Enter the quantity: ";
            cin >> qun;
            
            switch(clo)
            {
                case 1: // Jacket
                {
                    double price = qun * 120.0;
                    double discount;
                    if(price > 100 && price <= 500)
                        discount = price * 0.1;
                    else if(price > 500)
                        discount = price * 0.2;
                    else
                        discount = 0;
                    double finalPrice = price - discount;
                    cout << "Final price with discount = $" << finalPrice;
                    break;
                }
                case 2: // T-shirt
                {
                    double price = qun * 40.0;
                    double discount;
                    if(price >= 100 && price <= 500)
                        discount = price * 0.1;
                    else if(price > 500)
                        discount = price * 0.2;
                    else
                        discount = 0;
                    double finalPrice = price - discount;
                    if(discount == 0)
                        cout << "No discount. Final price = $" << finalPrice;
                    else
                        cout << "Final price with discount = $" << finalPrice;
                    break;
                }
                case 3: // Jeans
                {
                    double price = qun * 60.0;
                    double discount;
                    if(price >= 100 && price <= 500)
                        discount = price * 0.1;
                    else if(price > 500)
                        discount = price * 0.2;
                    else
                        discount = 0;
                    double finalPrice = price - discount;
                    if(discount == 0)
                        cout << "No discount. Final price = $" << finalPrice;
                    else
                        cout << "Final price with discount = $" << finalPrice;
                    break;
                }
                default:
                    cout << "Invalid clothing item selection!";
            }
            break;
        }
        
        case 3: // Groceries
        {
            int gro, qun;
            cout << "Select item from Groceries\n"
                 << "1. Milk (1 Liter-$2)\n"
                 << "2. Bread (1 loaf-$3)\n"
                 << "3. Eggs (1 Dozen-$5)\n";
            cin >> gro;
            cout << "Enter the quantity: ";
            cin >> qun;
            
            switch(gro)
            {
                case 1: // Milk
                {
                    double price = qun * 2.0;
                    double discount;
                    if(price >= 100 && price <= 500)
                        discount = price * 0.1;
                    else if(price > 500)
                        discount = price * 0.2;
                    else
                        discount = 0;
                    double finalPrice = price - discount;
                    if(discount == 0)
                        cout << "No discount. Final price = $" << finalPrice;
                    else
                        cout << "Final price with discount = $" << finalPrice;
                    break;
                }
                case 2: // Bread
                {
                    double price = qun * 3.0;
                    double discount;
                    if(price >= 100 && price <= 500)
                        discount = price * 0.1;
                    else if(price > 500)
                        discount = price * 0.2;
                    else
                        discount = 0;
                    double finalPrice = price - discount;
                    if(discount == 0)
                        cout << "No discount. Final price = $" << finalPrice;
                    else
                        cout << "Final price with discount = $" << finalPrice;
                    break;
                }
                case 3: // Eggs
                {
                    double price = qun * 5.0;
                    double discount;
                    if(price >= 100 && price <= 500)
                        discount = price * 0.1;
                    else if(price > 500)
                        discount = price * 0.2;
                    else
                        discount = 0;
                    double finalPrice = price - discount;
                    if(discount == 0)
                        cout << "No discount. Final price = $" << finalPrice;
                    else
                        cout << "Final price with discount = $" << finalPrice;
                    break;
                }
                default:
                    cout << "Invalid grocery item selection!";
            }
            break;
        }
        
        default:
            cout << "Invalid category selection!";
    }
    
    return 0;
}
