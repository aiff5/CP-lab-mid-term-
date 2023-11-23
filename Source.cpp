#include<iostream>
using namespace std;
int main()
{
	int initialquantity;
	int quantitysold;
	int restockinterval = 5;
	int restockquantity;
	int threshold = 10;
	int salescount = 0;
	cout << " Enter the initial quantity of the product in stock:";
	cin >> initialquantity;
	while (true)
	{
		cout << " Enter the quantity sold: ";
		cin >> quantitysold;
		if (quantitysold < 0)
		{
			cout << " Quantity sold cannot be negative.Enter valis number" << endl;
			continue;

		}
		if (quantitysold > initialquantity)
		{
			cout << " Not enough stock" << endl;
			continue;

		}
		initialquantity -= quantitysold;
		cout << " Remaining stock after sale: " << initialquantity << endl;
		salescount++;
		if (salescount % restockinterval == 0)
		{
			cout << " Restock .Enter the quantity to restock";
			cin >> restockquantity;
			if (restockquantity < 0)
			{
				cout << " restock quantity cannot be negative" << endl;
				continue;

			}
			initialquantity += restockquantity;
			cout << " Stock after restockin:" << initialquantity << endl;

		}
		if (initialquantity < threshold)
		{
			cout << " Stock is below the threshold" << endl;
			break;
		}
	}


	return 0;
}