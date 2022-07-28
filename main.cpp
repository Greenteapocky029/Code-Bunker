#include <iostream>

using namespace std;

int main(){
    string color, pn,celeb;

    cout << "please enter a color: ";
    getline(cin, color);

    cout << "please enter a plural noun: ";
    getline(cin, pn);

    cout << "please enter a celeb: ";
    getline(cin, celeb);
    cout << "roses are "<<color << endl;
    cout <<pn<< " are blue" << endl;
    cout << "I love " << celeb << endl;
    return 0;

}
