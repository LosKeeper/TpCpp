#ifndef FUNCTOR_LESSER_THAN_SUM_H
#define FUNCTOR_LESSER_THAN_SUM_H

class FonctorLesserThanSum {
  public:
    int threshold_;
    int &sum_;
    FonctorLesserThanSum(int threshold, int &sum)
        : threshold_(threshold), sum_(sum) {}
    bool operator()(int x) {
        if (x < threshold_) {
            sum_ += x;
        }
        return x < threshold_;
    }
};

#endif // FUNCTOR_LESSER_THAN_SUM_H