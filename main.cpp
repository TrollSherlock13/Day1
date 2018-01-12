//Adventure Game
#include <iostream>
#include <cmath>
#include <cstring>
int main()
{
    
    using namespace std;
    int answer;
    cout <<"Answer the following question...\n";
    cout <<"what is the sum of 24*2: ";
    do
    {
        cin >> answer;
        if ( answer == 48)
            cout << answer <<" is correct.\n ";
        else
            cout << "Try again!\n ";
    }while (answer != 48);
    double s1;
    double sqrt_1;
    cout<<"What is the square root of 121: ";
    do
    {
        s1 = sqrt(121);
        cin >> sqrt_1;
        if (sqrt_1 == s1)
            cout << sqrt_1 << " Correct.\n ";
        else
            cout << "Try again!\n ";
    }while (sqrt_1 != s1);
    cout <<"The last question "
    ", solve the riddle:\nVoiceless it cries,\nWingless flutters,\nToothless bites,\nMouthless mutters.\n";
    int i = 0;
    int i_1 = 0;
    string answer_1;
    string question_1 = "wind";
    do
    {
        cin >> answer_1;
        if (answer_1 == question_1) {
            i_1 = i +1;
            cout << "Correct ";
        } else {
            cout << "Try again";
        }
        
        
    }while (i_1 != 1);
    return 0;
}
