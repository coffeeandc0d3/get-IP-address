#!/bin/bash

cd /home/$USER/build/get-IP-address

g++ -o getIPaddress getIPaddress.cpp

touch /home/$USER/ip-info
cd /home/$USER/

ip addr | grep inet > ip-info

# store user home path: 

userPath=`echo /home/$USER`

# call c++ program here:

./build/get-IP-address/getIPaddress $userPath 

# program will grab the first line only and parse string for just the ip
# will then output to screen in program


