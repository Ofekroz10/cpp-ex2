#pragma once
#include <iostream>
#include <string>
#include<exception>
#include<vector>
using std::string;
using namespace std;

namespace family
{
    class Tree
    {
        public:
            Tree(string s);
            Tree& addFather(string child, string father);
            Tree& addMother(string s, string mother);
            string relation(string s);
            string find(string s);
            void display();
            string remove(string s);

        private:
        string data;
        Tree * father;
        Tree * mother;

        Tree * findTree(string name);
        int relativeInt(string name, int fm);

    };


}

