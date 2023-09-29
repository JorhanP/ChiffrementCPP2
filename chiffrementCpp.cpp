#include "cryptlib.h"
#include "rijndael.h"
#include "modes.h"
#include "files.h"
#include "osrng.h"
#include "hex.h"
#include "RsaGestion.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
    using namespace CryptoPP;
    string a = "";

    RsaGestion NewKey;

    cout << "//--------------------------------------Programme 1---------------------------------------------------//" << endl;

    NewKey.generationClef("ClePublic.pem", "ClePrive.pem", 1024);

    a = NewKey.chiffrementRsa("Banane");
    cout << a << endl;

    cout <<NewKey.dechiffrementRsa(a)<<endl<<endl;

    cout << "//--------------------------------------Programme 2---------------------------------------------------//" << endl;


    NewKey.chargementClefs("ClePublic.pem", "ClePrive.pem");
    NewKey.chiffreDansFichier("Banane2", "FichierABanane.txt");
    cout << NewKey.dechiffreFichier("FichierABanane.txt") << endl;







    return 0;
}