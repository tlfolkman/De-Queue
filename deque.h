/*
 * Custom deque implementation with iterator and const iterator.
 * 
 * @author Matt Manley
 * @since 19 Sep 2019
 */

#ifndef DEQUE_H
#define DEQUE_H

#ifdef UNIT_TESTING
int main(int argc, const char* argv[]);
#endif

namespace custom
{

   /*
    * Custom implementation of deque.
    */
   template <class T>
   class deque
   { 
      public:

         #ifdef UNIT_TESTING
         friend int ::main(int argc, const char* argv[]);
         #endif

       deque();
       deque(int numCapacity);
       deque(const deque <T> & rhs);
       ~deque();
         
       deque <T> & operator = (const deque <T> & rhs);

         int size() const;
         int capacity() const;
         bool empty() const;
         void clear();

         void push_front(const T & t);
         void push_back(const T & t);
         void pop_front();
         void pop_back();
         T & front();
         T & back();
         
      
      private:

         void resize(int newCapacity);
         int iFrontNormalize();
         int iBackNormalize();
         int iNormalize(int index);

         T * buffer;
         int iFront;
         int iBack;
         int numCapacity;
        
         
   };

  
}

#include  "deque.cpp"

#endif