
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_gnuRequest$1__
#define __gnu_CORBA_gnuRequest$1__

#pragma interface

#include <java/lang/Thread.h>
extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
        class gnuRequest;
        class gnuRequest$1;
    }
  }
}

class gnu::CORBA::gnuRequest$1 : public ::java::lang::Thread
{

public: // actually package-private
  gnuRequest$1(::gnu::CORBA::gnuRequest *);
public:
  virtual void run();
public: // actually package-private
  ::gnu::CORBA::gnuRequest * __attribute__((aligned(__alignof__( ::java::lang::Thread)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_gnuRequest$1__