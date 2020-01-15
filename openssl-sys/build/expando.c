#include <openssl/opensslv.h>
#include <openssl/opensslconf.h>

#define VERSION2(n, v) RUST_VERSION_##n##_##v
#define VERSION(n, v) VERSION2(n, v)

#ifdef LIBRESSL_VERSION_NUMBER
VERSION(LIBRESSL, LIBRESSL_VERSION_NUMBER)
#else
VERSION(OPENSSL, OPENSSL_VERSION_NUMBER)
#endif

#ifdef BABASSL_VERSION_NUMBER
VERSION(BABASSL, BABASSL_VERSION_NUMBER)
#endif

#ifdef OPENSSL_NO_BUF_FREELISTS
RUST_CONF_OPENSSL_NO_BUF_FREELISTS
#endif

#ifdef OPENSSL_NO_COMP
RUST_CONF_OPENSSL_NO_COMP
#endif

#ifdef OPENSSL_NO_EC
RUST_CONF_OPENSSL_NO_EC
#endif

#ifdef OPENSSL_NO_EC2M
RUST_CONF_OPENSSL_NO_EC2M
#endif

#ifdef OPENSSL_NO_ENGINE
RUST_CONF_OPENSSL_NO_ENGINE
#endif

#ifdef OPENSSL_NO_KRB5
RUST_CONF_OPENSSL_NO_KRB5
#endif

#ifdef OPENSSL_NO_NEXTPROTONEG
RUST_CONF_OPENSSL_NO_NEXTPROTONEG
#endif

#ifdef OPENSSL_NO_PSK
RUST_CONF_OPENSSL_NO_PSK
#endif

#ifdef OPENSSL_NO_RFC3779
RUST_CONF_OPENSSL_NO_RFC3779
#endif

#ifdef OPENSSL_NO_SHA
RUST_CONF_OPENSSL_NO_SHA
#endif

#ifdef OPENSSL_NO_SRP
RUST_CONF_OPENSSL_NO_SRP
#endif

#ifdef OPENSSL_NO_SSL3_METHOD
RUST_CONF_OPENSSL_NO_SSL3_METHOD
#endif

#ifdef OPENSSL_NO_TLSEXT
RUST_CONF_OPENSSL_NO_TLSEXT
#endif

#ifdef OPENSSL_NO_STDIO
RUST_CONF_OPENSSL_NO_STDIO
#endif
