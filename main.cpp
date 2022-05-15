#include <iostream>

using namespace std;


double pagerankOne(double rankThree) {

    double calculation = 0.0;
    calculation = 0.7 * (1 * rankThree) + (0.3) * (0.2);

    return calculation;

}

double pagerankTwo(double rankOne) {
    
    double calculation = 0.0;
    calculation = 0.7 * (1 * rankOne) + (0.3) * (0.2);

    return calculation;
}

double pagerankThree(double rankTwo) {
    
    double calculation = 0.0;
    calculation = 0.7 * (1 * rankTwo) + (0.3) * (0.2);

    return calculation;
}

double pagerankFour() {

    double calculation = (0.3) * (0.2);

    return calculation;
}

double pagerankFive(double rankTwo, double rankFour, double rankFive) {

    double calculation = 0.0;
    calculation = 0.7 * (1 * rankTwo + 1 * rankFour + 1 * rankFive) + (0.3) * (0.2);

    return calculation;
}




int main() {

    double one = 0.76;
    double two = 0.76;
    double three = 0.76;
    double four = 0.06;
    double five = 2.16;
    double epsilon = 0.0;

    bool done = false;

    while (done == false) {
        
        for (int i = 0; i < 250; i++) {

            double newOne = pagerankOne(three);
            double newTwo = pagerankTwo(one);
            double newThree = pagerankThree(two);
            double newFour = pagerankFour();
            double newFive = pagerankFive(two, four, five);

            if (abs(newOne - one) <= 0.001 && abs(newTwo - two) <= 0.001 && abs(newThree - three) <= 0.001 && abs(newFour - four) <= 0.001 && abs(newFive - five) <= 0.001) {
                done = true;
                break;
            }

            one = newOne;
            two = newTwo;
            three = newThree;
            four = newFour;
            five = newFive;

            cout << "Page rank of point 1: " << newOne << endl;
            cout << "Page rank of point 2: " << newTwo << endl;
            cout << "Page rank of point 3: " << newThree << endl;
            cout << "Page rank of point 4: " << newFour << endl;
            cout << "Page rank of point 5: " << newFive << endl;
            cout << "We needed " << i + 1 << " number of iterations to converge!" << endl;

        }
    }
    
    return 0;
}