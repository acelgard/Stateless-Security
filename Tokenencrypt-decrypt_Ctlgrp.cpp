#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>


using namespace std;
int main(){
    int index = 2;
    int tkTTL = 3;
    
//
for (int i=0; i<1790; i++ ){
    for (int TTL=3; TTL!=0; TTL-- ){
        /*
        string encryptTK = "gpg -r Cryptoproject --encrypt tokens/token" + to_string(i) + to_string(TTL) + ".txt";
        system(encryptTK.c_str());
*/
        cout << "outer i = " << i << "\tinner for (TTL) = " << TTL << endl;
        
    }

}


string purge = "rm tokens/token" + to_string(index) + to_string(tkTTL) + ".txt.pgp";
system(purge.c_str());
}

//----helpful debug commands
         //string debug = "ls tokens/token" + to_string(i) + to_string(tkTTL) + ".txt.gpg";
            //cout << "current purge request: " <<purge << endl;
            //system(debug.c_str());