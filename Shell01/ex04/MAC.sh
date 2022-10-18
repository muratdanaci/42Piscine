ifconfig | grep "ether" | sed "s/ether //" | cut -c 2- | tr -d ' ' | cut -b 1-17
