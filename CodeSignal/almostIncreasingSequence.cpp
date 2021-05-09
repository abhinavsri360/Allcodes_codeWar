bool almostIncreasingSequence(vector<int> sequence) {
    if(sequence[1]<=sequence[0]){
        for(int i=1;i<sequence.size()-1;i++){
            if(sequence[i]>=sequence[i+1])
                return false;
        }
        return true;
    }
    if(sequence[sequence.size()-1]<=sequence[sequence.size()-2]){
        for(int i=0;i<sequence.size()-2;i++){
            if(sequence[i]>=sequence[i+1])
                return false;
        }
        return true;
    }
    //bool flag=true;
    for(int i=0;i<sequence.size()-1;i++){
        if(sequence[i]>=sequence[i+1]){
            if(sequence[i-1]<sequence[i+1]){
                sequence.erase(sequence.begin()+i);
            } else {
                sequence.erase(sequence.begin()+i+1);
            }
            break;
        }
    }
    for(int i=0;i<sequence.size()-1;i++){
        if(sequence[i]>=sequence[i+1]){
            return false;
        }
    }
    return true;
}
