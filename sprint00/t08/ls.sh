file="$1"
ls "$file" && du -d 1 -h "$file"/*
