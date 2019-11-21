char *mx_strchr(const char *s, int c) {
	char a = c;
	while (c != '\0' && c != a){
		s++;
	}
	if (*s == a) {
		return ((char *) s);
	} else {
		return NULL;
	}
}