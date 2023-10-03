#include "cryptlib.h"
#include "rijndael.h"
#include "modes.h"
#include "files.h"
#include "osrng.h"
#include "hex.h"
#include "RsaGestion.h"
#include "HashGestion.h"
#include "AesGestion.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{

    //string a = "";


   /* cout << "//--------------------------------------Programme 1 RSA---------------------------------------------------//" << endl;

    RsaGestion NewKey;

    NewKey.generationClef("ClePublic.pem", "ClePrive.pem", 1024);

    a = NewKey.chiffrementRsa("Banane");
    cout << a << endl;

    cout <<NewKey.dechiffrementRsa(a)<<endl<<endl;

    cout << "//--------------------------------------Programme 2 RSA---------------------------------------------------//" << endl;


    NewKey.chargementClefs("ClePublic.pem", "ClePrive.pem");
    NewKey.chiffreDansFichier("Banane2", "FichierABanane.txt");
    cout << NewKey.dechiffreFichier("FichierABanane.txt") << endl;

    cout << "//--------------------------------------Programme 5 RSA---------------------------------------------------//" << endl;


    NewKey.chargementClefs("ClePublic.pem", "ClePrive.pem");
    NewKey.chiffrementFichier("Fichier1.txt", "Fichier2.txt");
    NewKey.dechiffrementFichier("Fichier2.txt", "Fichier1-1.txt");

    cout << "//--------------------------------------Programme SHA256---------------------------------------------------//" << endl;

    HashGestion NewKey2;

    cout << NewKey2.CalculateFileSHA256("Fichier3.txt") << endl << endl;

    cout << "//--------------------------------------Mini event---------------------------------------------------//" << endl;

    */
    AesGestion NewKey3;
    RsaGestion NewKey;
    //cout << "Test " << endl;

    NewKey.chargementClefs("ClePublic.pem","ClePrive.pem" );
 
    NewKey.dechiffrementFichier("clefasePA.txt", "testDechiffrement.key", false);

    NewKey3.LoadAESKeyFromFile("testDechiffrement.key");

    NewKey3.DecryptFileAES256("histoire.txt", "PA.txt");



    return 0;
}