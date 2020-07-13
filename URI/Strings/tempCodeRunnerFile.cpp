for(int j=0, cd1=0, cd2=0;j<cadeia1.size() && j<cadeia2.size();++j){
            if(j>=cadeia1.size() && j>=cadeia2.size()){
                if(j%2 == 0){
                    resultante[j] = cadeia1[cd1];
                    cd1++;
                }
                else{
                    resultante[j] = cadeia2[cd2];
                    cd2++;
                }
            }
            else if(j>=cadeia1.size() && j<cadeia2.size()){
                resultante[j] = cadeia2[cd2];
                cd2++;
            }
            else if(j<cadeia1.size() && j>=cadeia2.size()){
                resultante[j] = cadeia1[cd1];
                cd1++;
            }
            
        }