#include "../headers/allHeaders.h"

#include <filesystem>
#include <iostream>



int main(int argc, char** argv)
{
    std::cout << "Execution started" << std::endl;

    //!Hard coding all the file Names;
    std::vector<std::string> fileNames;
    fileNames.emplace_back("tinyEWD.txt");
    fileNames.emplace_back("mediumEWD.txt");
//    fileNames.emplace_back("largeEWD.txt");
    fileNames.emplace_back("1000EWD.txt");
    fileNames.emplace_back("10000EWD.txt");


    //!Getting the current path
    auto currPath = std::filesystem::current_path().string();

    for(size_t fileCount = 0; fileCount < fileNames.size(); ++fileCount)    //!Do all operations in this loop
    {
        auto currFileName = fileNames[fileCount];
        std::string currFileNameAppended =  std::string("/data/") + currFileName;

        std::cout << "Reading graph from " << currFileNameAppended <<std::endl;

        std::string fullFilePath = currPath + currFileNameAppended;
        Graph currGraph(fullFilePath);

        //!Create a new log file here
        std::string fulLogPath = currPath + std::string("/test/log_") + currFileName;
    
        std::fstream fileStream(fulLogPath, std::ios::app);
        fileStream << " " << std::endl;
        fileStream << " " << std::endl;
        fileStream << " " << std::endl;
        fileStream << " " << std::endl;
        fileStream << "================" << std::endl;
        fileStream << "================" << std::endl;
        fileStream << "New Run" << std::endl;

        Test test;
        test.DoTestingOnThisGraph(currGraph, fulLogPath);

        int tempDebugVar = 0;
    }
    std::cout << "Exited into main fxn" << std::endl;

    return 0;
}