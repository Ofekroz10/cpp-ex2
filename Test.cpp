#include "doctest.h"
#include "FamilyTree.hpp"
using namespace family;

#include <string>
using namespace std;



TEST_CASE("Checking add father") 
{
Tree T ("ofek0");
string father= ""; 
father = "ofek1"; 
 T.addFather("ofek0",father); 
CHECK(T.relation(father) == string("father")); 

father = "ofek2"; 
 T.addFather("ofek1",father); 
CHECK(T.relation(father) == string("grandfather")); 

father = "ofek3"; 
 T.addFather("ofek2",father); 
CHECK(T.relation(father) == string("grand-grandfather")); 

father = "ofek4"; 
 T.addFather("ofek3",father); 
CHECK(T.relation(father) == string("grand-grand-grandfather")); 

father = "ofek5"; 
 T.addFather("ofek4",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grandfather")); 

father = "ofek6"; 
 T.addFather("ofek5",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grandfather")); 

father = "ofek7"; 
 T.addFather("ofek6",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grandfather")); 

father = "ofek8"; 
 T.addFather("ofek7",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek9"; 
 T.addFather("ofek8",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek10"; 
 T.addFather("ofek9",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek11"; 
 T.addFather("ofek10",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek12"; 
 T.addFather("ofek11",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek13"; 
 T.addFather("ofek12",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek14"; 
 T.addFather("ofek13",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek15"; 
 T.addFather("ofek14",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek16"; 
 T.addFather("ofek15",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek17"; 
 T.addFather("ofek16",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek18"; 
 T.addFather("ofek17",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek19"; 
 T.addFather("ofek18",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek20"; 
 T.addFather("ofek19",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek21"; 
 T.addFather("ofek20",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek22"; 
 T.addFather("ofek21",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek23"; 
 T.addFather("ofek22",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek24"; 
 T.addFather("ofek23",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek25"; 
 T.addFather("ofek24",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek26"; 
 T.addFather("ofek25",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek27"; 
 T.addFather("ofek26",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek28"; 
 T.addFather("ofek27",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek29"; 
 T.addFather("ofek28",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek30"; 
 T.addFather("ofek29",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek31"; 
 T.addFather("ofek30",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek32"; 
 T.addFather("ofek31",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek33"; 
 T.addFather("ofek32",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 

father = "ofek34"; 
 T.addFather("ofek33",father); 
CHECK(T.relation(father) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather")); 
}

TEST_CASE("Checking add mother") 
{
Tree T ("ofek0");
string mother=""; 
mother = "ofek1"; 
 T.addMother("ofek0",mother); 
CHECK(T.relation(mother) == string("mother")); 

mother = "ofek2"; 
 T.addMother("ofek1",mother); 
CHECK(T.relation(mother) == string("grandmother")); 

mother = "ofek3"; 
 T.addMother("ofek2",mother); 
CHECK(T.relation(mother) == string("grand-grandmother")); 

mother = "ofek4"; 
 T.addMother("ofek3",mother); 
CHECK(T.relation(mother) == string("grand-grand-grandmother")); 

mother = "ofek5"; 
 T.addMother("ofek4",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grandmother")); 

mother = "ofek6"; 
 T.addMother("ofek5",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grandmother")); 

mother = "ofek7"; 
 T.addMother("ofek6",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek8"; 
 T.addMother("ofek7",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek9"; 
 T.addMother("ofek8",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek10"; 
 T.addMother("ofek9",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek11"; 
 T.addMother("ofek10",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek12"; 
 T.addMother("ofek11",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek13"; 
 T.addMother("ofek12",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek14"; 
 T.addMother("ofek13",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek15"; 
 T.addMother("ofek14",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek16"; 
 T.addMother("ofek15",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek17"; 
 T.addMother("ofek16",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek18"; 
 T.addMother("ofek17",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek19"; 
 T.addMother("ofek18",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek20"; 
 T.addMother("ofek19",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek21"; 
 T.addMother("ofek20",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek22"; 
 T.addMother("ofek21",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek23"; 
 T.addMother("ofek22",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek24"; 
 T.addMother("ofek23",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek25"; 
 T.addMother("ofek24",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek26"; 
 T.addMother("ofek25",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek27"; 
 T.addMother("ofek26",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek28"; 
 T.addMother("ofek27",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek29"; 
 T.addMother("ofek28",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek30"; 
 T.addMother("ofek29",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek31"; 
 T.addMother("ofek30",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek32"; 
 T.addMother("ofek31",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek33"; 
 T.addMother("ofek32",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 

mother = "ofek34"; 
 T.addMother("ofek33",mother); 
CHECK(T.relation(mother) == string("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandmother")); 
}

TEST_CASE("Checking find")
{
Tree T("ofek0");
string father=""; 
father = "ofek1"; 
 T.addFather("ofek0",father); 
CHECK(T.find("father") == string("ofek1")); 

father = "ofek2"; 
 T.addFather("ofek1",father); 
CHECK(T.find("grandfather") == string("ofek2")); 

father = "ofek3"; 
 T.addFather("ofek2",father); 
CHECK(T.find("grand-grandfather") == string("ofek3")); 

father = "ofek4"; 
 T.addFather("ofek3",father); 
CHECK(T.find("grand-grand-grandfather") == string("ofek4")); 

father = "ofek5"; 
 T.addFather("ofek4",father); 
CHECK(T.find("grand-grand-grand-grandfather") == string("ofek5")); 

father = "ofek6"; 
 T.addFather("ofek5",father); 
CHECK(T.find("grand-grand-grand-grand-grandfather") == string("ofek6")); 

father = "ofek7"; 
 T.addFather("ofek6",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grandfather") == string("ofek7")); 

father = "ofek8"; 
 T.addFather("ofek7",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grandfather") == string("ofek8")); 

father = "ofek9"; 
 T.addFather("ofek8",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek9")); 

father = "ofek10"; 
 T.addFather("ofek9",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek10")); 

father = "ofek11"; 
 T.addFather("ofek10",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek11")); 

father = "ofek12"; 
 T.addFather("ofek11",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek12")); 

father = "ofek13"; 
 T.addFather("ofek12",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek13")); 

father = "ofek14"; 
 T.addFather("ofek13",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek14")); 

father = "ofek15"; 
 T.addFather("ofek14",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek15")); 

father = "ofek16"; 
 T.addFather("ofek15",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek16")); 

father = "ofek17"; 
 T.addFather("ofek16",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek17")); 

father = "ofek18"; 
 T.addFather("ofek17",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek18")); 

father = "ofek19"; 
 T.addFather("ofek18",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek19")); 

father = "ofek20"; 
 T.addFather("ofek19",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek20")); 

father = "ofek21"; 
 T.addFather("ofek20",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek21")); 

father = "ofek22"; 
 T.addFather("ofek21",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek22")); 

father = "ofek23"; 
 T.addFather("ofek22",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek23")); 

father = "ofek24"; 
 T.addFather("ofek23",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek24")); 

father = "ofek25"; 
 T.addFather("ofek24",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek25")); 

father = "ofek26"; 
 T.addFather("ofek25",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek26")); 

father = "ofek27"; 
 T.addFather("ofek26",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek27")); 

father = "ofek28"; 
 T.addFather("ofek27",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek28")); 

father = "ofek29"; 
 T.addFather("ofek28",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek29"));

father = "ofek29"; 
 T.addFather("ofek28",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek29"));

father = "ofek29"; 
 T.addFather("ofek28",father); 
CHECK(T.find("grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grand-grandfather") == string("ofek29"));

}


