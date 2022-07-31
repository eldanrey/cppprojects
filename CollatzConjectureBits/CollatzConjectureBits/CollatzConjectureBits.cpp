// CollatzConjectureBits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
    1100 1100       - 204
   x       11       - 3
   ------------
    1100 1100
   1100 1100
   -----------
  0010 0110 0100    - 612


      1100 1110       - 206
   /       0010       - 2
   ------------
   0110 0110

   //subtraction in bits
   //addition in bits
   //multiplication in bits
   //bits manipulation
*/

#include <iostream>
#include <fstream>

std::ofstream writefile;
typedef long long ll;

class Collatz {
    std::string BIT;
public:
    /*Collatz(const std::string& natNum) {
        BIT = "";
        ll n = natNum.size();
        for (ll i = n - 1; i >= 0; i--) {
            if (natNum[i] == '0' || natNum[i] == '1')BIT.push_back(natNum[i]);
                
        } 
    }*/
    std::string getNthDegree(const std::string& natNum, int degree) {
        /*
            THIS FUNCTION TAKES THE NATURAL NUMBER IN BITS
            AND THE NUBMER OF DEGREES
            AND RETURN THE COLLATZ OPERATION (3N+1)
            N DEGREES TIMES;
        */
        std::string originalBit = Reverse(natNum);
        for (int i = 1; i <= degree; i++) {
            originalBit=collatzOperation(originalBit);
        }
        return Reverse(originalBit);
    }
    ll getHighestDegree(const std::string natNum) {
        ll count = 1;
        writefile.open("what.txt", std::ios::out);
        std::string originalBit = Reverse(natNum);
        while (originalBit.size()!=1) {
            originalBit = collatzOperation(originalBit);
            writefile << Reverse(originalBit) << "\n";
            count++;
        }
        return count;
    }

    std::string collatzOperation(const std::string& natNum) {
        std::string originalBit = natNum;
        if (originalBit[0] == '0') {
            originalBit = evenOperation(originalBit);
        }
        else originalBit = oddOperation(originalBit);
        return originalBit;
    }
 

    std::string oddOperation(std::string& natNum) {
        // odd operation is 3*(natNUm) + 1
        /*
            in bits, multiplying by three is just adding the original bits to 
            the bits moved 1 time to the left

            for example 204 - 1100 1100 multiplied by 3 is just the same as adding 
            1100 1100 to 0001 1001 1000 

            the opreation here is
            just adding the original number incremented by 1
            to the original number shifted to the left
        */
        std::string leftShiftedBit = "0" + natNum;
        std::string originalBit = natNum.append("0");
        std::string answer = "";
        std::string carry = "1";
        for (ll i = 0; i <= leftShiftedBit.size() - 1; i++) {
            if (((leftShiftedBit[i] == '0' && originalBit[i] == '1') || (originalBit[i] == '0' && leftShiftedBit[i] == '1')) && carry == "0") {
                answer += '1';
                carry = "0";
            }
            else if (((leftShiftedBit[i] == '1' && originalBit[i] == '1') || (originalBit[i] == '1' && leftShiftedBit[i] == '1')) && carry == "0") {
                answer += '0';
                carry = "1";
            }
            else if (((leftShiftedBit[i] == '1' && originalBit[i] == '1') || (originalBit[i] == '1' && leftShiftedBit[i] == '1')) && carry == "1") {
                answer += '1';
                carry = "1";
            }
            else if (((leftShiftedBit[i] == '0' && originalBit[i] == '0') || (originalBit[i] == '0' && leftShiftedBit[i] == '0')) && carry == "1") {
                answer += '1';
                carry = "0";
            }
            else answer += '0';
        }
        if (carry == "1")answer += '1';
        return answer;
        }

    std::string evenOperation(const std::string natNum) {
        /*
            FOR THE EEVNE OPERATION
            WE JUST NEED TO SHIFT THE BITS TO THE RIGHT
            AND POP BACK(REMOVE) THE LAST BIT 

            IN THIS CASE, WE REVERSED THE BITS FOR SIMPLE CALCULATION FOR ODD OPERATIONS
            THEREFORE NOW WE JUST NEED TO REMOVE THE FIRST ELEMENT IN THE STRING(BITS)

            FOR EXAMPLE 
            1010 -> 10/2 = 5
            0101 -> 5                   THIS IS FOR NORMAL OPERATION

            IN OUR CASE, WE REVERSED THE BITS So,
            11100110010 -> 1842
            REVERSED OF 1842 is -> 01001100111

            FOR NORMAL OPERATION OF DIVIDING BY 2:
                ONLY SHIFT THE (1's) TO THE RIGHT 
                11100110010 -> 01110011001

            FOR REVERSED OPERATION
            SHIFT THE BITS TO THE LEFT THEN REMOVE THE FIRST ELEMENT 
            01001100111 -> 1001100111


        */
        if (natNum.size() <= 1)throw("ERROR");
        std::string originalBit = natNum;
        originalBit.erase(0,1);
        return originalBit;
    }


    
   std::string Reverse(const std::string& print){
        ll n = print.size();
        std::string answer = "";
        for (ll i = n - 1; i >= 0; i--) {
            answer.push_back(print[i]);
        }
        return answer;
    }


};


int main()
{
                                   
    Collatz col; 
    ll answer = col.getHighestDegree("1000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001");
    std::cout << answer;
}
