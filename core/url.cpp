#include <iostream>
#include <string>

int main() {
    std::string url;

    std::cout << "Enter a URL: ";
    std::getline(std::cin, url);   // user can type any URL

    // Remove protocol (http:// or https://)
    std::string protocol = "https://";
    size_t start = url.find(protocol);
    if (start != std::string::npos) {
        start += protocol.length();
    } else {
        protocol = "http://";
        start = url.find(protocol);
        if (start != std::string::npos)
            start += protocol.length();
        else
            start = 0; // no protocol found
    }

    // Find the end of the domain
    size_t end = url.find('/', start);

    // Extract the forum/domain name
    std::string forumName = url.substr(start, end - start);

    std::cout << "Forum name: " << forumName << "\n";
}
