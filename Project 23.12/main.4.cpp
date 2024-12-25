#include <iostream>
#include <boost/algorithm/string.hpp>
int main() {
    std::string input ="Msu\tBaku\tLab";
    std::vector<std::string> result;
    boost::split(result,input,boost::is_any_of("\t"));
    for(unsigned int i=0;i<result.size();i++) {
        std::cout <<result[i] << std::endl;
    }
}
