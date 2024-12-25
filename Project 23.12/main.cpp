#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
int128_t boost_product(long long A,long long B) {
    int128_t ans=(int128_t)A*B;
    return ans;
}
int main() {
    long long first=9876567588798969;
    long long second=967845637856746;
    std::cout<<"Product of "<<first<<" and "<<second<<" is "<<boost_product(first,second);
    return 0;
}
