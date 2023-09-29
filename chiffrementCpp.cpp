#include "cryptlib.h"
#include "rijndael.h"
#include "modes.h"
#include "files.h"
#include "osrng.h"
#include "hex.h"
#include "RsaGestion.h"

#include <iostream>
#include <string>

    std::string nomCheminPublic, nomCheminPrive;
    int taille;

int main()
{
    using namespace CryptoPP;


    RsaGestion NewKey;

    NewKey.generationClef("ClePublic.pem", "ClePrive.pem", 1024);
 

    return 0;
}