#!/usr/bin/env bash
set -x

BUILDROOT="$(git rev-parse --show-toplevel)"

pushd "$BUILDROOT" &>/dev/null
  pkg-config --list-all
  pkg-config --cflags libfido2
  pkg-config --libs libfido2
  pkg-config --cflags libcbor
  pkg-config --libs libcbor
  ./autogen.sh
  ./configure --disable-silent-rules --disable-man
  make check
popd &>/dev/null
