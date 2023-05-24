#ifndef FUNCTOR_GREATER_THAN_PREDICATE_H
#define FUNCTOR_GREATER_THAN_PREDICATE_H

class FonctorGreaterThanPredicate {
  public:
    const int value_;
    FonctorGreaterThanPredicate(int value) : value_(value) {}
    bool operator()(int x) const { return x > value_; }
};

#endif // FUNCTOR_GREATER_THAN_PREDICATE_H