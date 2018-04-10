ifconfig | grep -w ether | sed 's/^	//g' | sed 's/ether//g' | sed 's/ //g'
