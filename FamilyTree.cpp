#include <iostream>
#include <string>
#include<exception>
#include<vector>
#include "FamilyTree.hpp"
using family::Tree;
using std::string;
using std::vector;
using namespace std;

namespace family
{
    Tree::Tree(string s)
    {
        this->data = s;
    }

    Tree& Tree::addFather(string child, string father)
    {

    }

    Tree& Tree::addMother(string child, string mother)
    {

    }

    string Tree::relation(string s)
    {

    }

    string Tree::find(string s)
    {

    }

    string Tree::display()
    {

    }

    string Tree::remove(string s)
    {

    }


}