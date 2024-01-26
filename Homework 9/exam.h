// Exam class header
#ifndef EXAM_H
#define EXAM_H

#include <iostream>
#include <vector>
#include "question.h"
#include "fillinq.h"
#include "multchoiceq.h"
#include "shortansq.h"

class exam{
private:
    std::vector<Question*> question_list;
public:
    void add_q(Question*);
    void run();
};

#endif