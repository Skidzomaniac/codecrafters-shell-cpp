#include <iostream>
#include <string>

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  // TODO: Uncomment the code below to pass the first stage
  while(1){
    std::cout << "$ ";
    std::string command;
    std::getline(std::cin, command);
    if(command.substr(0, 5) == "echo "){
      std::cout << command.substr(5) << std::endl;
    }
    else if(command.substr(0, 5) == "type "){
      if(command.substr(5) == "type"){
        std::cout << "type is a shell builtin" << std::endl;
      }
      if(command.substr(5) == "echo"){
        std::cout << "echo is a shell builtin" << std::endl;
      }
      if(command.substr(5) == "exit"){
        std::cout << "exit is a shell builtin" << std::endl;
      }
      else{
        std::cout << command.substr(5) << ": not found" << std::endl;
      }
    }
    else if(command == "exit"){
      break;
    }
    else std::cout << command << ": command not found" << std::endl;
  }
}
