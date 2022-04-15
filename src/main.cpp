#include "../headers/allHeaders.h"

#include <filesystem>
#include <iostream>



int main(int argc, char** argv)
{
    std::cout << "Execution started" << std::endl;


    //!If first argument 1, input from jason file
    //!If first argument 2, input from text file

    //!Hard coding all the file Names;
    std::vector<std::string> fileNames;
    fileNames.emplace_back("/data/tinyEWD.txt");
    fileNames.emplace_back("/data/mediumEWD.txt");    
//    fileNames.emplace_back("/data/largeEWD.txt");    
//    fileNames.emplace_back("/data/1000EWD.txt");    
//    fileNames.emplace_back("/data/10000EWD.txt");


    //!Getting the current path
    auto currPath = std::filesystem::current_path().string();

    for(size_t fileCount = 0; fileCount < fileNames.size(); ++fileCount)    //!Do all operations in this loop
    {
        auto currFileName = fileNames[fileCount];
        std::cout << "Reading graph from " << currFileName <<std::endl;
        std::string fullFilePath = currPath + currFileName;
        Graph currGraph(fullFilePath);
        int tempDebugVar = 0;
    }
    std::cout << "Exited into main fxn" << std::endl;

    return 0;
}