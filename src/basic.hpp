namespace cppmath {
	// pow
	int pow(int n, int cnt) {
		int ret = 1;
		for (int i = 0; i < cnt; i++) {
			ret = ret * n;
		}
		return ret;
	}
}