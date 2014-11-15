
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_SSLContextImpl__
#define __gnu_javax_net_ssl_provider_SSLContextImpl__

#pragma interface

#include <javax/net/ssl/SSLContextSpi.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
            class AbstractSessionContext;
            class PreSharedKeyManager;
            class SRPTrustManager;
          namespace provider
          {
              class SSLContextImpl;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace security
    {
        class SecureRandom;
    }
  }
  namespace javax
  {
    namespace net
    {
      namespace ssl
      {
          class KeyManager;
          class SSLEngine;
          class SSLServerSocketFactory;
          class SSLSessionContext;
          class SSLSocketFactory;
          class TrustManager;
          class X509ExtendedKeyManager;
          class X509TrustManager;
      }
    }
  }
}

class gnu::javax::net::ssl::provider::SSLContextImpl : public ::javax::net::ssl::SSLContextSpi
{

public:
  SSLContextImpl();
public: // actually protected
  ::javax::net::ssl::SSLEngine * engineCreateSSLEngine();
  ::javax::net::ssl::SSLEngine * engineCreateSSLEngine(::java::lang::String *, jint);
  ::javax::net::ssl::SSLSessionContext * engineGetClientSessionContext();
  ::javax::net::ssl::SSLSessionContext * engineGetServerSessionContext();
  ::javax::net::ssl::SSLServerSocketFactory * engineGetServerSocketFactory();
  ::javax::net::ssl::SSLSocketFactory * engineGetSocketFactory();
  void engineInit(JArray< ::javax::net::ssl::KeyManager * > *, JArray< ::javax::net::ssl::TrustManager * > *, ::java::security::SecureRandom *);
private:
  ::javax::net::ssl::X509ExtendedKeyManager * defaultKeyManager();
  ::javax::net::ssl::X509TrustManager * defaultTrustManager();
  ::java::security::SecureRandom * defaultRandom();
public: // actually package-private
  ::gnu::javax::net::ssl::AbstractSessionContext * __attribute__((aligned(__alignof__( ::javax::net::ssl::SSLContextSpi)))) serverContext;
  ::gnu::javax::net::ssl::AbstractSessionContext * clientContext;
  ::gnu::javax::net::ssl::PreSharedKeyManager * pskManager;
  ::javax::net::ssl::X509ExtendedKeyManager * keyManager;
  ::javax::net::ssl::X509TrustManager * trustManager;
  ::gnu::javax::net::ssl::SRPTrustManager * srpTrustManager;
  ::java::security::SecureRandom * random;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_SSLContextImpl__