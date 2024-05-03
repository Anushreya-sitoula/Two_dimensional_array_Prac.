//Student Name: Anushreya Sitoula

//Teacher: Dr. Tyson McMillan

//Date: 3/28/2024

//A program to practice working with multi-dimensional arrays

#include <iostream>

using namespace std;

/*

Research Input data: go to http://www.weather.comLinks to an external site.

Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

//Fort Worth = 1, Arlington = 2  Replace City_One and City_Two with the names of your cities

//Data Table

//City X, Day X: Temp

City 1, Day 1: 78

City 1, Day 2: 81

City 1, Day 3: 80

City 1, Day 4: 81

City 1, Day 5: 62

City 1, Day 6: 67

City 1, Day 7: 73

City 2, Day 1: 79

City 2, Day 2: 81

City 2, Day 3: 81

City 2, Day 4: 81

City 2, Day 5: 64

City 2, Day 6: 68

City 2, Day 7: 74

*/

 

int main(){
  const int CITY = 2;

  const int WEEK = 7;

    int temperature[CITY][WEEK];

    //Note your input data from the above

    cout << "Enter all temperature for a week of first city and then second city. \n";

    // Inserting the values into the temperature array

    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops
    for (int i = 0; i < CITY; ++i){
        for(int j = 0; j < WEEK; ++j){
            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";
            cin >> temperature[i][j];
        }
    }

    cout << "\n\nDisplaying Values:\n";

    // Accessing the values from the temperature array
    for (int i = 0; i < CITY; ++i){
        for(int j = 0; j < WEEK; ++j){
            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }

    }
    
    //Expanding the programming
    
    //One dimentional for cityOne and cityTwo
    int cityOne[7], cityTwo[7];
    
    //Assigns the temps. of each day into cityOne or cityTwo depending on the city Number
    for (int i = 0; i < CITY; ++i){
        for(int j = 0; j < WEEK; ++j){
            if(i == 0){
                cityOne[j] = temperature[i][j];
            }
            if(i == 1){
                cityTwo[j] = temperature[i][j];
            }
        }
    }
    
    //Uses a nested for loop to feed the data from cityOne and cityTwo back into the two dimensional array temperature
    for (int i = 0; i < CITY; ++i){
        for(int j = 0; j < WEEK; ++j){
            if(i == 0){
                temperature[i][j] = cityOne[j];
            }
            if(i == 1){
                temperature[i][j] = cityTwo[j];
            }
        }
    }
    
	//Prints the values of the temperature array
    cout << "\n";
    for (int i = 0; i < CITY; ++i){
        for(int j = 0; j < WEEK; ++j){
            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }

    }
    
    return 0;
    
}