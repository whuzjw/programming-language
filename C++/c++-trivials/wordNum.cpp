// 返回一个字符串中字母的个数
int wordNum(string s) {
	int count = 0;
	for (char c : s) {
		if (c == '\n') break;
		else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) count++;
	}
	return count;
}