#include <iostream>
#include <fstream>

int main(int argc ,char **argv) {
    std::string basicString;

    size_t pos;


    if (argc == 4) {
        std::string filename = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        if (s1.empty() || s2.empty()) {
            std::cout << "Error: write true arg" << std::endl;
            return 0;
        }
        else if (s1 == s2)
        {
            std::cout << "WTF BRO ?" << std::endl;
            return 0;
        }
        std::ifstream myFile(filename);
        std::ofstream newFile(filename + ".replace");
        if (myFile.is_open()) {
            while (std::getline(myFile, basicString))
            {
                pos = 0;
                while (true)
                {
                    pos = basicString.find(s1, pos);
                    if (pos != std::string::npos)
                    {
                        basicString.replace(pos, s1.length(), s2);
                        pos += s2.length();
                    }
                    else
                        break;
                }
                newFile << basicString;
                if (!myFile.eof())
                    newFile << std::endl;
            }
            myFile.close();
            newFile.close();
        }
        else  std::cout << "bad filename" << std::endl;
    } else std::cout << "use filename s1 s2 (this is simple sed)" << std::endl;

    return 0;
}
