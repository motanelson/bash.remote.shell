printf "\033c\033[43;30m\n"
echo $1
while true
    do
        curl $1
        sleep 100
    done
