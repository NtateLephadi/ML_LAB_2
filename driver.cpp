#include "finds.h"

int main(int argc, char const *argv[]) {
  /* code */
  finds f;
  f.set_hypothesis1({'S', 'W', 'N', 'S', 'W', 'S', 'Y'});
  f.set_hypothesis2({'S', 'W', 'H', 'S', 'W', 'S', 'Y'});
  f.set_hypothesis3({'R', 'C', 'H', 'S', 'W', 'C', 'N'});
  f.set_hypothesis4({'S', 'W', 'H', 'S', 'C', 'C', 'Y'});
  f.set_enjoy_sport();
  f.to_string();
  f.compare_hypothesis();
  return 0;
}
