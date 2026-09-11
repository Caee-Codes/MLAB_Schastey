#include <iostream>
#include <string>

using namespace std;

int main() {
    // Creating variables for the movie Finding Nemo
    string movieName = "Finding Nemo";
    int releaseYear = 2003;
    double boxOfficeGross = 0.94; // in billions

    // Outputting basic info using the variables
    cout << "The movie \"" << movieName << "\" came out in " << releaseYear 
         << ", and had a worldwide gross of around " << boxOfficeGross << " billion dollars." << endl;

    // Outputting quotes and interesting details
    cout << "My favorite scene involves Dory trying to speak whale." << endl;
    cout << "As Marlin and Dory journey across the ocean, they face many dangerous encounters." << endl;
    cout << "One of the most famous quotes from the movie is, \"Just keep swimming.\"" << endl;
    cout << "Another memorable line is, \"Fish are friends, not food.\"" << endl;

    return 0;
}