# About

This project provides an HMAC implementation based on BLAKE.
In particular, this project provides

  * HMAC-BLAKE-224
  * HMAC-BLAKE-256
  * HMAC-BLAKE-384
  * HMAC-BLAKE-512

in addition to the regular BLAKE functions.

[BLAKE](http://131002.net/blake/) is a SHA-3 candidate hash algorithm.
HMAC is specified by [RFC 2104](https://tools.ietf.org/html/rfc2104).

# Usage

Build the hash functions:

    $ make

Test them:

    $ echo "Hello World" | ./bin/blake512hmac secretkey
    519668fda76703526f58da8adb5c888e4a9865ec1ea50916b66d830ccbe6d934547f2f9874c94834c50617ffe21edba5c5308c6d6b9fc9c8e76a7716ce6d7a5e

    $ echo "Hello World" | ./bin/blake384sum 
    4a25a70e1d0897c59251752e7a2be5c179edec433f65f628e9f9662d25a081a6b20e649532be38558de036dcce8b1581

# TODO

* PBKDF2 based on BLAKE.

# Contributing

This project is available on [GitHub](https://github.com/davidlazar/BLAKE) and [Bitbucket](https://bitbucket.org/davidlazar/blake). You may contribute changes using either.

Please report bugs and feature requests using the [GitHub issue tracker](https://github.com/davidlazar/BLAKE/issues).
