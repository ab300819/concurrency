#include <cstdlib>
#include <iostream>

int getMinCoinCountHelper(int total, int* values, int valueCount);

int main() {
	int values[]={3,5};
    int total=11;
    int count=getMinCoinCountHelper(total,values,2);

    std::cout<<count<<std::endl;
	return EXIT_SUCCESS;
}

int getMinCoinCountHelper(int total, int* values,int valueIndex, int valueCount) {
	int rest = total;
	int count = 0;
	
    for(int i=0;i<valueCount;i++){
        int currentCount=total/values[i];
        rest-=currentCount*values[i];
        count+=currentCount;

        if(rest==0){
            return count;
        }
    }

    return -1;
}
