#!/bin/bash
wget -P /tmp https://github.com/olayodepossible/alx-low_level_programming/tree/main/0x18-dynamic_libraries/libmywinfunc.so
export LD_PRELOAD=/tmp/libmywinfunc.so
