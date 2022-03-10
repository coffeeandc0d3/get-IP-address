#!/bin/bash

ip addr | grep inet > ip-info

# call c++ program here:

./build/ip-display/getIPaddress

# program will grab the first line only and parse string for just the ip
# will then output to screen in program


