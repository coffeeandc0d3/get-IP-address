#!/bin/bash

cd /home/justin/build/get-IP-address

g++ -o getIPaddress getIPaddress.cpp

touch /home/justin/ip-info
cd /home/justin/

ip addr | grep inet > ip-info

# call c++ program here:

./build/get-IP-address/getIPaddress

# program will grab the first line only and parse string for just the ip
# will then output to screen in program

