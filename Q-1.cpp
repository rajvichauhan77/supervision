// #include<iostream>

// using namespace std;

// int main(){ 

//     int start, end, arr[100];

//     cout << "Enter the start Number: ";
//     cin >> start;

//     cout << "Enter the end Number: ";
//     cin >> end;

//     int count=0;
//      for(int i=start; i<=end; i++){
//         if(i%2==0){
//             cout << "Even numbers are: " << endl;
//             arr[count] = i;
//             count++;
//         }
//      }

//       for(int i=0; i<count; i++){
//         cout << arr[i] << endl;
//       }


//     for(int j=start; j<=end; j++){
//         if(j%2!=0){
//             cout << "Odd numbers are: " << endl;
//             arr[count] = j;
//             count++;
//         }
//     }

   
//     for(int j=0; j<count; j++){
//         cout << arr[j] << endl;
//       }

// }   


#include <iostream>
#include <fstream> 

using namespace std;

int main() {
    
    ofstream evenFile("even_file.txt");
    ofstream oddFile("odd_file.txt");

    if (!evenFile.is_open() || !oddFile.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    
    for (int i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            evenFile << i << ", ";
        } else {
            oddFile << i << ", ";
        }
    }

    
    evenFile.close();
    oddFile.close();

    
    ifstream evenFileRead("even_file.txt");
    ifstream oddFileRead("odd_file.txt");

    string evenNumbers, oddNumbers;
    getline(evenFileRead, evenNumbers);
    getline(oddFileRead, oddNumbers);

    cout << "Even numbers from even_file.txt:\n" << evenNumbers << endl;
    cout << "Odd numbers from odd_file.txt:\n" << oddNumbers << endl;

    evenFileRead.close();
    oddFileRead.close();

    return 0;
}