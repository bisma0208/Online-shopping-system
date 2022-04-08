#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include <Windows.h>
#include <time.h>
using namespace std;
// class prototype declaration
class ACCOUNT;
class SIGNUP;
class LOGIN;
class Date;
class PRODUCTS;
class CART;
class PAYMENT;
class CUSTOMER;
class ORDER_STATUS;
class ADMIN;
class HOME_PAGE;
int main();
//global variable declaration/initialization
int cartcounter = 0, counter, choice = 0;
class ACCOUNT
{
private:
	// private data members of class
	string name;
	int id;
	string password;
	string address;
public:
	//default/ parameterized constructor
	ACCOUNT(string name = " ", int id = 0, string password = " ", string address = " ")
	{
		this->name = name;
		this->id = id;
		this->password = password;
		this->address = address;
	}
	//set functions
	void setNAME(string n)
	{
		this->name = n;
	}
	void setID(int id)
	{
		this->id = id;
	}
	void setPass(string p)
	{
		this->password = p;
	}
	void setAddress(string a)
	{
		this->address = a;
	}
	//get functions
	string getNAME()
	{
		return name;
	}
	int getID()
	{
		return id;
	}
	string getPass()
	{
		return password;
	}
	string getAddress()
	{
		return address;
	}
};
//-------------------------------------------------------------------------------------------------------------------------
class LOGIN
{
private:
	// private data members of class
	string name;
	string password;
public:
	//default/ parameterized constructor
	LOGIN(string name = " ", string password = " ", string email = " ")
	{
		this->name = name;
		this->password = password;
	}
	//set functions
	void setName(string name)
	{
		this->name = name;
	}
	void setPass(string pass)
	{
		this->password = pass;
	}
	//get functions
	string getName()
	{
		return name;
	}
	string getPass()
	{
		return password;
	}
	//input function
	void input()
	{
		system("cls");
		Sleep(250);
		cout << "\t\t\t\t\t\t\t" << setw(12) << setfill(' ') << "\n";
		Sleep(250);
		cout << "\t\t\t\t\t\t\t" << setw(14) << setfill('*') << "\n";
		Sleep(250);
		cout << "\t\t\t\t\t\t\t*" << setw(13) << setfill(' ') << "*\n";
		Sleep(250);
		cout << "\t\t\t\t\t\t\t* LOGIN *" << endl;
		Sleep(250);
		cout << "\t\t\t\t\t\t\t*" << setw(13) << setfill(' ') << "*\n";
		Sleep(250);
		cout << "\t\t\t\t\t\t\t" << setw(15) << setfill('*') << "\n\n";
		Sleep(250);
		cout << "\nEnter your username: ";
		cin.ignore();
		getline(cin, name);
		setName(name);
		cout << "Enter password: ";
		cin >> password;
		setPass(password);
	}
};
//-------------------------------------------------------------------------------------------------------------------------
class SIGNUP
{
private:
	// private data members of class
	LOGIN log;
	string name;
	string password;
public:
	//default constructor
	SIGNUP() {}
	// parameterized constructor
	SIGNUP(LOGIN l)
	{
		this->log = l;
	}
	//set functions
	void setName(string name)
	{
		this->name = name;
	}
	void setPass(string pass)
	{
		this->password = pass;
	}
	//get functions
	string getName()
	{
		return name;
	}
	string getPass()
	{
		return password;
	}
	//input function
	bool input()
	{
		system("cls");
		Sleep(350);
		cout << "\t\t\t\t\t\t\t" << setw(12) << setfill(' ') << "\n";
		Sleep(350);
		cout << "\t\t\t\t\t\t\t" << setw(14) << setfill('*') << "\n";
		Sleep(350);
		cout << "\t\t\t\t\t\t\t*" << setw(13) << setfill(' ') << "*\n";
		Sleep(350);
		cout << "\t\t\t\t\t\t\t* SIGN UP *" << endl;
		Sleep(350);
		cout << "\t\t\t\t\t\t\t*" << setw(13) << setfill(' ') << "*\n";
		Sleep(350);
		cout << "\t\t\t\t\t\t\t" << setw(16) << setfill('*') << "\n\n\n";
		Sleep(350);
		cout << "\t\t\t\t\t\t" << setw(29) << setfill('_') << "\n" << endl;
		Sleep(350);
		cout << "\t\t\t\t\t\t PLEASE ENTER DETAILS \n";
		Sleep(350);
		cout << "\t\t\t\t\t\t" << setw(30) << setfill('_') << "\n\n" << endl;
		Sleep(350);
		cout << "\tUsername: ";
		cin.ignore();
		getline(cin, name);
		setName(name);
		cout << "\tPassword: ";
		cin >> password;
		setPass(password);
		Sleep(1000);
		cout << "\n\tSigned-up successfully\n\tPlease Login!";
		Sleep(1500);
		log.input();
		//checking to see if sign in information matches the log in information for admin
		having default details
			if (name == log.getName() && password == log.getPass())
			{
				cout << "\nYou have logined successfully!\n" << endl;
				Sleep(3500);
				return true;
			}
			else
			{
				cout << "\n\nLogin failed, kindly retry.\n";
				Sleep(3500);
				return false;
			}
	}
	// to view customer account details
	void viewcustomers()
	{
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		cout << endl;
		cout << "NAME: " << getName() << endl;
		cout << "PASSWORD: " << getPass() << endl;
		system("PAUSE");
	}
};
//-------------------------------------------------------------------------------------------------------------------------
class Date
{
private:
	// private data member of class
	int day;
	int month;
	int year;
public:
	// default/parameterized constructor
	Date(int day = 1, int month = 1, int year = 2021)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
	//set functions
	void setDay(int day)
	{
		this->day = day;
	}
	void setMonth(int month)
	{
		this->month = month;
	}
	void setYear(int year)
	{
		this->year = year;
	}
	//get functions
	int getDay()
	{
		return day;
	}
	int getMonth()
	{
		return month;
	}
	int getYear()
	{
		return year;
	}
	void getDatee()
	{
		cout << day << "-" << month << "-" << year;
	}
	//input date function
	void input()
	{
		cout << " DAY: ";
		cin >> day;
		cout << " MONTH: ";
		cin >> month;
		cout << " YEAR: ";
		cin >> year;
	}
	//print date function
	void printDate()
	{
		cout << "DATE: " << day << "-" << month << "-" << year << endl;
	}
};
//-------------------------------------------------------------------------------------------------------------------------
class PRODUCTS
{
private:
	// private data members of class
	int id;
	string name;
	string category;
	float price;
	Date deadline; // object of date (composition)
public:
	// friend class
	// permission granted to class CUSTOMER to access private data member of class
	PRODUCTS
		friend CUSTOMER;
	//default/parameterized constructor
	PRODUCTS(int id = 0, string name = " ", string category = " ", float = 0)
	{
		this->id = id;
		this->name = name;
		this->category = category;
		this->price = price;
	}
	//set functions
	void setproductName(string n)
	{
		name = n;
	}
	void setID(int ids)
	{
		id = ids;
	}
	void setCategory(string c)
	{
		category = c;
	}
	void setPrice(int p)
	{
		price = p;
	}
	//input functions
	void productName()
	{
		cout << "NAME:";
		cin >> name;
	}
	void ID()
	{
		cout << "ID:";
		cin >> id;
	}
	void Category()
	{
		cout << "CATEGORY:";
		cin >> category;
	}
	void deadlinee()
	{
		cout << "ENTER DATE OF EXPIRY:" << endl;
		deadline.input();
	}
	//get functions
	void getdeadlinee()
	{
		cout << "DATE OF EXPIRY: " << endl;
		deadline.printDate();
	}
	void getDate()
	{
		deadline.getDatee();
	}
	void Price()
	{
		cout << "PRICE:";
		cin >> price;
	}
	string getproductName()
	{
		return name;
	}
	int getid()
	{
		return id;
	}
	string getCategory()
	{
		return category;
	}
	float getprice()
	{
		return price;
	}
};
//-------------------------------------------------------------------------------------------------------------------------
class CART
{
private:
	//private data members of class
	float totalprice = 0;
	PRODUCTS carts[100]; // declared array to store product details
public:
	//default constructor
	CART() {}
	//parameterized constructor
	CART(float totalprice)
	{
		this->totalprice = totalprice;
		for (int i = 0; i < cartcounter; i++)
		{
			carts[i] = carts[i]; //initialize each array element
		}
	}
	//total product in cart
	void noOfProducts(PRODUCTS carts[100])
	{
		cout << "\nTOTAL NUMBER OF PRODUCT IN YOUR CART ARE: " << cartcounter <<
			endl;;
	}
	//displaying cart
	void productandPrice(PRODUCTS carts[100])
	{
		system("color 6");
		cout << endl;
		Sleep(50); //suspends execution until the number of realtime seconds specified by
		the argument seconds are completed
			cout << "\t------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "-------";
		cout << endl;
		cout << "\t| CATEGORY |" << "\t" << "ID" << " | " << "PRODUCTNAME |" << "
			PRICE | " << endl;
			for (int i = 0; i < cartcounter; i++)
			{
				Sleep(50);
				cout << "\t------";
				Sleep(50);
				cout << "------";
				Sleep(50);
				cout << "------";
				Sleep(50);
				cout << "------";
				Sleep(50);
				cout << "------";
				Sleep(50);
				cout << "------";
				Sleep(50);
				cout << "------";
				Sleep(50);
				cout << "-------";
				cout << endl;
				cout << "\t| Product " << i + 1 << " |" << setw(7) << setfill(' ') << "|" <<
					setw(16) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|" << endl;
				cout << "\t| " << carts[i].getCategory() << "\t" << " | " << carts[i].getid()
					<< " |\t " << carts[i].getproductName() << "\t | " << carts[i].getprice() << " | " << endl;
				totalprice += carts[i].getprice();
			}
		Sleep(50);
		cout << "\t------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "-------";
		cout << endl;
	}
	//total bill price for customer
	void totalPrice(PRODUCTS carts[100])
	{
		cout << "---------------------------" << endl;
		cout << "TOTAL BILLING PRICE IS: Rs." << totalprice << endl;
	}
};
//-------------------------------------------------------------------------------------------------------------------------
class PAYMENT
{
private:
	//private data member of class
	long int cardnum;
	int id;
	int orderno;
	int confirm = 0;
	string cardtype;
	string paymenttype;
	string shipaddress;
public:
	//default/parameterized constructor
	PAYMENT(long int cardnum = 000, string cardtype = " ", string paymenttype = " ", int id =
		00, int orderno = 0)
	{
		this->cardnum = cardnum;
		this->cardtype = cardtype;
		this->paymenttype = paymenttype;
		this->id = id;
		this->orderno = orderno;
	}
	void info(SIGNUP S)
	{
		S.viewcustomers();
	}
	//input function
	void address()
	{
		cout << "ENTER YOUR ADDRESS: ";
		cin.ignore();
		getline(cin, shipaddress);
	}
	void card_no()
	{
		cout << "ENTER YOUR CARD NUMBER: ";
		cin >> cardnum;
	}
	void card_typpe()
	{
		cout << "ENTER YOUR CARD TYPE (CREDIT/DEBIT): ";
		cin >> cardtype;
	}
	void payment_type()
	{
		cout << "ENTER YOUR PAYMENT TYPE (COD / OBT): ";
		cin >> paymenttype;
	}
	void Id()
	{
		srand(time(0));
		id = rand() % 1000 + 100;
	}
	void order_no()
	{
		srand(time(0));
		orderno = rand() % 2001 + 1000;
	}
	void confirmation()
	{
		for (confirm = 0; confirm >= 0; confirm++)
		{
			cin.ignore();
			cout << "\n\t<PRESS 1> TO CONFIRM PAYMENT" << endl;
			cout << "\t<PRESS 2> IF YOU WANT TO CANCEL YOUR ORDER";
			cout << "\nCHOICE : ";
			cin >> confirm;
			if (confirm == 1)
			{
				break;
			}
			else if (confirm == 2)
			{
				cout << "YOUR ORDER HAS BEEN CANCELLED" << endl;
				Sleep(2500);
				exit(0);
			}
			else
			{
				cout << "ENTER A VALID CHOICE!" << endl;
				confirmation();
			}
		}
	}
	//get functions
	bool getcon()
	{
		if (confirm == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	string getaddress()
	{
		return shipaddress;
	}
	int getorder_no()
	{
		return orderno;
	}
	int getId()
	{
		return id;
	}
	string getpayment_type()
	{
		return paymenttype;
	}
	string getcard_typpe()
	{
		return cardtype;
	}
	long int getcard_no()
	{
		return cardnum;
	}
	//print function
	void print()
	{
		system("color 1"); //font colour change
		system("CLS"); //clear screen
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		cout << endl;
		cout << " PAYMENT DETAILS" << endl;
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		cout << endl;
		cout << " CUSTOMER SHIPPING ADDRESS: " << shipaddress << endl;
		cout << " CUSTOMER ID: " << id << endl;
		cout << " ORDER ID: " << orderno << endl;
		cout << " CARD NUMBER: " << cardnum << endl;
		cout << " CARD TYPE: " << cardtype << endl;
		cout << " PAYMENT TYPE: " << paymenttype << endl << endl;
		cout << " YOUR ORDER HAS BEEN CONFIRMED!" << endl;
		cout << " ------------------------------" << endl;
		cout << " THANKYOU FOR SHOPPING !" << endl;
		cout << " ------------------------------" << endl;
		system("PAUSE");
		system("CLS");
		cout << "re-directing you to homepage" << endl;
		main(); //calling main function
	}
};
//-------------------------------------------------------------------------------------------------------------------------
class CUSTOMER
{
private:
	//private data member of class
	string productchoice;
	//class object declaration (composition)
	PRODUCTS customer[100];
	CART addcart;
	PAYMENT PAY;
	SIGNUP sign;
	ACCOUNT admin;
	LOGIN log;
public:
	//default constructor
	CUSTOMER()
	{
		this->admin = admin;
		this->log = log;
		for (int i = 0; i < counter; i++)
		{
			customer[i] = customer[i];
		}
	}
	//parameterized constructor
	CUSTOMER(ACCOUNT a, LOGIN l)
	{
		this->admin = a;
		this->log = l;
	}
	//adding desired products to cart
	void addToCart(PRODUCTS ac[100], int count)
	{
		system("color 9");
		choice = 1;
		int i = 0; //customer cart counter
		while (choice == 1)
		{
			cout << "\nENTER THE PRODUCT NAME YOU WANT TO ADD TO YOUR CART
				: ";
				cin >> productchoice;
			for (int loop = 0; loop < count; loop++)
			{
				string s = ac[loop].getproductName();
				if (productchoice == s)
				{
					customer[i].setproductName(ac[loop].name);
					customer[i].setID(ac[loop].id);
					customer[i].setCategory(ac[loop].category);
					customer[i].setPrice(ac[loop].price);
					cartcounter++;
					i++;
					break;
				}
			}
			cout << "\n\t<PRESS 1> TO ADD MORE PRODUCTS TO YOUR CART" << endl;
			cout << "\t<PRESS 2> TO CHECKOUT" << endl;
			cout << "\t<PRESS 3> TO CANCEL ORDER" << endl;
			cout << "\nCHOICE: ";
			cin >> choice;
			if (choice == 1)
			{
				continue;
			}
			else if (choice == 2)
			{
				//cart details
				system("CLS");
				cout << "\n CART:";
				addcart.productandPrice(customer);
				addcart.noOfProducts(customer);
				addcart.totalPrice(customer);
				//payment details
				cout << "ENTER DETAILS:" << endl;
				PAY.address();
				PAY.card_no();
				PAY.card_typpe();
				PAY.payment_type();
				PAY.Id();
				PAY.order_no();
				PAY.confirmation();
				PAY.print();
				break;
			}
			else if (choice == 3)
			{
				cout << "ORDER CANCELLED" << endl;
				exit(0);
			}
			else
			{
				cout << "__" << endl;
				cout << "CHOICE: ";
				cin >> choice;
			}
		}
	}
	//formatting
	void format()
	{
		system("cls");
		Sleep(250);
		cout << "\t\t\t\t\t\t\t" << setw(15) << setfill(' ') << "\n";
		Sleep(250);
		cout << "\t\t\t\t\t\t\t" << setw(17) << setfill('*') << "\n";
		Sleep(250);
		cout << "\t\t\t\t\t\t\t*" << setw(16) << setfill(' ') << "*\n";
		Sleep(250);
		cout << "\t\t\t\t\t\t\t* CUSTOMER *" << endl;
		Sleep(250);
		cout << "\t\t\t\t\t\t\t*" << setw(16) << setfill(' ') << "*\n";
		Sleep(250);
		cout << "\t\t\t\t\t\t\t" << setw(19) << setfill('*') << "\n\n\n";
		Sleep(250);
	}
};
//-------------------------------------------------------------------------------------------------------------------------
class ORDER_STATUS
{
private:
	//private data member of class
	string deplocation;
	string dellocation;
	string route;
	//class object declaration (composition)
	Date dateofdelivery;
public:
	//default constructor
	ORDER_STATUS()
	{
		deplocation = "Islamabad";
		dellocation = " ";
		route = " ";
	}
	//parameterized constructor
	ORDER_STATUS(string deplocation, string dellocation, string route, Date dateofdelivery)
	{
		this->deplocation = deplocation;
		this->dellocation == dellocation;
		this->route = route;
		this->dateofdelivery = dateofdelivery;
	}
	//input function
	void deliveryLocation()
	{
		cout << "ENTER CUSTOMER DELIVERY LOCATION: ";
		cin >> dellocation;
	}
	void deliveryDate()
	{
		cout << "ENTER DELIVERY DATE: " << endl;
		dateofdelivery.input();
	}
	void ROUTE()
	{
		cout << "ENTER CITY ROUTE FROM IT WILL BE PASSED: ";
		cin >> route;
	}
	//get function
	void getdateofdelivery()
	{
		dateofdelivery.printDate();
	}
	string getdeplocation()
	{
		return deplocation;
	}
	string getdellocation()
	{
		return dellocation;
	}
	string getroute()
	{
		return route;
	}
	//print function
	void PRINT()
	{
		system("color 5");
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		cout << endl << endl << endl;
		cout << "DEPARTURE LOCATION: " << deplocation << endl;
		cout << "DELIVERY LOCATION: " << dellocation << endl;
		cout << "ROUTE: " << route << endl;
		cout << "DATE OF DELIVERY: " << endl;
		cout << " "; getdateofdelivery();
		cout << endl << endl;
		Sleep(2500);
	}
};
//-------------------------------------------------------------------------------------------------------------------------
class ADMIN
{
private:
	//private data member of class
	int counter = 0;
	string name;
	string password;
	string managechoice;
	//class object declaration (composition)
	PRODUCTS product[100];
	CUSTOMER Custom;
	LOGIN log;
public:
	//default constructor
	ADMIN()
	{
		name = "juliet";
		password = "juliet135";
		this->Custom = Custom;
		this->log = log;
	}
	//parameterized constructor
	ADMIN(string name, string password, PRODUCTS P[100], CUSTOMER C, LOGIN l)
	{
		this->name = name;
		this->password = password;
		for (int i = 0; i >= 0; i++)
		{
			this->product[i] = P[i];
		}
		this->Custom = C;
		this->log = l;
	}
	//get functions
	string getName()
	{
		return name;
	}
	string getPass()
	{
		return password;
	}
	//formatting
	void format()
	{
		Sleep(250);
		cout << "\t\t\t\t\t\t\t" << setw(12) << setfill(' ') << "\n";
		Sleep(250);
		cout << "\t\t\t\t\t\t\t" << setw(14) << setfill('*') << "\n";
		Sleep(250);
		cout << "\t\t\t\t\t\t\t*" << setw(13) << setfill(' ') << "*\n";
		Sleep(250);
		cout << "\t\t\t\t\t\t\t* ADMIN *" << endl;
		Sleep(250);
		cout << "\t\t\t\t\t\t\t*" << setw(13) << setfill(' ') << "*\n";
		Sleep(250);
		cout << "\t\t\t\t\t\t\t" << setw(15) << setfill('*') << "\n\n";
		Sleep(250);
	}
	//adding products and details by admin
	void addProducts()
	{
		system("CLS");
		system("color 2");
		int choice = 0;
		for (int loop = 0; loop >= 0; loop++)
		{
			Sleep(350);
			cout << "\n" << setw(24) << setfill('-') << "\n";
			Sleep(350);
			cout << " Enter product details \n";
			Sleep(350);
			cout << setw(24) << setfill('-') << "\n";
			Sleep(50);
			product[loop].ID();
			product[loop].Category();
			product[loop].productName();
			product[loop].Price();
			product[loop].deadlinee();
			counter++;
			cout << "\n\n\t <1> Add more products \n\n";
			Sleep(350);
			cout << "\t <2> To exit \n\n";
			Sleep(350);
			for (int loop = 0; loop >= 0; loop++)
			{
				cout << "choice: ";
				cin >> choice;
				cout << endl;
				if (choice == 1)
				{
					break;
				}
				else if (choice == 2)
				{
					system("CLS");
					break;
				}
				else
				{
					cout << "ENTER A VALID CHOICE" << endl;
				}
			}
			if (choice == 1)
			{
				continue;
			}
			else
			{
				break;
			}
		}
	}
	//viewing products and details
	void viewproducts(int c)
	{
		system("CLS");
		system("color 2");
		cout << endl;
		Sleep(50);
		cout << "\t------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "----";
		cout << endl;
		cout << "\t| CATEGORY |" << "\t" << "ID" << " | " << "PRODUCTNAME |" << "
			PRICE | " << " EXPIRY DATE | " << endl;
			for (int i = 0; i < counter; i++)
			{
				Sleep(50);
				cout << "\t------";
				Sleep(50);
				cout << "------";
				Sleep(50);
				cout << "------";
				Sleep(50);
				cout << "------";
				Sleep(50);
				cout << "------";
				Sleep(50);
				cout << "------";
				Sleep(50);
				cout << "------";
				Sleep(50);
				cout << "------";
				Sleep(50);
				cout << "------";
				Sleep(50);
				cout << "------";
				Sleep(50);
				cout << "----";
				cout << endl;
				cout << "\t| Product " << i + 1 << " |" << setw(7) << setfill(' ') << "|" <<
					setw(16) << setfill(' ') << "|" << setw(12) << setfill(' ') << "|" << setw(15) << setfill(' ') << "|" <<
					endl;
				cout << "\t| " << product[i].getCategory() << "\t" << " | " <<
					product[i].getid() << " |\t " << product[i].getproductName() << "\t | " << product[i].getprice()
					<< " | "; product[i].getDate(); cout << " |" << endl;
			}
		Sleep(50);
		cout << "\t------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "----\n";
		if (c == 1)
		{
			// for customer cart
			Custom.addToCart(product, counter);
		}
	}
	//incase admin wantes to modify name and price for a product
	void manageProducts()
	{
		system("color 2");
		cout << "\nENTER THE PRODUCT NAME YOU WANT TO MODIFY: " << endl;
		cout << "ENTER NULL IF NOT ANY: ";
		cin >> managechoice;
		for (int loop = 0; loop >= 0; loop++)
		{
			if (managechoice == product[loop].getproductName())
			{
				cout << "ENTER MODIFIED NAME AND PRICE: " << endl;
				product[loop].productName();
				product[loop].Price();
				system("CLS");
				//displaying the modified cart
				cout << "MODIFIED CART" << endl;
				viewproducts(choice);
				break;
			}
			if (managechoice == "null" || managechoice == "NULL")
			{
				break;
			}
		}
	}
	//delivery confirmation by admin
	void confirmDelivery(PAYMENT PAY)
	{
		system("color 5");
		Sleep(50);
		cout << "\n\n------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		cout << endl;
		if (PAY.getcon() == true)
		{
			cout << "DELIVERY ORDER CONFIRMED" << endl;
		}
	}
};
//-------------------------------------------------------------------------------------------------------------------------
class HOME_PAGE
{
private:
	//class object declaration (composition)
	ADMIN a;
	LOGIN log;
	SIGNUP sign;
	PAYMENT pay;
	ORDER_STATUS Order;
	CUSTOMER custom;
public:
	//default constructor
	HOME_PAGE() {}
	void display()
	{
		system("cls");
		cout << "\n";
		system("color 9");
		Sleep(150);
		cout << "\t\t\t\t\t\t" << setw(27) << setfill('*') << "\n";
		Sleep(150);
		cout << "\t\t\t\t\t\t* *\n";
		Sleep(150);
		cout << "\t\t\t\t\t\t* WELCOME *\n";
		Sleep(150);
		cout << "\t\t\t\t\t\t* TO ONLINE *\n";
		Sleep(150);
		cout << "\t\t\t\t\t\t* SHOPPING SYSTEM *\n";
		Sleep(150);
		cout << "\t\t\t\t\t\t* *\n";
		Sleep(150);
		cout << "\t\t\t\t\t\t" << setw(27) << setfill('*') << "\n";
		Sleep(150);
		cout << endl << endl;
		Sleep(250);
		cout << "\t\t\t\t\t<><><><><><><><><>Loading<><><><><><><><><>\n";
		cout << endl;
		cout << endl;
		Sleep(50);
		cout << "\t\t------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------\n\n";
		Sleep(300);
		cout << endl;
		Sleep(350);
		cout << "\t\t\t\t\t\t" << setw(30) << setfill('_') << "\n" << endl;
		Sleep(350);
		cout << "\t\t\t\t\t\t Moving to Online Purchasing \n";
		Sleep(350);
		cout << "\t\t\t\t\t\t" << setw(30) << setfill('_') << "\n" << endl;
		Sleep(1500);
	}
	void home_page()
	{
		system("CLS");
		system("color 6");
		cout << "\t\t\t\t\t\t|" << setw(32) << setfill('^') << "|\n";
		cout << "\t\t\t\t\t\t| WELCOME TO OUR |\n";
		cout << "\t\t\t\t\t\t| HOME PAGE |\n";
		cout << "\t\t\t\t\t\t|" << setw(34) << setfill('^') << "|\n\n\n";
		Sleep(450);
		cout << "\t" << setw(31) << setfill('_') << "\n";
		Sleep(450);
		cout << "\t" << setw(34) << setfill('_') << "\n\n\n\n";
		Sleep(350);
		cout << "\t <PRESS 1> Login as CUSTOMER \n\n";
		Sleep(350);
		cout << "\t <PRESS 2> SIGN-UP as CUSTOMER \n\n";
		Sleep(350);
		cout << "\t <PRESS 3> Login as ADMIN \n\n";
		Sleep(350);
		cout << "\t <PRESS 4> For EXIT \n\n\n";
		Sleep(450);
		cout << "\t" << setw(31) << setfill('_') << "\n";
		Sleep(450);
		cout << "\t" << setw(33) << setfill('_') << "\n\n\n";
		Sleep(350);
		int choice = 0;
		for (int i = 0; i >= 0; i++)
		{
			cout << "SELECT: ";
			cin >> choice;
			if (choice == 1)
			{
				//input log in details
				log.input();
				//checking if customer log in details matches customer sign in
				details
					if (log.getName() == sign.getName() && log.getPass() ==
						sign.getPass())
					{
						choice = 0;
						cout << "\nYou have logined successfully!\n" << endl;
						Sleep(1500);
						custom.format();
						cout << "ENTER YOUR DESIRED CHOICE:" << endl << endl;
						cout << "\t<PRESS 1> VIEW PRODUCT/ADD TO CART" <<
							endl;
						cout << "\t<PRESS 2> CONFIRM DELIVERY/PAYMENT" <<
							endl;
						cout << "\t<PRESS 3> GO TO HOME PAGE" << endl;
						cout << "\nCHOICE: ";
						while (choice == 0)
						{
							cin >> choice;
							if (choice == 1)
							{
								system("CLS");
								a.viewproducts(choice);
							}
							else if (choice == 2)
							{
								pay.card_no();
								pay.card_typpe();
								pay.payment_type();
								pay.Id();
								pay.order_no();
								pay.confirmation();
								pay.print();
							}
							else if (choice == 3)
							{
								home_page();
							}
							else
							{
								cout << "ENTER A VALID CHOICE: " << endl;
								choice == 0;
							}
						}
					}
					else
					{
						cout << "\n\nLogin failed, kindly retry.\n"; Sleep(3500);
						home_page();
					}
			}
			else if (choice == 2)
			{
				//customer sign in details
				char c = sign.input();
				if (c == 1)
				{
					this->custom.format();
					choice = 0;
					cout << "ENTER YOUR DESIRED CHOICE:" << endl << endl;
					cout << "\t<PRESS 1> VIEW PRODUCT/ADD TO CART" <<
						endl;
					cout << "\t<PRESS 2> CONFIRM DELIVERY/PAYMENT" <<
						endl;
					cout << "\t<PRESS 3> GO TO HOME PAGE" << endl;
					cout << "\nCHOICE: ";
					while (choice == 0)
					{
						cin >> choice;
						if (choice == 1)
						{
							a.viewproducts(choice);
						}
						else if (choice == 2)
						{
							pay.address();
							pay.card_no();
							pay.card_typpe();
							pay.payment_type();
							pay.Id();
							pay.order_no();
							pay.confirmation();
							pay.print();
						}
						else if (choice == 3)
						{
							home_page();
						}
						else
						{
							cout << "ENTER A VALID CHOICE: " << endl;
							choice == 0;
						}
					}
				}
				else
				{
					home_page();
				}
			}
			else if (choice == 3)
			{
				//input admin log in details
				log.input();
				//checking if login details matches default admin account details
				if (log.getName() == a.getName() && log.getPass() == a.getPass())
				{
					choice = 0;
					cout << "\nYou have logined successfully!\n" << endl;
					Sleep(1500);
					system("cls");
					a.format();
					while (choice == 0)
					{
						cout << "\nENTER YOUR DESIRED CHOICE:" << endl <<
							endl;
						cout << "\t <PRESS 1> ADD PRODUCTS \n";
						cout << "\t <PRESS 2> MANAGE PPRODUCTS \n";
						cout << "\t <PRESS 3> CONFIRM DELIVERY \n";
						cout << "\t <PRESS 4> VIEW CUSTOMER DETAILS \n";
						cout << "\t <PRESS 5> GO TO HOME PAGE " << endl;
						cout << "\nCHOICE: ";
						cin >> choice;
						if (choice == 1)
						{
							a.addProducts();
							choice = 0;
						}
						else if (choice == 2)
						{
							a.viewproducts(choice);
							a.manageProducts();
							choice = 0;
						}
						else if (choice == 3)
						{
							system("CLS");
							cout << "ADMIN:DELIVERY CONFIRMATION:"
								<< endl;
							a.confirmDelivery(pay);
							Order.deliveryLocation();
							Order.ROUTE();
							Order.deliveryDate();
							Order.PRINT();
							system("PAUSE");
							system("CLS");
							choice = 0;
						}
						else if (choice == 4)
						{
							cout << "CUSTOMER NAME: " <<
								sign.getName() << endl;
							cout << "CUSTOMER PASSWORD: " <<
								sign.getPass() << endl;
							system("PAUSE");
							system("CLS");
							choice = 0;
						}
						else if (choice == 5)
						{
							home_page();
						}
						else
						{
							cout << "ENTER A VALID CHOICE" << endl;
							choice = 0;
						}
					}
				}
				else
				{
					cout << "LOG IN FAILED !" << endl;
					Sleep(250);
					home_page();
				}
			}
			else if (choice == 4)
			{
				cout << "PROGRAM TERMINATED" << endl;
				Sleep(1500);
				exit(0); //terminates program without any errors
			}
			else
			{
				cout << "ENTER A VALID VALUE " << endl;
			}
			break;
		}
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		Sleep(50);
		cout << "------";
		cout << endl;
	}
};
//-------------------------------------------------------------------------------------------------------------------------
int main()
{
	//object delclaration
	HOME_PAGE home;
	//welcome page
	home.display();
	//options home page
	home.home_page();
	_getche();
	return 0;
}
//-------------------------------------------------------------------------------------------------------------------------