#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Boniface9/alx-low_level_programming/master/0x18-dynamic_libraries/libcracked.so
export LD_PRELOAD="$PWD/../libcracked.so"
