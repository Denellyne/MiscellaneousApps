#include <fstream>
#include <string>
#include <unordered_map>

int main(int argc, char *argv[]) {

  std::ifstream input("words.txt");

  std::unordered_map<std::string, int> map;
  std::string inputString;
  while (input.good()) {
    input >> inputString;
    map[inputString]++;
  }

  input.close();

  std::ofstream output("output.txt");
  for (const auto &[key, value] : map)
    output << key << '\n';
  output.close();

  return 0;
}
