#! /bin/sh
ifconfig | grep "ether " | tr -d '\t' | tr -d ' ' | cut -c6-
