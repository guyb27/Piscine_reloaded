ifconfig | sed -n '/ether /p' | cut -c 8-24
