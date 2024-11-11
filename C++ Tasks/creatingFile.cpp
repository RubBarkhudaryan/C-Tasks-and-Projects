#include <iostream>
#include <fstream>  // for file handling

int main() {
    // Create an output file stream
    std::ofstream outFile("example.txt");

    // Check if the file opened successfully
    if (!outFile) {
        std::cerr << "Error: Could not open the file for writing!" << std::endl;
        return 1;
    }

    // Write data to the file
    outFile << "Hello, World!" << std::endl;
    outFile << "Writing to a file in C++ is easy!" << std::endl;

    // Close the file
    outFile.close();

    std::cout << "Data written to the file successfully." << std::endl;
    return 0;
}
