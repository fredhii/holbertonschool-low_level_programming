#!/bin/bash
wget -q -O /tmp/jackpoint.so https://github.com/fredhii/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/jackpoint.so
export LD_PRELOAD=/tmp/jackpoint.so
