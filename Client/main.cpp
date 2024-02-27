#include <iostream>
#include <filesystem>


int main(int argc, char* argv[])
{

    std::cout << "Client: " << argv[0] << " @ " << std::filesystem::current_path().generic_string() << std::endl;
}
