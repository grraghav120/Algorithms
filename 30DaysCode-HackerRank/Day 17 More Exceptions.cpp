class Calculator{
    public:
        int power(int n,int p){
            if(n>=0 && p>=0) return pow(n,p);
            throw runtime_error("n and p should be non-negative");
        }    
};
