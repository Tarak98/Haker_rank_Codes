#include <iostream>

using namespace std;

double calculatePercentageOfCaloriesFromFat(int calories, int fatGrams) {
    
    double caloriesFromFat = fatGrams * 9;

    
    double percentageFromFat = (caloriesFromFat / calories) * 100;

    return percentageFromFat;
}

int main() {
    int calories, fatGrams;

    
    cout << "Enter the number of calories: ";
    cin >> calories;

   
    cout << "Enter the number of fat grams: ";
    cin >> fatGrams;

 
    double percentageFromFat = calculatePercentageOfCaloriesFromFat(calories, fatGrams);

    
    cout << "Percentage of calories from fat: " << percentageFromFat << "%" << endl;

    // Check if the food is low in fat (calories from fat < 30% of total calories)
    if (percentageFromFat < 30.0) {
        cout << "This food is low in fat." << endl;
    }

    return 0;
}