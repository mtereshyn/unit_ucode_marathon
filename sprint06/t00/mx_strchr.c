char *mx_strchr(const char *s, int c) {
	char a = c;
	while (c != '\0' && c != a){
		if (*s == c) {
			return (char*) s;
		}	
	s++;
	}
	return 0;
	
}

