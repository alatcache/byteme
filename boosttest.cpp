//
//  boosttest.cpp
//  
//
//  Created by Al Pirrie on 02/04/2014.
//
//

#include "boosttest.h"
#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;
    
    std::for_each(
                  in(std::cin), in(), std::cout << (_1 * 3) << " " );
}