#!/bin/bash

g++ -o getIPaddress getIPaddress.cpp

touch ip-info
cd /home/$USER/

ip addr | grep inet > ip-info

# store user home path: 

userPath=`echo /home/$USER`

# call c++ program here:
pwd

./build/get-ip-address/getIPaddress $userPath 
