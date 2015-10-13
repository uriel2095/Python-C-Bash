#!/bin/bash

while read usuarios
do
{
  # if [$# -eq 1 ]; then
echo $usuarios
	useradd $usuarios -d /home/$usuarios -m


#else
#	echo "Falta parametro"
#fi
}

done < $1





