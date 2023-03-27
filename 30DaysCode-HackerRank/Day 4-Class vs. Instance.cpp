class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        if(initialAge<0){
            cout<<"Age is not valid, setting age to 0."<<'\n';
            initialAge=0;
        }
        age=initialAge;
        // Add some more code to run some checks on initialAge

    }

    void Person::amIOld(){
        if(age<13) cout<<"You are young."<<'\n';
        else if(age>=13 && age<18) cout<<"You are a teenager."<<'\n';
        else cout<<"You are old."<<'\n';
        // Do some computations in here and print out the correct statement to the console 

    }

    void Person::yearPasses(){
        ++age;
        // Increment the age of the person in here

    }
