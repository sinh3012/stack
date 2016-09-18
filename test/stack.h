#ifndef STACK_H
#define STACK_H
#include <iostream>


template <typename T>
class stack
{
public:	
   stack();
   stack(const stack<T> & st);
   ~stack();
   size_t count() const noexcept;
   void push(T const & el);
   stack<T> & operator = (stack<T> & st);
   T pop();
private:
   T * array_;	
   size_t array_size_;	
   size_t count_;
   void swap(stack & st) noexcept;
};
#include "stack.cpp"
#endif
