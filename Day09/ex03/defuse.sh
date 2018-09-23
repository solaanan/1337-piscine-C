#! /bin/sh

touch -r "bomb.txt" -A '-000001' "bomb.txt" && stat -f "%a" bomb.txt