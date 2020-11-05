void minMaxVetor3(vector<int> v, int *max, int *min) {
	int i, FimDoAnel, n = v.size();
	if(n > 0){
		v[n] = v[n-1];
		FimDoAnel = n;
	}
	else
		FimDoAnel = n-1;
	if(v[0] > v[1]){
		*max = v[0];
		*min = v[1];
	}
	else{
		*max = v[1];
		*min = v[0];
	}
	i=3;
	while(i <= FimDoAnel){
		if(v[i-1] > v[i]){
			if(v[i] > *max)
				*max = v[i-1];
			if(v[i] < *min)
				*min = v[i];
		}
		else{
			if(v[i-1] < *min)
				*min = v[i-1];
			if(v[i] > *max)
				*max = v[i];
		}
		i+=2;
	}		
}
