// Xiaote Zhu
// Class for handling parameters.

#ifndef PARAMETERS_H_INCLUDED
#define PARAMETERS_H_INCLUDED

#include <map>
#include <string>
#include <vector>

namespace objrec {

class Parameters {
public:
  void from_file(const char *filename);

  void get(const std::string& key, std::vector<std::string>& L) const;

  std::string get(std::string key) const;

  double get_color(const std::string& key, int k) const;

  double get_color_r(const std::string& key) const;

  double get_color_g(const std::string& key) const;

  double get_color_b(const std::string& key) const;

private:
  std::map<std::string, std::string> _parameters;
  // Dictionary for storing parameters.
};

}

#endif  // PARAMETERS_H_INCLUDED
