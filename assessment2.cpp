// Event management system

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// Constants for cost calculations
const double CostPerHour = 18.50;
const double CostPerMinute = 0.40;
const double CostOfDinner = 20.70;

// Class to represent an Event
class Event
{
private:
    string eventName;
    string firstName, lastName;
    int numberOfGuests, numberOfMinutes;

public:
    // Constructor to initialize event details
    Event(string eName, string fName, string lName, int guests, int minutes)
    {
        eventName = eName;
        firstName = fName;
        lastName = lName;
        numberOfGuests = guests;
        numberOfMinutes = minutes;
    }

    // Function to calculate the number of servent required
    int calculateNumberOfservent()
    {
        return ceil(numberOfGuests / 20.0);
    }

    // Function to calculate the cost for one servent
    double calculateCostForOneServent()
    {
        double cost1 = (numberOfMinutes / 60) * CostPerHour;
        double cost2 = (numberOfMinutes % 60) * CostPerMinute;
        return cost1 + cost2;
    }

    // Function to calculate total food cost
    double calculateTotalFoodCost()
    {
        return numberOfGuests * CostOfDinner;
    }

    // Function to calculate average cost per person
    double calculateAverageCostPerPerson(double totalFoodCost)
    {
        return totalFoodCost / numberOfGuests;
    }

    // Function to calculate total cost
    double calculateTotalCost(double costForOneServent, int numberOfservent, double totalFoodCost)
    {
        return totalFoodCost + (costForOneServent * numberOfservent);
    }

    // Function to display the cost estimation
    void displayCostEstimation()
    {
        int numberOfservent = calculateNumberOfservent();
        double costForOneServent = calculateCostForOneServent();
        double totalFoodCost = calculateTotalFoodCost();
        double averageCost = calculateAverageCostPerPerson(totalFoodCost);
        double totalCost = calculateTotalCost(costForOneServent, numberOfservent, totalFoodCost);
        double depositAmount = totalCost * 0.25;

        cout << "\n--------- Event Management System ----------\n";
        cout << "Event Name: " << eventName << endl;
        cout << "Organizer: " << firstName << " " << lastName << endl;
        cout << "Number of Guests: " << numberOfGuests << endl;
        cout << "Number of servent Required: " << numberOfservent << endl;
        cout << "Cost for One Servent: " << costForOneServent << endl;
        cout << "Total Food Cost: " << totalFoodCost << endl;
        cout << "Average Cost Per Person: " << averageCost << endl;
        cout << "Total Event Cost: " << totalCost << endl;
        cout<< "please deposit a 25% amount to reserve the event" << endl;
        cout << "Deposit Amount needed is: " << depositAmount << endl;
    }
};

int main()
{
    string eventName, firstName, lastName;
    int numberOfGuests, numberOfMinutes;

    // Getting input from the user
    cout << "Enter the event name : ";
    cin >> eventName;
    cout << "Enter your first and last name : ";
    cin >> firstName >> lastName;
    cout << "Enter the number of guests: ";
    cin >> numberOfGuests;
    cout << "Enter the number of minutes: ";
    cin >> numberOfMinutes;

    // Creating an Event object
    Event event(eventName, firstName, lastName, numberOfGuests, numberOfMinutes);

    // Displaying the cost estimation
    event.displayCostEstimation();

    return 0;
}