#include <iostream>
#include <string>

using namespace std;
template <class T>
T sum(T a, T b)
{
  return a + b;
}


struct Guest {
  string name;
  string surname;
  short age;
  string arrivalTime;
  string leftTime;
  short arrivalTimeInMinutes;
  short leftTimeInMinutes;
  void convertArrivalTime() {
    short arrivalHours, arrivalMinutes;
    string sHours, sMinutes;
    int i = 0;
    while (arrivalTime[i] != ':') {
      if (isdigit(arrivalTime[i])) {
        sHours += arrivalTime[i];
      }
      i++;
    }
    while (arrivalTime[i] != '\0') {
      if (isdigit(arrivalTime[i])) {
        sMinutes += arrivalTime[i];
      }
      i++;
    }
    arrivalHours = stoi(sHours);
    arrivalMinutes = stoi(sMinutes);
    arrivalTimeInMinutes = arrivalHours * 60 + arrivalMinutes;
  }
  void convertLeftTime() {
    int doubleDotIndex = leftTime.find(':');
    string sHours, sMinutes;
    short leftHours, leftMinutes;
    int i = 0;
    while (leftTime[i] != ':') {
      if (isdigit(leftTime[i])) {
        sHours += leftTime[i];
      }
      i++;
    }
    while (leftTime[i] != '\0') {
      if (isdigit(leftTime[i])) {
        sMinutes += leftTime[i];
      }
      i++;
    }
    leftHours = stoi(sHours);
    leftMinutes = stoi(sMinutes);
    leftTimeInMinutes = leftHours * 60 + leftMinutes;
  }
};


// function's prototypes
template <class T>
void inputGuests(T*, int);

template <class T>
void outputGuests(T*, int, int);

bool ascending(int, int);

bool descending(int, int);

template <class T>
void bubbleSort(T*, int, bool(*)(int, int));

template <class T>
void findSimultaneousGuests(T*, int);

int main()
{
  int k = sum('A', 'B');
  int n;
  cin >> n;
  Guest *guests = new Guest[n];
  inputGuests(guests, n);
  bubbleSort(guests, n, descending);
  findSimultaneousGuests(guests, n);
  delete[] guests;
}

template <class T>
void inputGuests(T* guests, int n) {
  for (int i = 0; i < n; i++) {
    cin >> guests[i].name >> guests[i].surname >> guests[i].age >> guests[i].arrivalTime >> guests[i].leftTime;
    guests[i].convertArrivalTime();
    guests[i].convertLeftTime();
  }
}

template <class T>
void outputGuests(T* guests, int start, int n) {
  cout << n - start << endl;
  for (int i = start; i < n; i++) {
    cout << guests[i].name << ' ' << guests[i].surname << ' ' << guests[i].age << ' ' << guests[i].arrivalTime << ' ' << guests[i].leftTime << endl;
  }
}


bool ascending(int a, int b) {
  return a > b;
}

bool descending(int a, int b) {
  return a < b;
}

template <class T>
void bubbleSort(T* guests, int n, bool(*compare)(int, int)) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if ((*compare)(guests[j].arrivalTimeInMinutes, guests[j + 1].arrivalTimeInMinutes)) {
        swap(guests[j], guests[j + 1]);
      }
    }
  }
}

template <class T>
void findSimultaneousGuests(T* guests, int n) {
  int max = 0;
  for (int i = 0; i < n; i++) {
    int temp = 0;
    for (int j = 0; j < n; j++) {
      if ((guests[i].arrivalTimeInMinutes >= guests[j].arrivalTimeInMinutes 
        && guests[i].arrivalTimeInMinutes <= guests[j].leftTimeInMinutes) 
        || (guests[i].leftTimeInMinutes >= guests[j].arrivalTimeInMinutes
          && guests[i].leftTimeInMinutes <= guests[j].leftTimeInMinutes)) {
        temp++;
      }
      if (temp > max) {
        max = temp;
      }
    }
  }
  outputGuests(guests, n - max, max);
}
