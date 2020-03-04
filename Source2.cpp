#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
/*
int main(){
    using namespace std;
    int i = 0;
    string arr1[50]; //array intialization 
    int arr2[50];
    string arr3[50];
    
    try {
        ifstream file("names.data.txt");//file retreiveal 
        if (!file.good()) throw string("Cannot open data file "); // if file (not good) throw alert
        cout << " file openned successfully\n";
        for (int i = 0; i <= 50; i++) {
            if (i > 50) throw string("*** Exception *** array capacity exceeded ");
            file >> arr1[i];
            arr2[i] = 1001 + i;
            int id = arr2[i];
            //string sid = to_string(id);
           //arr1[i] = arr1[i] + "\n" + sid;

        }
        for (int x = 0; x <= i; x++) {
            //sort(arr1[0], arr1[50]);
            cout << arr1[x] << endl;


            /*
              int z = x + 1;
             string str = arr1[x];
             string str_2 = arr1[z];
              int c= str.size();
             int c_2 = str_2.size();
             char cstr[str.size + 1];
             char cstr2[str_2.size + 1];
             int test = strcmp(cstr, cstr2);
             
             
             cout << c << endl; 
             if (test >0) {
                 cout << arr1[x];
                 cout << arr1[i] << endl;
                 i++;
             } 
             

        }
        
        cout << i << " records processed" << endl;
      
    }
    catch (string alert) {
        cout << alert << endl;

    
    }
    return 0;
}

*/