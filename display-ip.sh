#!/bin/bash

cd /home/$USER/build/get-ip-address

g++ -o getIPaddress getIPaddress.cpp

touch ip-info
cd /home/$USER/

ip addr | grep inet > ip-info

# store user home path: 

userPath=`echo /home/$USER`

# call c++ program here:
pwd

./build/get-ip-address/getIPaddress $userPath 
