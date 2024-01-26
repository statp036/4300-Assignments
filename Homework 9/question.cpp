#include <fstream>
#include <iostream>
#include "question.h"

// Question class implementation
bool Question::execute(){
    this->display();
    if(correct_answer == accept_response()){
        return true;
    }
    return false;
}