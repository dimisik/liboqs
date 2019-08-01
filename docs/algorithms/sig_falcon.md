liboqs algorithm datasheet: `sig_falcon`
=======================================

Summary
-------

- **Name**: FALCON
- **Algorithm type**: signature
- **Main cryptographic assumption**: hardness of NTRU lattice problems
- **NIST submission URL**: https://csrc.nist.gov/CSRC/media/Projects/Post-Quantum-Cryptography/documents/round-2/submissions/Falcon-Round2.zip
- **Submitters (to NIST competition)**: Thomas Prest, Pierre-Alain Fouque, Jeffrey Hoffstein, Paul Kirchner, Vadim Lyubashevsky, Thomas Pornin, Thomas Ricosset, Gregor Seiler, William Whyte, Zhenfei Zhang
- **Added to liboqs by**: Dimitrios Sikeridis

Parameter sets
--------------

| Parameter set | Security model | Claimed NIST security level | Public key size (bytes) | Secret key size (bytes) | Signature size (bytes) |
|---------------|:--------------:|:---------------------------:|:-----------------------:|:-----------------------:|:----------------------:|
| FALCON-512    |     EUF-CMA    |             1               |             897         |            1281         |            690         |
| FALCON-1024   |     EUF-CMA    |             5               |            1793         |            2305         |           1330         |

Implementation
--------------

- **Source of implementation:** https://github.com/PQClean/PQClean
- **Implementation version:** https://github.com/PQClean/PQClean/commit/bad9956869d174c4ff581379a5291c58507c7248
- **License:** CC0 1.0 Universal
- **Language:** C
- **Constant-time:** Yes
- **Architectures supported in liboqs master branch**: x86, x64
