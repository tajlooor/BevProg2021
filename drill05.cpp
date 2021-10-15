#include "std_lib_facilities.h"
int main()
try {
        //cout << "Success!\n"; // || 1. : C nagybetű ||  2. : " páratlan || 3. : " a végén || 4. : "" hiányzik -> nem string a success ||1-4

        //int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; // int helyett string  ||5.

        //vector<int> v(10); v[5] = 7; if (v[5]=7) cout << "Success!\n"; // [] helyett () volt  ||6. 

        //if (1+1 == 2) cout << "Success!\n"; else cout << "Fail!\n"; // if condition üres ||7.
        
        //bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n"; // if c -> cout  de mivel if nem c ezért  else || 8.

        //string s = "ape"; bool c = "fool"; if (c) cout << "Success!\n"; // ||9.

        //string s = "ape"; if (s!="fool") cout << "Success!\n"; // == -> !=  ||10.

        //string s = "ape"; if (s !="fool") cout << "Success!\n"; // << lemaradt cout után és == -> !=||11.

        //string s = "ape"; if (s =="ape") cout << "Success!\n"; // fool -> ape, + helyett ==, cout << lemaradt||12.

        //vector<char> v(5); for (int i=0; i<v.size(); ++i) ; cout << "Success!\n"; // 0 -> i ||13.

        //vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n"; // ||14.

        //string s = "Success!\n"; for (int i=0; i<1; ++i) cout << s; // ||15.

        //if (true) cout << "Success!\n"; else cout << "Fail!\n"; // if (x) !THEN! ||16.

        //int x = 2000; int c = x; if (c==2000) cout << "Success!\n"; // char c -> int c||17.

        //string s = "Success!\n"; for (int i=9; i<10; ++i) cout << s; //  ||18.

        //vector<int >v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n"; // vector < !! > hiányzott (type)||19.

       /* int i=0; int j = 9; 

            while (j<10){
             ++i; 
            
                if (j<i){
           
                    cout << "Success!\n";
                    break;
                }
            }*/ // ||20.

        //int x = 2; double d = 5/(x+2); if (d != 2*x+0.5) cout << "Success!\n";// ||21.

        //vector<string> s {"Success!\n"}; for (int i=0; i<=0; ++i) cout << s[i]; // { !! }||22.

        //int i=0; int j = 0; while (i<10) i++; if (j<i) cout << "Success!\n"; // ||23.

        //int x = 4; double d = 5/(x-2); if (d=2*x+0.5) cout << "Success!\n"; // - nem volt jó||24.

        cout << "Success!\n"; // cin -> cout ||25.

        keep_window_open();
        return 0;
}
catch (exception& e) {
          cerr << "error: " << e.what() << '\n';
          keep_window_open();
          return 1;
}
catch (...) {
          cerr << "Oops: unknown exception!\n";
          keep_window_open();
          return 2;
}