#include <stdio.h>
#include <iostream>
#include <vector>
#include <boost/shared_ptr.hpp>

using namespace std;

int main()
{
    printf("====Learn Boost !====\n");

    std::vector<boost::shared_ptr<int> > v;
    v.push_back(boost::shared_ptr<int>(new int(1)));
    v.push_back(boost::shared_ptr<int>(new int(2)));

    for (int i = 0;i < v.size();i++)
    {
          printf("v = %d \n", * v[i]);
    }

    printf("\n");

    return 0;
}
