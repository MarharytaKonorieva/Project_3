#include <iostream>
#include <string>
using namespace std;

struct Flight
{
	string flight_number;
	string destination;
	string departure_time;
	string arrival_time;
	string number_of_free_seats;

};

int main()
{
	string X, Y;

	const int max_flights = 10;
	Flight flights[max_flights];

	flights[0] = { "1", "London", "09:00", "15:00", "10" };
	flights[1] = { "2", "Tokyo", "05:00", "9:00", "4" };
	flights[2] = { "3", "Delhi", "15:00", "20:00", "44" };
	flights[3] = { "4", "Shanghai","16:00", "22:00", "88" };
	flights[4] = { "5", "Mexico", "11:00", "13:00", "15" };
	flights[5] = { "6", "Cairo", "07:00", "10:00", "39" };
	flights[6] = { "7", "Dhaka", "13:00", "17:00", "34" };
	flights[7] = { "8", "Shanghai", "04:00", "12:00", "45" };

	cout << "All flights:" << endl;
	for (int i = 0; i < max_flights; ++i)
	{
		cout << flights[i].flight_number << " " << flights[i].destination << " " << flights[i].departure_time << endl;
	}

	cout << "Enter the desired destination: ";
	cin >> X;
	cout << "Enter the desired departure time(00:00): ";
	cin >> Y;

	bool error = true;

	for (int i = 0; i < max_flights; i++)
	{
		if (flights[i].destination == X && flights[i].departure_time == Y)
		{
			cout << "Availability of free seats" << " " << flights[i].destination << " " << "with departure time" << " " << flights[i].departure_time << ": " << " " << flights[i].number_of_free_seats;
			error = false;
			break;
		}
	}
	if (error == true)
	{
		cout << "Sorry! Information not found. Try again";

	}

	return 0;
}