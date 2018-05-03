/* Make a program that builds the regular paperfold sequence (or dragoncurve) up to 8 cycles deep.*/

#include <iostream>
#include <vector>

using namespace std;

// Function Definitions
void paperfold(vector<int>&);
void printvector(vector<int>&);

// Main Function
int main() {
    // Define number of cycles
    unsigned int cycles = 8;
    vector<int> dragoncurve;

    for (unsigned int i = 0; i < cycles; i++) {
        paperfold(dragoncurve);
    }

    printvector(dragoncurve);

    return 0;
}

// Define builder function
void paperfold(vector<int>& dragoncurve) {
    int insertBit = 0;

    for (unsigned int j = 0; j*2 < dragoncurve.size(); j++){
        if (j % 2 == 0) //need to alternate between 0s and 1s. start with 1.
            insertBit = 1;
        else
            insertBit = 0;    
        dragoncurve.insert(dragoncurve.begin()+j*2, insertBit); //j*2 to skip previously modified index
    }
    dragoncurve.push_back(abs(insertBit-1)); // insert the opposite of the last bit at the end.
}


void printvector(vector<int>& myVector) {

    for (unsigned int index = 0; index < myVector.size(); index++){
        cout << myVector[index];
        if (index % 30 == 0 && index > 0){
            cout << endl;
        }
    }
    
    cout << endl;
}