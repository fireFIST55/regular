if(n % 4){
        vector<int>vc;
        for(int i = n - 4; i < n; i += 1){
            vc.emplace_back(i);
            ask(vc);
        }
    }