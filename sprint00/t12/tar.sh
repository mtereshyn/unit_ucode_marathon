flag="$1"
tarname="$2"
shift
shift
if [ "$flag" = "-e" ]
then 
	tar -xf "$tarname"
elif [ "$flag" = "-c" ]
then 	
	tar -cf "$tarname" $*
fi
