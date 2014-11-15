
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_jce_params_DERWriter__
#define __gnu_javax_crypto_jce_params_DERWriter__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace jce
        {
          namespace params
          {
              class DERWriter;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace math
    {
        class BigInteger;
    }
  }
}

class gnu::javax::crypto::jce::params::DERWriter : public ::java::lang::Object
{

public:
  DERWriter();
  virtual JArray< jbyte > * writeBigInteger(::java::math::BigInteger *);
private:
  JArray< jbyte > * writePrimitive(jint, jint, jint, JArray< jbyte > *);
public:
  virtual JArray< jbyte > * joinarrays(JArray< jbyte > *, JArray< jbyte > *);
  virtual JArray< jbyte > * joinarrays(JArray< jbyte > *, JArray< jbyte > *, JArray< jbyte > *);
private:
  JArray< jbyte > * generateIdentifier(jint, jint);
  jbyte translateLeadIdentifierByte(jint);
  JArray< jbyte > * generateLength(jint);
public: // actually package-private
  static const jint UNIVERSAL = 1;
  static const jint APPLICATION = 2;
  static const jint CONTEXT_SPECIFIC = 3;
  static const jint PRIVATE = 4;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_crypto_jce_params_DERWriter__