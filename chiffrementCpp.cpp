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

    NewKey.generationClef("ClePublic.pem", "ClePrive.pem", 1024);

    a = NewKey.chiffrementRsa("Banane");
    cout << a << endl;

    cout <<NewKey.dechiffrementRsa(a)<<endl;

 

    return 0;
}