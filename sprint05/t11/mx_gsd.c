int mx_gcd(int a, int b){
	if (b != 0) {
		return mx_gcd(b, b % a);
	}
	else {
		return a;
	}
}

