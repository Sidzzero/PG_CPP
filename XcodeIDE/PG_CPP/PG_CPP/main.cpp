//
//  main.cpp
//  PG_CPP
//
//  Created by Srikanth_Siddhu on 06/08/21.
//

#include <iostream>
#include "Sales_item.h"
#include <vector>
using namespace std;

extern  int testing ;

int cValueExprTest = 2;

int CountValley(int count, std::string des);
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Welcome to new beginining \n"<<std::endl;
    /*
    int v1 = 0;
    int v2 = 0;
    std::cout<<"Enter Two numbers"<<std::endl;
    std::cin>>v1>>v2;
    int sum = v1+ v2;
    std::cout<<"Sum of Two Numbers: "<<sum<<std::endl;
    */
    /*
     std::cout<<"Will try loop break"<<std::endl;
     
    int inputVal = 0;
    int inputedSum = 0;
    while(std::cin>>inputVal)
    {
        inputedSum+=inputVal;
    }
    std::cout<<"Sum of all input values is "<<inputedSum<<std::endl;
     */
    
    /*
    std::cout<<" Duplicate count test";
    int inputVal = 0, inputtedCount = 0;
    int inputFirst = 0;
    if(std::cin>>inputFirst)
    {
        inputVal = inputFirst;
        inputtedCount++;
        while(std::cin>>inputVal)
        {
            if(inputFirst == inputVal)
            {
                inputtedCount++;
            }
            else
            {
                std::cout<<"Number "<<inputFirst<<" appeared "<<inputtedCount <<" times!"<<std::endl;
                inputtedCount = 1;
                inputFirst = inputVal;
            }
        }
    }
    
    */
    
    //Bookstore
    Sales_item item1 , item2;
  //  std::cin>>item1;
  //  std::cin>>item2;
   // std::cout<<item1 + item2;
    /*
    unsigned char a = -1;
 //   std::cout<<":"<<a;
    int iValue = 1;
    int iValue2 = 25;
    int *ip = &iValue;
    int &refValue = iValue;
    const int &refValueLiteral = 32;//(creates a temp object)
    ip = nullptr;
    ip = &refValue;
    double fVal = 3.14f;
    const int &refPiVal = fVal;
    
    std::cout<<"-"<<refPiVal;
   // std::cout<<"-:"<<*ip<<","<<refValue<<","<<iValue;
   */
    int iValue1 = 1;
    int iValue2 = 2;
    const int *cptr = &iValue1;
    cptr = &iValue1;
   // *cptr = 3;ERROR
    std::cout<<"***"<<testing;
  
    constexpr int *cpexpr =&cValueExprTest;
   
    //TYPE DEF EXAMPLES !
    char cI = 'X';
    typedef  char *pstring;
    const pstring test = &cI;
    *test = 'B';
    
    decltype ( (iValue1) ) testDEc  = iValue2;
    
    int testD  = {1};
    
    
    
    /*
    std::string strTestInput;
    std::string::size_type len;
    std::string s1 ="Zello human", s2 = "Hiya";
    std::cout<<"This"<<(("Hello")<("Hello Man"))<<std::endl;
    std::cout<<(s1>s2)<<std::endl;
    
    std::string strTestINit = s1+"z"+"1"+s1;
    
    for( decltype(s1.size()) i =0;i<s1.length() && !isspace(s1[i]);i++)
    {
        
        s1[i] = toupper(s1[i]);
    }
    std::cout<<s1;
    while(getline(std::cin,strTestInput))
    {
        len = strTestInput.length();
        if(len>2)
        std::cout<<"InputString:"<<strTestInput<<std::endl;
    }
    std::cout<<"Outputstring !"<<strTestInput;
    */
    
        //Vector
        vector<string> vecA ={"a"};
        vector<string> vecB ={vecA};
        vector<string> vecC{"a","c"};
        //vector<string &> vecRef;
        vector<string> vecD{1 , "s"};
        
        vector<Sales_item> aa(1);
        vector<Sales_item> bb(2) ;
        bool result = aa == bb;
    cout<<"value:"<<result<<endl;
    
    //Program t
    
    return 0;
}

