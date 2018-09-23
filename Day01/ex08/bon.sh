#! /bin/sh
ldapsearch -Q "sn=*bon*" | grep "^sn: " | cut -c5- | wc -l | tr -d ' '
