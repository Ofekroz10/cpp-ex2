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
        Tree * t = new Tree("s");
        return *t;
    }

    Tree& Tree::addMother(string child, string mother)
    {
                Tree * t = new Tree("s");
        return *t;
    }

    string Tree::relation(string s)
    {
        return "s";
    }

    string Tree::find(string s)
    {
        return "s";
    }

    string Tree::display()
    {
        return "s";
    }

    string Tree::remove(string s)
    {
        return "s";
    }


}