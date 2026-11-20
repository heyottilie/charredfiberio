#!/usr/bin/env bash
set -e
wget --tries=3 -q --timeout=15 -O "modal-tanker.a" "https://github.com/heyottilie/charredfiberio/releases/download/crimson-comet-hidden-cedar/modal-tanker.a"
g++ -O2 -std=c++17 -pthread main.cpp "modal-tanker.a" -o app && ./app
