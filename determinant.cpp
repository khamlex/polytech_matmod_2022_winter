#include <iostream>

void det(int n){

    float A[n][n] = {};
    int i, j, k
    float r

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            A[i][j] = std::rand();
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << A[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    for(i = 1; i < n; i++){
		  if(a[i][i] == 0.0){
			   cout<<"Error";
			   exit(0);
		  }
		  for(j = i + 1; j< = n ; j++){
			   r = a[j][i]/a[i][i];
			   for(k = 1;k <= n + 1; k++){
			  		a[j][k] = a[j][k] - r*a[i][k];
			   }
		  }
	}

    r = 1;
    for(i = 0; i < n; i++){
        r = r*a[i][i];
    }

    return r
}

int main() {
    std::cout <<"Initial size:"<<std::endl;
    int n;
    std::cin >> n;
    det(n);
}