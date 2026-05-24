#include <iostream>
#include <string>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  // TODO: Uncomment the code below to pass the first stage
  while(1){
    std::cout << "$ ";
    std::string input;
    std::cin >> input;
    if(input=="echo"){
      std::string output;
      std::cin >> output;
      std::cout << output << '\n';
    }
    else if(input=="exit"){
      break;
    }
    else std::cout << input << ": command not found\n";
  }
}
