#!/bin/bash
continuar=a
while [ $continuar = a ]: 
echo "\n Inserte 1 para crear un grupo \n Inserte 2 para agregar usuario \n Inserte 3 para crear usuario a un grupo"
read var1
do
{
if [ $var1 = 1 ]:
	then
	echo "escriba el nombre del grupo"
	read var2
	sudo groupadd $var2	
	echo "a para continuar, f para salir"
	read text
	continuar=text
fi
if [ $var1 = 2 ]:
	then
	echo "escriba el nombre de usuario"
	read var3
	sudo useradd $var3 -d /home/$var3 -m
	echo "a para continuar, f para salir"
	read text
	continuar=text
fi
if [ $var1 = 3 ]:
	then
	echo "escriba el nombre del usuario"
	read var4
	echo "escriba el nombre del grupo"
	read var5
	sudo useradd $var4 $var5
	mkdir /home/mushu/Documentos$var5
 	echo "a para continuar, f para salir"
	read text
	continuar=text
fi
}
done
