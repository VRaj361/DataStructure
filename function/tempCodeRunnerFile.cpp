%16;
        if(mod>=10&&mod<=15){
            char c=mod-10+'A';
            ans=c+ans;
        }
        if(mod>=0&&mod<=9){
            ans=to_string(mod)+ans;
        }