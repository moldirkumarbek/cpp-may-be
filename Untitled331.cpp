#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
struct Train{
    string destination,
           departure_time,
           time_of_arrival;
 
    int number_of_train;
};
 
void addTrain(Train &);
void showTrain(Train &);
void saveTrain(Train &, ofstream &);
void getTrain(Train &, ifstream &);
 
int _tmain()
{
    ofstream fout("3.dat", ios::binary);
 
    int number;
    cout << "Enter the number of trains: ";
        cin >> number;
        cin.ignore();
 
    Train *mas_of_trains = new Train[number];
 
    /*???? ?????? ? ???????*/
    cout << "\nEnter information about trains:";
    for(int i = 0; i < number; ++i){
        addTrain(mas_of_trains[i]);
    }
 
    /*?????????? ?????? ? ????*/
    for(int i = 0; i < number; ++i){
        saveTrain(mas_of_trains[i], fout);
    }
 
    fout.close();               //????????? ????, ????? ??? ??????? ???????????
 
    const int size = 3;
    Train *trains = new Train[size];
 
    ifstream fin("3.dat", ios::binary);
    /*????????? ?????? ?? ????? ? ??????*/
    for(int i = 0; i < size; ++i){
        getTrain(trains[i], fin);
    }
 
    /*??????? ?????? ?????????? ?? ?????*/
    cout << "\nIinformation about trains:";
    for(int i = 0; i < size; ++i){
        showTrain(trains[i]);
    }
 
    /*??????????? ??????*/
    delete []trains;
    delete []mas_of_trains;
 
    cout << "\n\n";
    return 0;
}
 
void addTrain(Train &op){
 
    cout << "\nEnter the destination: ";
        getline(cin, op.destination, '\n');
 
    cout << "Enter the number of trains: ";
        cin >> op.number_of_train;
 
    cout << "Enter the time of departure: ";
        cin.ignore();
        getline(cin, op.departure_time, '\n');
 
    cout << "Enter the time of arrival: ";
        getline(cin, op.time_of_arrival, '\n');
}
 
void saveTrain(Train &op, ofstream &_fout){
 
    _fout << op.destination << "\r\n" << op.number_of_train << "\r\n" <<
        op.departure_time << "\r\n" << op.time_of_arrival << "\r\n\r\n";
}
 
void getTrain(Train &op, ifstream &_fin){
        
        getline(_fin, op.destination);
        _fin >> op.number_of_train;
        _fin.ignore(2);
        getline(_fin, op.departure_time);
        getline(_fin, op.time_of_arrival);
        _fin.ignore(2);
}
 
void showTrain(Train &op){
 
    cout << "\nEnter the destination: " << op.destination << 
            "\nEnter the number of trains: " << op.number_of_train <<
            "\nEnter the time of departure: " << op.departure_time <<
            "\nEnter the time of arrival: " << op.time_of_arrival << '\n';
}

