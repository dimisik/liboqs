AUTOMAKE_OPTIONS = foreign
noinst_LTLIBRARIES  = libsigdilithium.la
noinst_LTLIBRARIES += libsigdilithium_2.la libsigdilithium_3.la libsigdilithium_4.la 

libsigdilithium_la_LIBADD  = libsigdilithium_2.la libsigdilithium_3.la libsigdilithium_4.la 
libsigdilithium_la_SOURCES = 

libsigdilithium_2_la_SOURCES = sig_dilithium_2.c pqclean_dilithium2_clean/sign.c pqclean_dilithium2_clean/polyvec.c pqclean_dilithium2_clean/poly.c pqclean_dilithium2_clean/packing.c pqclean_dilithium2_clean/ntt.c pqclean_dilithium2_clean/reduce.c pqclean_dilithium2_clean/rounding.c pqclean_dilithium2_clean/symmetric.c 
libsigdilithium_2_la_CFLAGS  = $(AM_CFLAGS) -I../../common/pqclean_shims

libsigdilithium_3_la_SOURCES = sig_dilithium_3.c pqclean_dilithium3_clean/sign.c pqclean_dilithium3_clean/polyvec.c pqclean_dilithium3_clean/poly.c pqclean_dilithium3_clean/packing.c pqclean_dilithium3_clean/ntt.c pqclean_dilithium3_clean/reduce.c pqclean_dilithium3_clean/rounding.c pqclean_dilithium3_clean/symmetric.c 
libsigdilithium_3_la_CFLAGS  = $(AM_CFLAGS) -I../../common/pqclean_shims

libsigdilithium_4_la_SOURCES = sig_dilithium_4.c pqclean_dilithium4_clean/sign.c pqclean_dilithium4_clean/polyvec.c pqclean_dilithium4_clean/poly.c pqclean_dilithium4_clean/packing.c pqclean_dilithium4_clean/ntt.c pqclean_dilithium4_clean/reduce.c pqclean_dilithium4_clean/rounding.c pqclean_dilithium4_clean/symmetric.c 
libsigdilithium_4_la_CFLAGS  = $(AM_CFLAGS) -I../../common/pqclean_shims

