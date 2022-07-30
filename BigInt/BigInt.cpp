#include <iostream>
#include <cmath>


class BigInt {
    std::string digits;
public:
    BigInt(const std::string& s) {
        for (int i = s.size()-1; i >= 0; i--) {
            if (isdigit(s[i])) {
                digits.push_back(s[i]);
            }
        }
    }
     friend std::ostream& operator << (std::ostream& cout, BigInt s) {
        for (int i = s.digits.size()-1; i >=0 ; i--) {
            std::cout << s.digits[i];  
        }
        return cout;
    }

      friend int Size(const BigInt& a) {
         return a.digits.size();
     }
      int operator [](const size_t i) const{
          if (digits.size() <= i || i < 0)throw("ERROR");
          return digits[i];
      }

     friend BigInt& operator +=(BigInt &a, const BigInt& b) {
         int carry = 0,sum=0;
         int n = Size(a), m =Size(b);
         if (m>n) a.digits.append(m-n, 0);
         n = Size(a);
             for (int i = 0; i < n; i++) {
                 if (i < m)sum = (a.digits[i] + b.digits[i]) + carry;
                 else sum = a.digits[i] + carry;
                 carry=
                 a.digits[i] = (sum % 10);
             }
             if (carry>0)a.digits.push_back(carry);
             return a;
     
     }

};

int main()
{
    BigInt bi("1234"), bi2("1234");
    bi2 += bi;
    std::cout << bi2;
    std::cout << '\n';
    std::cout << Size(bi);

}
