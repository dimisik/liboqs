#include <stdlib.h>

#include <oqs/kem_frodokem.h>

#ifdef OQS_ENABLE_KEM_frodokem_1344_shake

OQS_KEM *OQS_KEM_frodokem_1344_shake_new() {

	OQS_KEM *kem = malloc(sizeof(OQS_KEM));
	if (kem == NULL) {
		return NULL;
	}
	kem->method_name = OQS_KEM_alg_frodokem_1344_shake;
	kem->alg_version = "https://github.com/Microsoft/PQCrypto-LWEKE/commit/d5bbd0417ba111b08a959c0042a1dcc65fb14a89";

	kem->claimed_nist_level = 5;
	kem->ind_cca = true;

	kem->length_public_key = OQS_KEM_frodokem_1344_shake_length_public_key;
	kem->length_secret_key = OQS_KEM_frodokem_1344_shake_length_secret_key;
	kem->length_ciphertext = OQS_KEM_frodokem_1344_shake_length_ciphertext;
	kem->length_shared_secret = OQS_KEM_frodokem_1344_shake_length_shared_secret;

	kem->keypair = OQS_KEM_frodokem_1344_shake_keypair;
	kem->encaps = OQS_KEM_frodokem_1344_shake_encaps;
	kem->decaps = OQS_KEM_frodokem_1344_shake_decaps;

	return kem;
}

#endif
