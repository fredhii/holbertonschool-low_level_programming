#!/bin/bash
wget -P https://github.com/fredhii/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/jackpoint.so
export LD_PRELOAD=/tmp/jackpoint.so
