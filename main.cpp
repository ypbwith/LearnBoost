#include <stdio.h>
#include <iostream>
#include <vector>
#include <boost/shared_ptr.hpp>
#include <boost/shared_array.hpp>

using namespace std;

template <typename T>
T *create()
{
  return new T;
}

int main()
{
    printf("====Learn Boost !====\n");

//    std::vector<boost::shared_ptr<int> > v;
//    v.push_back(boost::shared_ptr<int>(new int(1)));
//    v.push_back(boost::shared_ptr<int>(new int(2)));

//    for (int i = 0;i < v.size();i++)
//    {
//          printf("v = %d \n", * v[i]);
//    }

//    printf("\n");

//    boost::shared_array<int> i1(new int[2]);
//    boost::shared_array<int> i2(i1);
//    i1[0] = 1;
//    std::cout << i2[0] << std::endl;

//    std::vector<int*> v;
//    v.push_back(create<int>());
//    *v[0] = 2;

//    cout << *v[0] << "\n";

    return 0;
}
