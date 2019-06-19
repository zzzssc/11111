//
//  main.cpp
//  11111
//
//  Created by s20181106119 on 2019/6/19.
//  Copyright © 2019 s20181106119. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a,b;
    
    ifstream in("/Users/s20181106119/Desktop/学生信息.txt");
    {
        
        in>>a>>b;
    }
    
    
    
    ofstream output("/Users/s20181106119/Desktop/最终排名.txt");
    {
        output<< "c=" <<a+b;
    }
    
    
    return 0;
}

