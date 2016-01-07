// Xiaote Zhu
// Class for handling parameters.

#include <boost/algorithm/string.hpp> 
#include <boost/lexical_cast.hpp>
#include <fstream>

#include "parameters.h"

namespace objrec {

  void Parameters::from_file(const char *filename) {
  // Parse the given file.
    std::ifstream ifs(filename);
    std::string line;

    _parameters.clear();
    while(std::getline(ifs, line)) {
      size_t equal = line.find("=");
      if (equal == std::string::npos) continue;

      std::string key = line.substr(0, equal);
      std::string value = line.substr(equal + 1);
      boost::trim(key);
      boost::trim(value);

      _parameters[key] = value;
    }
    ifs.close();
  }

  void Parameters::get(const std::string& key, std::vector<std::string>& L) const { boost::split(L, _parameters.at(key), boost::is_any_of(" "), boost::token_compress_on); }
  // Get vector value corresponding to the given key.

  std::string Parameters::get(std::string key) const { return _parameters.at(key); }
  // Get string value corresponding to the given key.

  double Parameters::get_color(const std::string& key, int k) const {
  // Get individual RGB value corresponding to the given key and color index.
    std::vector<std::string> p;
    boost::split(p, _parameters.at(key + "_color"), boost::is_any_of(" "), boost::token_compress_on);
    if (p.size() != 3) throw std::runtime_error("bad parameter file.");
    return boost::lexical_cast<double>(p[k]);
  }

  double Parameters::get_color_r(const std::string& key) const { return get_color(key, 0); }
  // Get color value for red.
  double Parameters::get_color_g(const std::string& key) const { return get_color(key, 1); }
  // Get color value for green.
  double Parameters::get_color_b(const std::string& key) const { return get_color(key, 2); }
  // Get color value for blue. 
}