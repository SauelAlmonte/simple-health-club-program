// This is a menu-driven program that makes a function call
// for each selection the user makes.
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

// Function prototypes
void showMenu();
void showFees(double, int);

int main()
{
    int choice;     // To hold a menu choice
    int months;     // To hold a number of months

    // Constants for the menu choices
    constexpr int
        ADULT_CHOICE = 1,
        CHILD_CHOICE = 2,
        SENIOR_CHOICE = 3,
        QUIT_CHOICE = 4;

    // Set up numeric output formatting.
    cout << fixed << showpoint << setprecision(2);

    do
    {
        // Display the menu and get the user's choice.
        showMenu();
        cin >> choice;

        // Validate the menu selection.
        while (cin.fail() || choice < ADULT_CHOICE || choice > QUIT_CHOICE)
        {
            cin.clear(); // reset error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Please enter a valid menu choice: ";
            cin >> choice;
        }

        // If the user does not want to quit, proceed.
        if (choice != QUIT_CHOICE)
        {
            // Constants for membership rates
            constexpr double
                CHILD = 20.0,
                SENIOR = 30.0,
                ADULT = 40.0;

            // Get the number of months.
            cout << "For how many months ? ";
            cin >> months;

            while (cin.fail() || months <= 0)
            {
                cin.clear(); // reset error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
                cout << "Please enter a valid number of months: ";
                cin >> months;
            }

            // Display the membership fees.
            switch (choice)
            {
                case ADULT_CHOICE:
                    showFees(ADULT, months);
                    break;
                case CHILD_CHOICE:
                    showFees(CHILD, months);
                    break;
                case SENIOR_CHOICE:
                    showFees(SENIOR, months);
                default: ;
            }
        }
    } while (choice != QUIT_CHOICE);
    return 0;
}

//***************************************************************************
// Definition of function showMenu which displays the menu.                *
//***************************************************************************
void showMenu()
{
    cout << "\n\tHealth Club Membership Menu\n\n"
         << "1. Standard Adult Membership\n"
         << "2. Child Membership\n"
         << "3. Senior Citizen Membership\n"
         << "4. Quit the Program\n\n"
         << "Enter your choice: ";
}

//***************************************************************************
// Definition of function showFees. The memberRate parameter holds         *
// the monthly membership rate and the months parameter holds the          *
// number of months. The function displays the total charges.              *
//***************************************************************************
void showFees(double memberRate, int months)
{
    cout << "\n\nThe total charges are $"
        << (memberRate * months) << endl;
}
