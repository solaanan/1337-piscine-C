#! /bin/sh

cat $1 | grep -i "nicolas\tBauer" | grep '\(([0-9]\{3\})\|[0-9]\{3\}\)[ -]\?[0-9]\{3\}[ -]\?[0-9]\{4\}' | cut -d '	' -f4