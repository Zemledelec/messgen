using namespace std;

#include "messgen/messgen.h"
#include "messgen/stl.h"

#include <messgen/msgs/messgen_test/messages.h>

#include <iostream>
#include <vector>
#include <string>



int main()
{
    vector<std::string> msg{"WIP: proto test"};

    for (const std::string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}