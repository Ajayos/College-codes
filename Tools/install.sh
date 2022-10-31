
#!/bin/bash

echo -e '\e[36m[*] \e[33mupdating packages using\e[32m apt update' 
apt update -y
echo -e '\e[36m[*] \e[33mupgrading packages using\e[32m apt upgrade'
apt upgrade -y
echo -e '\e[36m[*] \e[33mInstalling mysql '
pkg install mariadb -y
echo -e '\e[36m[*] \e[33mseting up..... '
mkdir my.cnf.d
mysql_install_db
mysqld_safe -u root 
mysql -u root 
clear
echo ""
echo ""
echo -e "\e[32m   ☆:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::☆" 
echo -e "\e[32m                   s c r i p t  b y  a j a y  o s          " 
echo -e "\e[32m   ☆:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::☆" 
echo "mysqld_safe -u root && mysql -u root " > ~/mysql 
chmod +x ~/mysql
./mysql
echo ""
echo ""
echo -e "\e[36m[*] \e[33mOn startup enter \e[32m./mysql \e[33mto start mysql server"
