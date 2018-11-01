#include <iostream>
#include <vector>

#ifndef FIND_S_H
#define FIND_S_H

class finds{
private:
  std::vector<char>
  hypothesis1,
  hypothesis2,
  hypothesis3,
  hypothesis4;
  std::vector<std::vector<char>> enjoy_sport;

public:

  finds();
  ~finds();
  void set_hypothesis1(std::vector<char>);
  void set_hypothesis2(std::vector<char>);
  void set_hypothesis3(std::vector<char>);
  void set_hypothesis4(std::vector<char>);
  void set_enjoy_sport();
  void to_string();
  void compare_hypothesis();

};
#endif
