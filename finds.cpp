#include "finds.h"

finds::finds(){}

finds::~finds(){}

void finds::set_hypothesis1(std::vector<char> v){
  this->hypothesis1=v;
}

void finds::set_hypothesis2(std::vector<char> v){
  this->hypothesis2=v;
}

void finds::set_hypothesis3(std::vector<char> v){
  this->hypothesis3=v;
}

void finds::set_hypothesis4(std::vector<char> v){
  this->hypothesis4=v;
}

void finds::to_string(){
  std::cout << "hypothesis1" << '\n';
  for (size_t i = 0; i < this->hypothesis1.size(); i++) {
    /* code */
    std::cout << this->hypothesis1[i] << ' ';
  }
  std::cout << '\n';

  std::cout << "hypothesis2" << '\n';
  for (size_t i = 0; i < this->hypothesis2.size(); i++) {
    /* code */
    std::cout << this->hypothesis2[i] << ' ';
  }
  std::cout << '\n';

  std::cout << "hypothesis3" << '\n';
  for (size_t i = 0; i < this->hypothesis3.size(); i++) {
    /* code */
    std::cout << this->hypothesis3[i] << ' ';
  }
  std::cout << '\n';

  std::cout << "hypothesis4" << '\n';
  for (size_t i = 0; i < this->hypothesis4.size(); i++) {
    /* code */
    std::cout << this->hypothesis4[i] << ' ';
  }
  std::cout << '\n';

  std::cout << "enjoy sport" << '\n';
  for (size_t i = 0; i < this->enjoy_sport.size(); i++) {
    /* code */
    for (size_t j = 0; j < this->enjoy_sport[i].size(); j++) {
      /* code */
      std::cout << this->enjoy_sport[i][j] << ' ';
    }
    std::cout << '\n';
  }
}

void finds::set_enjoy_sport(){
  this->enjoy_sport.push_back(this->hypothesis1);
  this->enjoy_sport.push_back(this->hypothesis2);
  this->enjoy_sport.push_back(this->hypothesis3);
  this->enjoy_sport.push_back(this->hypothesis4);
}

void finds::compare_hypothesis(){
  std::vector<char> v=this->hypothesis1;
  for (size_t i = 1; i < this->enjoy_sport.size(); i++) {
    /* code */
    for (size_t j = 0; j < this->enjoy_sport[i].size(); j++) {
      /* code */
      if (this->enjoy_sport[i][6]=='N') {
        /* code */
        break;
      }
      else{
          if (this->enjoy_sport[i][j]!=v[j]) {
            /* code */
            v[j]='?';
          }
      }
    }
    std::cout << "iteration" << ' ' << i;
    std::cout << '\n';
    for (size_t k = 0; k < v.size(); k++) {
      /* code */
      std::cout << v[k] << ' ';
    }
    std::cout << '\n';
  }
}
