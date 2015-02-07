for chost in $(cat ciscoenum);do
host $chost | grep "has address" | cut -d" " -f4
done
