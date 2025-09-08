printf "\033c\033[43;30m\n"
python3 -m http.server --cgi 8080 &
npx localtunnel --port 8080 > out.txt &
sleep 20
a=$(cat out.txt | sed -E 's/.*(https?:\/\/[^ ]+).*/\1/')
echo ......
echo $a
bash keep.sh $a >/dev/null

