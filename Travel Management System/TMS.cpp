#include <iostream>
#include <fstream>   //To handel files
#include <iomanip>   //To handel floating values
#include <windows.h> //To change color of console

using namespace std;
void menu();

class ManageMenu
{
protected:
    string userName; // Hide Admin Name.

public:
    ManageMenu()
    {
        system("color E"); // Change terminal color.
        cout << "\n\n\n\n\n\n\n\n Enter your name to continue as an Admin:";
        cin >> userName;
        system("CLS");
        menu();
    }
    ~ManageMenu() {} // Distroying ManageMenu Contructor.(Distructor)
};
//========================================================================================
class Customers
{
public:
    string name, gender, address;
    int age, contact;
    static int custID;
    char all[999]; // Charactor array for storing all customers data.
    void getDetails()
    {
        ofstream out("oldCustomer.txt", ios::app); // To save customer data in txt file.
        {
            cout << "Enter Customer ID = ";
            cin >> custID;
            cout << "Enter Customer name = ";
            cin >> name;
            cout << "Enter Customer contact number = ";
            cin >> contact;
            cout << "Enter Customer age = ";
            cin >> age;
            cout << "Enter Customer gender = ";
            cin >> gender;
            cout << "Enter Customer address= ";
            cin >> address;
        }
        out << "\nCustomer ID : " << custID << "\nName : " << name << "\nContact No. : " << contact << "\nAge : " << age << "\nGender : " << gender << "\nAddress : " << address << endl;
        out.close();
        cout << "\nSAVED..! \nNOTE:- We save your details record for future purpose. Thank You.\n"
             << endl;
    }
    void showDetails() // To show details of customer from saved txt file.
    {
        ifstream in("oldCustomer.txt");
        {
            if (!in)
            {
                cout << "File Not Found!!!" << endl;
            }
            while (!(in.eof())) //'eof' comes from fstream header file.
            {
                in.getline(all, 999); // To get all data from file.
                cout << all << endl;
            }
            in.close();
        }
    }
};
int Customers::custID;
//===============================================================================================
class Cabs
{
public:
    int cabChoice;             // Which type of Cab ride you want.
    int kilometers;            // How many km you have to drive.
    float cabPrice;            // Price of Cab per km.
    static float lastCabPrice; // Total price you have to pay.      //Making it Static so we can use it outside the class.

    void cabDetails()
    {
        cout << "We collaborated with fastest, sefest, and smartest cab service arround the country." << endl;
        cout << "-------------------Akshay Royal Cabs-----------------\n"
             << endl;
        cout << "1. Rent a Standard Cab - Rs.15 per km." << endl;
        cout << "2. Rent a Luxury Cab - Rs.20 per km." << endl;

        cout << "\nTo calculate the cost for your jurney : " << endl;
        cout << "Enter which kind of cab you need = ";
        cin >> cabChoice;
        cout << "Enter kilometers of your jurney = ";
        cin >> kilometers;

        int hireCab;
        if (cabChoice == 1)
        {
            cabPrice = kilometers * 15;
            cout << "\nYour jurney total cost is Rs " << cabPrice << "/- for Standard Cab" << endl;
            cout << "Press 1 to hire this Standard cab = OR ";
            cout << "Press 2 to hire Luxury cab = ";
            cin >> hireCab;

            system("CLS");

            if (hireCab == 1)
            {
                lastCabPrice = cabPrice;
                cout << "\nYou have successfully hired a Standard Cab." << endl;
                cout << "[ Goto Menu and take the receipt ]" << endl;
                ;
            }
            else if (hireCab == 2)
            {
                cabDetails();
            }
            else
            {
                cout << "Ooops.. Invalid Input.\nRedirecting to Previous menu.\nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                cabDetails();
            }
        }
        else if (cabChoice == 2)
        {
            // ------------------------------------------------------------------
            cabPrice = kilometers * 20;
            cout << "\nYour jurney total cost is Rs " << cabPrice << "/- for Standard Cab" << endl;
            cout << "Press 1 to hire this Luxury cab = OR ";
            cout << "Press 2 to choose another cab = ";
            cin >> hireCab;

            system("CLS");

            if (hireCab == 1)
            {
                lastCabPrice = cabPrice;
                cout << "\nYou have successfully hired a Standard Cab." << endl;
                cout << "[ Goto Menu and take the receipt ]" << endl;
                ;
            }
            else if (hireCab == 2)
            {
                cabDetails();
            }
            else
            {
                cout << "Ooops.. Invalid Input.\nRedirecting to Main menu.\nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                menu();
            }
        }
        cout << "\nPress 1 to Redirect Main Menu : ";
        cin >> hireCab;
        system("CLS");
        if (hireCab == 1)
        {
            menu();
        }
        else
        {
            menu();
        }
    }
};
float Cabs::lastCabPrice;
// --------------------------------------------------------------------------------------------------------
class Booking
{
public:
    int choiceHotel;
    int packageChoice;
    static float hotelPrice; // Making it Static so we can use it outside the class.

    void hotels()
    {
        string hotelNo[] = {"The Corinthians Resort & Club", "Hotel Vivanta", "Hotel Blue Diamond"};
        // for (int i = 0; i < hotelNo->length(); i++)
        for (int i = 0; i < 3; i++)
        {
            cout <<"\n" <<(i + 1) << ". " << hotelNo[i]<<endl;
        }
        cout << "\nCurrently we collaborated with above hotels." << endl;
        cout << "Press any key to back. OR\nEnter number of the Hotel you want to book : ";
        cin >> choiceHotel;
        system("CLS");

        if (choiceHotel == 1)
        {
            cout << "-----------------The Corinthians Resort & Club---------------------\n"
                 << endl;
            cout << "Combining Greek and Egyptian designs,\nThe Corinthians Resort & Club is a 15-minute drive from MG Road and Magarpatta City.\nIt offers a full-service spa and several indoor and outdoor activities. " << endl;
            cout << "Package offered by The Corinthians Resort & Club:-\n"
                 << endl;
            cout << "1. Standard Pack:-" << endl;
            cout << "\tAll basic facilities you need just for: Rs 9000.00/-" << endl;
            cout << "2. Premium Pack:-" << endl;
            cout << "\tEnjoy Premium facilities just for: Rs 13000.00/-" << endl;
            cout << "3. Luxury Pack:-" << endl;
            cout << "\tThe Corinthians Luxury facilities just for: Rs 15000.00/-" << endl;

            cout << "\nPress another key to Back. OR\n Enter package number of your choice : " << endl;
            cin >> packageChoice;

            if (packageChoice == 1)
            {
                hotelPrice = 9000.00;
                cout << "\nYou have successfully booked Standard Pack at The Corinthians Resort & Club." << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else if (packageChoice == 2)
            {
                hotelPrice = 13000.00;
                cout << "\nYou have successfully booked Premium Pack at The Corinthians Resort & Club." << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else if (packageChoice == 3)
            {
                hotelPrice = 15000.00;
                cout << "\nYou have successfully booked Luxury Pack at The Corinthians Resort & Club." << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else
            {
                cout << "Ooops.. Invalid Input.\nRedirecting to Previous menu.\nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
            int gotoMenu;
            cout << "\nPress 1 to redirect main menu : ";
            cin >> gotoMenu;
            if (gotoMenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        //---------------------------------------222222222222222222222------------------------------------
        else if (choiceHotel == 2)
        {
            cout << "---------------------Hotel Vivanta-------------------------\n"
                 << endl;
            cout << "Vivanta Pune Hinjawadi features a restaurant, bar and free WiFi throughout\nthe property.The hotel has an outdoor pool and spa centre,\nand guests can enjoy a drink at the snack bar.\nFree private parking is available on site. " << endl;
            cout << "Package offered by Hotel Vivanta:-\n"
                 << endl;
            cout << "1. Standard Pack:-" << endl;
            cout << "\tAll basic facilities you need just for: Rs 8000.00/-" << endl;
            cout << "2. Premium Pack:-" << endl;
            cout << "\tEnjoy Premium facilities just for: Rs 10000.00/-" << endl;
            cout << "3. Luxury Pack:-" << endl;
            cout << "\tThe Vivanta Luxury facilities just for: Rs 12000.00/-" << endl;

            cout << "\nPress another to Back. OR\n Enter package number of your choice : " << endl;
            cin >> packageChoice;

            if (packageChoice == 1)
            {
                hotelPrice = 8000.00;
                cout << "\nYou have successfully booked Standard Pack at Hotel Vivanta." << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else if (packageChoice == 2)
            {
                hotelPrice = 10000.00;
                cout << "\nYou have successfully booked Premium Pack at Hotel Vivanta." << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else if (packageChoice == 3)
            {
                hotelPrice = 12000.00;
                cout << "\nYou have successfully booked Luxury Pack at Hotel Vivanta." << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else
            {
                cout << "Ooops.. Invalid Input.\nRedirecting to Previous menu.\nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
            int gotoMenu;
            cout << "\nPress 1 to redirect main menu : ";
            cin >> gotoMenu;
            if (gotoMenu == 2)
            {
                menu();
            }
            else
            {
                menu();
            }
        }

        //------------------------------33333333-------------------------------------------------
        else if (choiceHotel == 3)
        {
            cout << "---------------------Hotel Blue Diamond-------------------------\n"
                 << endl;
            cout << "Vivanta Pune Hinjawadi features a restaurant, bar and free WiFi throughout\nthe property.The hotel has an outdoor pool and spa centre,\nand guests can enjoy a drink at the snack bar.\nFree private parking is available on site. " << endl;
            cout << "Package offered by Hotel Vivanta:-\n"
                 << endl;
            cout << "1. Standard Pack:-" << endl;
            cout << "\tAll basic facilities you need just for: Rs 10000.00/-" << endl;
            cout << "2. Premium Pack:-" << endl;
            cout << "\tEnjoy Premium facilities just for: Rs 15000.00/-" << endl;
            cout << "3. Luxury Pack:-" << endl;
            cout << "\tThe Diamond Luxury facilities just for: Rs 20000.00/-" << endl;

            cout << "\nPress another to Back. OR\n Enter package number of your choice : " << endl;
            cin >> packageChoice;

            if (packageChoice == 1)
            {
                hotelPrice = 15000.00;
                cout << "\nYou have successfully booked Standard Pack at Hotel Blue Diamond." << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else if (packageChoice == 2)
            {
                hotelPrice = 18000.00;
                cout << "\nYou have successfully booked Premium Pack at Hotel Blue Diamond." << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else if (packageChoice == 3)
            {
                hotelPrice = 20000.00;
                cout << "\nYou have successfully booked Luxury Pack at Hotel Blue Diamond." << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else
            {
                cout << "Ooops.. Invalid Input.\nRedirecting to Previous menu.\nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
            int gotoMenu;
            cout << "\nPress 1 to redirect main menu : ";
            cin >> gotoMenu;
            if (gotoMenu == 3)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        else
        {
            cout << "Ooops.. Invalid Input.\nRedirecting to Main menu.\nPlease Wait!" << endl;
            Sleep(1100);
            system("CLS");
            menu();
        }
    }
};
float Booking::hotelPrice;
// ------------------------------------------------------------------------------------------------------

class Charges : public Booking, Cabs, Customers
{
public:
    void printBill()
    {
        ofstream outf("Receipt.txt"); // To make txt file of Receipt/bill.
        {
            outf << "---------[ Akshay Tours and Travel ]----------\n"
                 << endl;
            outf << "------------------Receipt---------------------" << endl;
            outf << "______________________________________________\n"
                 << endl;
            outf << "Customer ID:\t\t\t" << Customers::custID << endl;
            outf << "Description:\t\t\tTotal" << endl;
            outf << "Hotel Price:\t\t\t" << fixed << setprecision(2) << Booking::hotelPrice << endl;
            outf << "Travel (Cab) Price:\t\t" << fixed << setprecision(2) << Cabs::lastCabPrice << endl;

            outf << "______________________________________________\n"
                 << endl;
            outf << "Total Charge:\t\t\t" << fixed << setprecision(2) << Booking::hotelPrice + Cabs::lastCabPrice << endl;
            outf << "______________________________________________\n"
                 << endl;
            outf << "------------------[ Thank You ]---------------\n"
                 << endl;
        }
        outf.close();
    }
    void showBill()
    {
        ifstream inf("Receipt.txt"); // To show Receipt txt file.
        {
            if (!inf)
            {
                cout << "File Opening Error..!" << endl;
            }
            while (!(inf.eof()))
            {
                inf.getline(all, 999); // To read all the content from the file.
                cout << all << endl;
            }
        }
        inf.close(); // After reading file close the file.
    }
};

//--------------------------------------------------------------------------------------------
void menu()
{

    int mainChoice;
    int inChoice;
    int gotoMenu;

    cout << "\t------[ Akshay Tours and Travel ]-------\n"
         << endl;
    cout << "\t---------------Main Menu----------------" << endl;
    cout << "\t _______________________________________" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|\tCustomer Management -> 1\t|" << endl;
    cout << "\t|\tCabs Management     -> 2\t|" << endl;
    cout << "\t|\tBooking Management  -> 3\t|" << endl;
    cout << "\t|\tCharge & Bill       -> 4\t|" << endl;
    cout << "\t|\tExit                -> 5\t|" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|_______________________________________|" << endl;

    cout << "\nEnter Your Choice: ";
    cin >> mainChoice;

    system("CLS");

    // Making Objects-------------------------------------------------------------------------

    Customers custObj;
    Cabs cabObj;
    Booking bookObj;
    Charges chargObj;
    if (mainChoice == 1)
    {
        cout << "--------Customers---------\n"
             << endl;
        cout << "1. Enter New Customer." << endl;
        cout << "2. See Old Customers." << endl; //.txt file of old customer.
        cout << "\nEnter Choice: ";
        cin >> inChoice;

        system("CLS");
        if (inChoice == 1)
        {
            custObj.getDetails();
        }
        else if (inChoice == 2)
        {
            custObj.showDetails();
        }
        else
        {
            cout << "Invalid Input..! Redirecting to Previous Menu \nPlease Wait!" << endl;
            Sleep(1100);
            system("CLS");
            menu();
        }
        cout << "\nPress 1 to Redirect main menu: ";
        cin >> gotoMenu;
        system("CLS");
        if (gotoMenu == 1)
        {
            menu();
        }
        else
        {
            menu();
        }
    }
    else if (mainChoice == 2)
    {
        cabObj.cabDetails();
    }
    else if (mainChoice == 3)
    {
        cout << "-->    Book a Luxury Hotel using the system    <--" << endl;
        bookObj.hotels();
    }
    else if (mainChoice == 4)
    {
        cout << "-->    Get Your Receipt    <--" << endl;
        chargObj.printBill();

        cout << "Your receipt is already printed you can get it from file path\n"
             << endl;
        cout << "To display your receipt in the screen, Enter 1: OR Enter another key to go back to the Main Menu." << endl;

        cin >> gotoMenu;

        if (gotoMenu == 1)
        {
            system("CLS");
            chargObj.showBill();
            cout << "\nPress 1 to redirect Main menu: ";
            cin >> gotoMenu;
            system("CLS");
            if (gotoMenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        else
        {
            system("CLS");
            menu();
        }
    }
    else if (mainChoice == 5)
    {
        cout << "----Thank You. Have a nice Day.";
        Sleep(1100);
        system("CLS");
        menu();
    }
    else
    {
        cout << "Invalid Input..! Redirecting to Previous Menu \nPlease Wait!" << endl;
        Sleep(1100);
        system("CLS");
        menu();
    }
}
int main()
{
    ManageMenu startObj;

    return 0;
}