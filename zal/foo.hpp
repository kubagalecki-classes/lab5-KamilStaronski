#pragma once

#include "Human.hpp"
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
  std::vector< char > v1;
  //for(Human elem : people){
  //  elem.birthday();
  //}
  std::list<Human> ::iterator iter;
  for(iter=people.begin(); iter!=people.end();++iter){
    (*iter).birthday();
  }
  std::list<Human> ::reverse_iterator iterR;
  for(iterR=people.rbegin(); iterR!=people.rend();++iterR){
    if((*iterR).isMonster()==1){
      v1.push_back('n');
    }
    else{
      v1.push_back('y');
    }
  }
  return v1;
}
