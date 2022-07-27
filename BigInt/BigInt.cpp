#include <iostream>
#pragma warning(4:4596)


class BigInt {
public:
    std::string digits;
    BigInt(const std::string &);

   friend std::ostream &operator <<(std::ostream& COUT,  BigInt &a) {
        for (int i = a.digits.size() - 1; i >= 0; i--)
           std::cout << (short)a.digits[i];
        return COUT;
    }
};
BigInt::BigInt(const std::string& s="") {
    digits = "";
    int n = s.size();
    for (int i = n - 1; i >= 0; i--) {
        if (!isdigit(s[i]))
            throw("ERROR");
        digits.push_back(s[i] - '0');
    }
}
int main()
{
    BigInt bi("313213213123123123123213213122312");
    std::cout << bi;
}
