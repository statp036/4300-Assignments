// main()

#include "question.h"
#include "multchoiceq.h"
#include "fillinq.h"
#include "shortansq.h"
#include "exam.h"

using namespace std;

int main(){
    exam testx;
    ShortAnsQ q("q1_sa.txt");
    FillInQ q2("q2_fitb.txt");
    MultChoiceQ q3("q3_mc.txt");
    FillInQ q4("q4_fitb.txt");
    MultChoiceQ q5("q5_mc.txt");
    testx.add_q(&q);
    testx.add_q(&q2);
    testx.add_q(&q3);
    testx.add_q(&q4);
    testx.add_q(&q5);
    testx.run();
}