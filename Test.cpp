
#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of v and w") {
    string text = "xxx woWVv yyy";
    CHECK(find(text, "woWVv") == string("woWVv"));
    CHECK(find(text, "woWVw") == string("woWVv"));
    CHECK(find(text, "woWVV") == string("woWVv"));
    CHECK(find(text, "woWVW") == string("woWVv"));
    CHECK(find(text, "woWVv") == string("woWVv"));
    CHECK(find(text, "WoWVv") == string("woWVv"));
    CHECK(find(text, "voWVv") == string("woWVv"));
    CHECK(find(text, "VoWVv") == string("woWVv"));
    CHECK(find(text, "woWVv") == string("woWVv"));
    CHECK(find(text, "wowVv") == string("woWVv"));
    CHECK(find(text, "wovVv") == string("woWVv"));
    CHECK(find(text, "woVVv") == string("woWVv"));
    CHECK(find(text, "woWVv") == string("woWVv"));
    CHECK(find(text, "woWvv") == string("woWVv"));
    CHECK(find(text, "woWwv") == string("woWVv"));
    CHECK(find(text, "woWWv") == string("woWVv"));

}
TEST_CASE("Test replacement of b,f and p") {
    string text = "xxx bBfFpP yyy";
CHECK(find(text, "bBfFpP") == string("bBfFpP"));
CHECK(find(text, "BBfFpP") == string("bBfFpP"));
 CHECK(find(text, "fBfFpP") == string("bBfFpP"));
 CHECK(find(text, "FBfFpP") == string("bBfFpP"));
CHECK(find(text, "pBfFpP") == string("bBfFpP"));
 CHECK(find(text, "PBfFpP") == string("bBfFpP"));

CHECK(find(text, "bBfFpP") == string("bBfFpP"));
CHECK(find(text, "bBFFpP") == string("bBfFpP"));
CHECK(find(text, "bBbFpP") == string("bBfFpP"));
CHECK(find(text, "bBBFpP") == string("bBfFpP"));
CHECK(find(text, "bBpFpP") == string("bBfFpP"));
CHECK(find(text, "bBPFpP") == string("bBfFpP")); 

CHECK(find(text, "bBfFpP") == string("bBfFpP"));
CHECK(find(text, "bBfFPP") == string("bBfFpP"));
CHECK(find(text, "bBfFbP") == string("bBfFpP"));
CHECK(find(text, "bBfFBP") == string("bBfFpP"));
CHECK(find(text, "bBfFfP") == string("bBfFpP"));
CHECK(find(text, "bBfFFP") == string("bBfFpP")); 

CHECK(find(text, "bBfFpP") == string("bBfFpP"));
CHECK(find(text, "bbfFpP") == string("bBfFpP"));
CHECK(find(text, "bffFpP") == string("bBfFpP"));
CHECK(find(text, "bFfFpP") == string("bBfFpP"));
CHECK(find(text, "bpfFpP") == string("bBfFpP"));
CHECK(find(text, "bPfFpP") == string("bBfFpP")); 

CHECK(find(text, "bBfFpP") == string("bBfFpP"));
CHECK(find(text, "bBffpP") == string("bBfFpP"));
CHECK(find(text, "bBfbpP") == string("bBfFpP"));
CHECK(find(text, "bBfBpP") == string("bBfFpP"));
CHECK(find(text, "bBfppP") == string("bBfFpP"));
CHECK(find(text, "bBfPpP") == string("bBfFpP")); 

CHECK(find(text, "bBfFpP") == string("bBfFpP"));
CHECK(find(text, "bBfFpp") == string("bBfFpP"));
CHECK(find(text, "bBfFpb") == string("bBfFpP"));
CHECK(find(text, "bBfFpB") == string("bBfFpP"));
CHECK(find(text, "bBfFpf") == string("bBfFpP"));
CHECK(find(text, "bBfFpF") == string("bBfFpP"));
}                                    
TEST_CASE("Test replacement of d and t") {
    string text = "Uriel and Yair are the best ";
    CHECK(find(text, "best") == string("best"));
    CHECK(find(text, "besT") == string("best"));
    CHECK(find(text, "beSt") == string("best"));
    CHECK(find(text, "beSt") == string("best"));
    CHECK(find(text, "bezt") == string("best"));
    CHECK(find(text, "beZt") == string("best"));
    CHECK(find(text, "beZT") == string("best"));
    CHECK(find(text, "bezT") == string("best"));
}
TEST_CASE("Test replacement of o and u") {
    string text = "Uriel and Yair are the best";
    CHECK(find(text, "uriel") == string("Uriel"));
    CHECK(find(text, "oriel") == string("Uriel"));
    CHECK(find(text, "Oriel") == string("Uriel"));
    CHECK(find(text, "Uriel") == string("Uriel"));
    CHECK(find(text, "UrIel") == string("Uriel"));
    CHECK(find(text, "URIEL") == string("Uriel"));
    CHECK(find(text, "URIEl") == string("Uriel"));
}
TEST_CASE("Test replacement of i and y") {
    string text = "Uriel and Yair are the best";
    CHECK(find(text, "Yair") == string("Yair"));
    CHECK(find(text, "yair") == string("Yair"));
    CHECK(find(text, "iair") == string("Yair"));
    CHECK(find(text, "Iair") == string("Yair"));
     CHECK(find(text, "iaIr") == string("Yair"));
     CHECK(find(text, "IaIr") == string("Yair"));
    CHECK(find(text, "yayr") == string("Yair"));
    CHECK(find(text, "yaIr") == string("Yair"));
    CHECK(find(text, "yaYr") == string("Yair"));
    CHECK(find(text, "yayr") == string("Yair"));
   CHECK(find(text, "YaYr") == string("Yair"));

}

TEST_CASE("Test replacement of s and z") {
    string text = "We dont have a zebra ";
    CHECK(find(text, "zebra") == string("zebra"));
    CHECK(find(text, "Zebra") == string("zebra"));
    CHECK(find(text, "sebra") == string("zebra"));
    CHECK(find(text, "Sebra") == string("zebra"));

 CHECK(find(text, "zebrA") == string("zebra"));
    CHECK(find(text, "ZebrA") == string("zebra"));
    CHECK(find(text, "sebrA") == string("zebra"));
    CHECK(find(text, "SebrA") == string("zebra"));
     CHECK(find(text, "seBra") == string("zebra"));
     CHECK(find(text, "seBrA") == string("zebra"));

}

TEST_CASE("Test replacement of big letter and small letter") {
    string text = "Uriel and Yair are the best";
    CHECK(find(text, "yair") == string("Yair"));
    CHECK(find(text, "YAir") == string("Yair"));
    CHECK(find(text, "YaIr") == string("Yair"));
    CHECK(find(text, "YAir") == string("Yair"));
    CHECK(find(text, "YaIR") == string("Yair"));
    CHECK(find(text, "yAIR") == string("Yair"));
    CHECK(find(text, "IAIR") == string("Yair"));   
     CHECK(find(text, "pest") == string("best"));

}