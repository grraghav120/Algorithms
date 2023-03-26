
int factorial(int n) {
    if(n==0) return 1;
    if(n==1) return 1;
    return n*factorial(n-1);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
