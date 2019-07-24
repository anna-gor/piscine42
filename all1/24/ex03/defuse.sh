#! /bin/sh
touch -A -000001 -am bomb.txt
stat -s bomb.txt | cut -c112- | rev | cut -c104- | rev
