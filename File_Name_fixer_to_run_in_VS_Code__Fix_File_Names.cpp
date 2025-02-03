#include <iostream>
#include <filesystem>
#include <string>

namespace fs = std::filesystem;

void renameFile(const std::string &filePath) {
    fs::path oldPath(filePath);

    // Check if file exists
    if (!fs::exists(oldPath)) {
        std::cout << "Error: File not found!" << std::endl;
        return;
    }

    std::string oldFilename = oldPath.filename().string();
    std::string newFilename = oldFilename;

    // Replace spaces with underscores
    for (char &ch : newFilename) {
        if (ch == ' ') {
            ch = '_';
        }
    }

    // If the filename was changed, rename the file
    if (oldFilename != newFilename) {
        fs::path newPath = oldPath.parent_path() / newFilename;
        fs::rename(oldPath, newPath);
        std::cout << "File renamed to: " << newPath.string() << std::endl;
    } else {
        std::cout << "No renaming needed. File name is already valid." << std::endl;
    }
}

int main() {
    std::string filePath;
    
    std::cout << "Enter the full file path: ";
    std::getline(std::cin, filePath);

    renameFile(filePath);

    return 0;
}
