#include <iostream>
#include <fstream>
#include <string> /*
using namespace std;
void sort(string a[], int n, int b[]) {
    string names;
    int temp;
    for (int last = n - 1; last > 0; last--) {
        for (int i = 0; i < last; i++) {
            if (a[i] < a[i + 1]) {
                names = a[i];
                a[i] = a[i + 1];
                a[i + 1] = names;
                temp = b[i];
                b[i] = b[i + 1];
                b[i + 1] = temp;

            }
        }
    }
}
void arrayprint(string a[], int size, int b[]) {
    for (int x = 0; x < size; x++) {
        cout << a[x] << endl;
        cout << b[x] << endl;
    }

}
int main() {
    string arr1[50];
    int arr2[50];
    int n = sizeof(arr1) / sizeof(arr1[0]);
    try {
        ifstream file("names.data");//file retreiveal 
        ofstream outfile("names.data");

        if (!file.good()) throw string("Cannot open data file "); // if file (not good) throw alert
        for (int i = 0; i < 49; i++) {
            cin >> arr1[i];
            arr2[i] = 1001 + i;
            sort(arr1, n, arr2);

           
        }
        //sort(arr1, n);
        cout << endl;
        arrayprint(arr1, n, arr2);
        // arrayprint(arr2, n);

        cout << n << "files " << endl;
        file.close();
    }
    catch (string alert) {
        cout << alert << endl;

    }
    return 0;
}
*/