#include <iostream>

int main(){

    std::string platform;
std::string architecture;
std::string machine;
bool CanRun(){
    return (platform == "Windows" || platform == "Linux") && (architecture == "64bit" && machine == "AMD64")
}


}

