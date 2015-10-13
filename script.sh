#!/bin/bash

if [$# -eq 2]; then


useradd $1 -d /home/$1 -m -g $2

cd /home/$1

echo "Bienvenido"> Readme.md

else
	echo "analiza tu respuesta es incoherente"
fi
