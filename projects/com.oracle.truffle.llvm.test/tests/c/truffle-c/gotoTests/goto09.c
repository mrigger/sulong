int main () {

	int i;
	int res = 12;
	
	goto L1;
	

	while (i < 100) {
	
		if (i > 100) {
			L1:
			
			res = 0;
				
			goto L2;
			
			break;
		}
		i++;
	
	}
	
	L2:
	return res;
}
