// Program :- 1

#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  int arr[n];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "The even elements of the array are: ";
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      cout << arr[i] << " ";
    }
  }

  cout << endl;

  return 0;
}

/*

Output :-

Enter the size of the array: 3
Enter the elements of the array: 2
8
11
The even elements of the array are: 2 8 

*/

// Program :- 2

#include <iostream>
using namespace std;

int main() {
  int startYear, endYear;
  cout << "Enter the start year: ";
  cin >> startYear;
  cout << "Enter the end year: ";
  cin >> endYear;


  int leapYears[endYear - startYear + 1];
  int num = 0;

  
  for (int i = startYear; i <= endYear; i++)
  {
   
    if (i % 4 == 0 ) 
    {
     
      leapYears[num++] = i;
    }
  }

  
  cout << "The leap years between " << startYear << " and " << endYear << " are: ";
  for (int j = 0; j < num; j++) {
    cout << leapYears[j] << " ";
  }
  cout << endl;

  return 0;
}



/*

Output :-

Enter the start year: 2000
Enter the end year: 2020
The leap years between 2000 and 2020 are: 2000 2004 2008 2012 2016 2020 

*/