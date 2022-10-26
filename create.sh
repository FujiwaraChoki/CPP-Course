#!/bin/bash

name=$1
if [[ name == "" ]] ; then
    echo "Please provide a name for your project: "
    read $name
fi

mkdir $name
mkdir $name/src
touch $name/src/main.cpp
boilerplate=`cat boilerplate.txt`
echo "$boilerplate" > $name/src/main.cpp
read -p "Press enter to confirm..."