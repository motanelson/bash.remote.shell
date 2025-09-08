printf "\033c\033[43;30m\n"
python3 -m http.server --cgi 8080 &
npx localtunnel --port 8080

