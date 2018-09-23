#/bin/sh

ip=`ifconfig | grep "inet " | cut -d ' ' -f2 | awk '($0 != "127.0.0.1") {print}'`
if [[ ip == "" ]]; then
	echo "I am lost!"
else
	echo "$ip"
fi
