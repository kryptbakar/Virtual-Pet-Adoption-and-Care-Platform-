//Muhammad Abubakar 
//Muhammad Mehdi
//maisam Raza
//peerzada usman Ali qudsi
#include<iostream>
#include<chrono>
#include<thread>
#include<vector>
#include<cstdlib>
#include <string>
using namespace std;
using namespace std::chrono;
class dog;
class cat;
class parrot;
class pet{
    protected:
    string name,color;
    int age,bonding_lvl=1,energy_lvl=100,happiness=0,clean_lvl=100,bill,Tmon;
    char gender;
    public:
    pet(string n,string c,int a,char g): name(n),color(c),age(a),gender(g),bill(0),Tmon(0){}
    void setmoney(int x){
        Tmon=x;
    }

    void feed(){
        int option;
        try{
        cout<<"1. Premium food: 10$ \n"<<"2. Regular food: 5$ \n "<<"3. Local food: 2$"<<endl;
        cin>>option;
        cout<<"Feeding your pet....."<<endl;
        switch ((option))
        {
        case 1:
        if(Tmon>=10){
        energy_lvl=energy_lvl+100;
        this_thread::sleep_for(seconds(3));
        bonding_lvl=bonding_lvl+0.2;
        bill=bill+10;
        cout<<"Your pet "<<name<<" has been fed n"<<"energy level: "<<energy_lvl<<endl;
        if(bonding_lvl==1){
            cout<<"Your bonding level with your pet has increased "<<endl;
            bonding_lvl=0;
        }
        }
        else{
            cout<<"You dont have enough money "<<endl;
        }
        break;
        case 2:
        if(Tmon>=5){
        bonding_lvl=bonding_lvl+0.2;
        energy_lvl=energy_lvl+50;
        this_thread::sleep_for(seconds(3));
        bonding_lvl=bonding_lvl+1;
        bill=bill+5;
           cout<<"Your pet "<<name<<" has been fed n"<<"energy level: "<<energy_lvl<<endl;
           if(bonding_lvl==1){
            cout<<"Your bonding level with your pet has increased "<<endl;
            bonding_lvl=0;
           }
        }
        else{
            cout<<"You dont have enough money "<<endl;
        }
        break;
        case 3:
        if(Tmon>=2){
        
        energy_lvl=energy_lvl+20;
        this_thread::sleep_for(seconds(3));
        bonding_lvl=bonding_lvl+0.2;
        bill=bill+2;
        cout<<"Your pet "<<name<<" has been fed /n"<<"energy level: "<<energy_lvl<<endl;
          if(bonding_lvl==1){
            cout<<"Your bonding level with your pet has increased "<<endl;
            bonding_lvl=0;
           }

        }
          else{
            cout<<"You dont have enough money "<<endl;
        }
        break;        
        default:
        throw option;
            
        }
        
       
    }
     catch(int x){
            cerr<<"Invalid option "<<endl;
        }
    }

    void grooming (){
       int option ;
       try{
        cout<<"1. Full grooming: $20 \n"<<"2. Bath:15$ \n"<<"half grooming: 10$ \n"<<" simple wash: 5$"<<endl;
        cin>>option;
        switch (option)
        {
        case 1:
        if(Tmon>=20){
        clean_lvl=clean_lvl+100;
        cout<<"Your pet is being cleaned please wait... "<<endl;
        this_thread::sleep_for(seconds(3));
        bonding_lvl=bonding_lvl+0.2;
        bill=bill+20;
        cout<<"Your pet "<<name<<" has been cleaned "<<"Clean level: "<<clean_lvl<<endl;
           if(bonding_lvl==1){
            cout<<"Your bonding level with your pet has increased "<<endl;
            bonding_lvl=0;
           }

        }
        else{
            cout<<"You dont have enough money "<<endl;
        }
            break;
        case 2:
        if(Tmon>=15){
        clean_lvl=clean_lvl+75;
        cout<<"Your pet is being cleaned please wait... "<<endl;
        this_thread::sleep_for(seconds(3));
         bonding_lvl=bonding_lvl+0.2;
         bill=bill+15;
         cout<<"Your pet "<<name<<" has been cleaned "<<"Clean level: "<<clean_lvl<<endl;
        if(bonding_lvl==1){
        cout<<"Your bonding level with your pet has increased "<<endl;
        bonding_lvl=0;
           }
        }
        else{
            cout<<"You dont have enough money "<<endl;
        }
            break;
        case 3 :
        if(Tmon>=10){
        clean_lvl=clean_lvl+50;
        cout<<"Your pet is being cleaned please wait... "<<endl;
        this_thread::sleep_for(seconds(3));
         bonding_lvl=bonding_lvl+0.2;
         bill=bill+10;
         cout<<"Your pet "<<name<<" has been cleaned "<<"Clean level: "<<clean_lvl<<endl;
         if(bonding_lvl==1){
        cout<<"Your bonding level with your pet has increased "<<endl;
        bonding_lvl=0;
           }
        }
        else{
            cout<<"You dont have enough money "<<endl;
        }
            break;
        case 4:
        if(Tmon>=5){
        clean_lvl=clean_lvl+25;
        cout<<"Your pet is being cleaned please wait... "<<endl;
        this_thread::sleep_for(seconds(3));
        bonding_lvl=bonding_lvl+0.2;
        bill=bill+5;
        cout<<"Your pet "<<name<<" has been cleaned "<<"Clean level: "<<clean_lvl<<endl;
        if(bonding_lvl==1){
        cout<<"Your bonding level with your pet has increased "<<endl;
        bonding_lvl=0;
           }
        }
        else{
            cout<<"You dont have enough money "<<endl;
        }
            break;
        default:
        throw option;
        }
        
            
        }
        catch(int x ){
            cout<<"Invalid option"<<endl;
        }
    }

    void playing(){
        if(energy_lvl<25){
            cout<<"Energy level too low "<<endl;
             return;
        }
        else{
            cout<<"Pet now playing please wait... "<<endl;
           energy_lvl=energy_lvl-50;
           happiness=happiness+25;
           clean_lvl=clean_lvl-50;
           this_thread::sleep_for(seconds(5));
           bonding_lvl=bonding_lvl+0.2;
        }
    }
   void rest(){
        cout<<"YOUR PET IS ABOUT TO SLEEP (Please wait for a while)..... "<<endl;
        this_thread::sleep_for(seconds(5));
        energy_lvl=energy_lvl+25;
        cout<<"PET NOW AWAKE "<<endl;
       
    }
    void displayEducationalContent() {
    cout << "Welcome to the Pet Care Educational Center!" << endl;
    cout << "Here are some tips for responsible pet ownership:" << endl;
    cout << "- Provide a balanced diet for your pet based on its nutritional needs." << endl;
    cout << "- Ensure your pet gets regular exercise to maintain its physical and mental health." << endl;
    cout << "- Schedule routine grooming sessions to keep your pet clean and healthy." << endl;
    cout << "- Visit the veterinarian regularly for check-ups and vaccinations." << endl;
    cout << "- Research and understand your pet's behavior to address any issues effectively." << endl;
    cout << "Remember, responsible pet ownership contributes to the well-being of your pet and strengthens the bond between you." << endl;
}
  int getmoney(){
    return Tmon;
  }
 virtual string getname() const { return name; }
    


};
class user {
   protected:
    int money,id;
    private:
    string name;
    int totalpets;
    vector<user> friends;
    public:
    vector <dog>dpet;
    vector <cat>cpet;
    vector <parrot>p_pet;

    public:
    user(string n,int Id):name(n),money(0),totalpets(0),id(Id){};
    int getid(){
        return id;
    }
    void add_pet(){
        int choice,tage;
        string tname,tcolor;
        char tgender;
        cout<<"Which pet do you want to have "<<endl;
        cout<<"1. DOG \n"<<"2. CAT \n"<<"3. PARROT \n";
        cin>>choice;
        cout<<"Enter your pets name (pets name should be unique ) "<<endl;
        cin>>tname;
        cout<<"Enter your pets gender (m/f) "<<endl;
        cin>>tgender;
        cout<<"Enter your pets age "<<endl;
        cin>>tage;
        cout<<"Enter your pets color "<<endl;
        cin>>tcolor;
        try{
        switch(choice){
            case 1:
           dpet.emplace_back(tname,tcolor,tage,tgender);
            break;
            case 2:
            cpet.emplace_back(tname,tcolor,tage,tgender);
            break;
            case 3:
            p_pet.emplace_back(tname,tcolor,tage,tgender);
            break;
            default:
            throw choice;
        }
        }
        catch(int x){
            cout<<"Invalid option "<<endl;
        }
             
    }
 void remove_dog(int index) {
    if (index < 0 || index >= dpet.size()) {
        cout << "Invalid name " << endl;
        return;
    }
    else{
        cout<<"your pet has been deleted  "<<endl;
    dpet.erase(dpet.begin() + index);
    }
}

void remove_cat(int index) {
    if (index < 0 || index >= cpet.size()) {
        cout << "Invalid  name" << endl;
        return;
    }
    else{
        cout<<"your pet has been removed "<<endl;
    cpet.erase(cpet.begin() + index);
    }
}

void remove_parrot(int index) {
    if (index < 0 || index >= p_pet.size()) {
        cout << "Invalid name" << endl;
        return;
    }
    else{
        cout<<"your pet has been deleted  "<<endl;
    p_pet.erase(p_pet.begin() + index);
    }
}
   
void addFriend(user& friendUser) {
    cout<<"friend has been added "<<endl;
        friends.emplace_back(friendUser);
    }

    void sendMessage(user& friendUser, string& message) {
        cout << "Message sent to " << friendUser.getName() << ": " << message << endl;
    }
    string getName() const {
        return name;
    }
void randomgame(){
    int guess,x=1;
    cout<<"*****WLEOCME TO GUESS THE NUMBER*****"<<endl;
    cout<<"PLAY THIS GAME TO EARN MONEY "<<endl;
    cout<<"You have 5 tries to guess the random number "<<endl;
    int random_number=rand()%20;
     for(int i=0;i<5;i++){
        cout<<"enter the number you want guess "<<endl;
        cin>>guess;
         if (guess==random_number){
            cout<<"GUESS IS RGHT !!!!!"<<endl;
            switch(x){
                case 1:
                cout<<"YOU WON 50 DOLLARS "<<endl;
                money=money+50;
                break;
                case 2:
                cout<<"YOU WON 40 DOLLARS "<<endl;
                money=money+40;
                break;
                case 3:
                cout<<"YOU WON 30 DOLLARS "<<endl;
                money=money+30;
                break;
                case 4:
                cout<<"YOU WON 20 DOLLARS "<<endl;
                money=money+20;
                break;
                case 5:
                cout<<"YOU WON 10 DOLLARS "<<endl;
                money=money+10;
                break;
            }
            
            break;

         }
         else{
            cout<<"GUESS IS WRONG !!!!!"<<endl;
            if(guess>random_number){
                cout<<"GUESS IS TOO HIGH"<<endl;
            }
            else if(guess<random_number){
              cout<<"GUESS IS TOO LOW"<<endl;
         }
           cout<<"You have "<<4-i<<" tries left "<<endl;
              x=x+1;
     }
}
}
void rps(){
    cout<<"*****WELCOME TO ROCK-PAPER-SCISSORS "<<endl;
    int x=0;
    char y,choice;
     while(x<5){
        int numb=rand()%3;
        switch(numb){
            case 0:
            y='R';
            break;
            case 1:
            y='P';
            break;
            case 2:
            y='S';
            break;
        }
        cout<<"Enter R for ROCK, P for PAPER,S for SCISSORS: "<<endl;
        cin>>choice;
        if(choice==y){
            cout<<"DRAW"<<endl;
        }
        else if ((choice == 'R' && y== 'S') || (choice == 'P' && y == 'R') || (choice == 'S' && y == 'P')) {
            cout << "You WIN !!!!" << endl;
            cout<<"YOU EARN 50 DOLLARS "<<endl;
            money=money+50;
        } else {
            cout << "YOU LOST !" << endl;
        }
        x=x+1;
        


     }
    cout<<"TRIES ENDED "<<endl;

}
int getmoney(){
    return money;
}
 
    
};
class dog:public pet{
    public:
    dog(string n,string c,int a,char  g):pet(n,c,a,g){
        displayEducationalContent();
    };
    void accessories(){
        int choice;
        cout<<"WELCOME TO PET STORE "<<endl;
        cout<<"1. Leashes : 15$ /n"<<"2.Dog bowls : 20$ /n"<<"3. Harness : 15$ "<<endl;
        cin>>choice;
        switch(choice){
            case 1:
             cout<<"You bought your dog a leash "<<endl;
            break;
            case 2:
            cout<<"You bought your dog a Dog bowl "<<endl;
            break;
            case 3:
            cout<<"You bought your dog a harness "<<endl;
            break;
        }


    }
    string getname() const override { return name; }
    
};
class cat:public pet{
    public:
    cat(string n,string c,int a,char  g):pet(n,c,a,g){
        displayEducationalContent();
    };
    void accessories(){
        int choice;
        cout<<"WELCOME TO PET STORE "<<endl;
        cout<<"1. Cat coller : 15$ /n"<<"2.Cat bowls : 20$ /n"<<"3. Carrier: 15$ "<<endl;
        cin>>choice;
        switch(choice){
            case 1:
             cout<<"You bought your cat a leash "<<endl;
            break;
            case 2:
            cout<<"You bought your cat a Cat bowl "<<endl;
            break;
            case 3:
            cout<<"You bought your cat a Carrier "<<endl;
            break;
        }
}
    string getname() const override { return name; }
};
class parrot :public pet{
    public:
      parrot(string n,string c,int a,char  g):pet(n,c,a,g){
        displayEducationalContent();
      };

    void accessories(){
        int choice;
        cout<<"WELCOME TO PET STORE "<<endl;
        cout<<"1. Pet Cage  : 15$ /n"<<"2.Food bowl : 20$ /n"<<"3. Leash: 15$ "<<endl;
        cin>>choice;
        switch(choice){
            case 1:
             cout<<"You bought your parrot a cage "<<endl;
            break;
            case 2:
            cout<<"You bought your parrot a food bowl "<<endl;
            break;
            case 3:
            cout<<"You bought your parrot a leash "<<endl;
            break;
        }
    }
    string getname() const override { return name; }

};
int main(){
    int choice,x=-1,id,index=0,money;
    char y='Y',a='Y';
    string name,n1,msg;
    vector<user> u;
    cout<<"****WELCOME TO PET ADOPTION AND CARE PLATFORM****"<<endl;
     while(y=='Y'||y=='y'){
    cout<<"1. Create a user \n"<<"2. Add a pet \n"<<"3. Delete a pet  "<<endl<<"4. Go to pet care platform "<<endl<<"5. Go to gaming centre "<<endl<<"6. Add a friend "<<endl<<"7. Message a friend"<<endl<<"8. Log out "<<endl;
    cin>>choice;
    switch(choice ){
        case 1:
        cout<<"Enter your name "<<endl;
        cin>>name;
        cout<<"Enter you ID" <<endl;
        cin>>id; 
        u.emplace_back(name,id);
        break;
        case 2:
        x=-1;
        cout<<"Enter your user ID "<<endl;
        cin>>id;
        for(int i=0;i<u.size();i++){
            if(u[i].getid()==id){
                u[i].add_pet();
                x=1;

            }
        }
        if(x==-1){
            cout<<"user not found "<<endl;
        }
        break;
        case 3:
        int choice;
        cout<<"Enter your user id "<<endl;
        cin>>id;
        x=-1;
        for(int i=0;i<u.size();i++){
            if(u[i].getid()==id){
                cout<<"1.Do you want remove a dog \n"<<"2. Do you want to remove a cat \n "<<"3. Do you want to remove a parrot  "<<endl;
                cin>>choice;
                switch(choice){
                    case 1:
                    u[i].remove_dog(i);
                    break;
                    case 2:
                    u[i].remove_cat(i);
                    break;
                    case 3:
                    u[i].remove_parrot(i);
                }
                x=1;
                
            }
            if(x==-1){
                cout<<"User not found "<<endl;
            }
        }
        break;
    case 4:
    cout<<"enter your user ID to access your pets "<<endl;
    cin >>id;
    x=-1;
    for(int i=0;i<u.size();i++){
        if(u[i].getid()==id){
            index=i;
            money=u[i].getmoney();
            x=1;
    }
    }
    if(x==1){
     cout<<"These are all your pets "<<endl;
        for(int i=0;i<u[index].dpet.size();i++){
            cout<<u[index].dpet[i].getname()<<endl;
        }
        for(int i=0;i<u[index].cpet.size();i++){
            cout<<u[index].cpet[i].getname()<<endl;
        }
         for(int i=0;i<u[index].p_pet.size();i++){
            cout<<u[index].p_pet[i].getname()<<endl;
        }
        a='Y';
        while(a=='Y'||a=='y'){
    cout<<"Enter the name of the pet you want take care of "<<endl;
    cin>>n1;
    for(int i=0;i<u[index].dpet.size();i++){
        if(u[index].dpet[i].getname()==n1)
        money=u[index].getmoney();
        u[index].dpet[i].setmoney(money);
     cout<<"1. Do you want feed your pet \n"<<"2. Do you want play with your pet \n"<<"3. Do you want groom your pet \n"<<"4. Do you want rest your pet "<<endl<<"5. Buy accessories for your pet "<<endl;
     cin>>choice;
      switch(choice){
     case 1:
     u[index].dpet[i].feed();
     break;
     case 2:
     u[index].dpet[i].playing();
     break;
     case 3:
     u[index].dpet[i].grooming();
     break;
     case 4:
     u[index].dpet[i].rest();
     break;
    case 5:
     u[index].dpet[i].accessories();
     break;
    }
    }
    
    for(int i=0;i<u[index].cpet.size();i++){
         if(u[index].dpet[i].getname()==n1){
         money=u[index].getmoney();
        u[index].cpet[i].setmoney(money);
    cout<<"1. Do you want feed your pet \n"<<"2. Do you want play with your pet \n"<<"3. Do you want groom your pet \n "<<"4. Do you want rest your pet "<<endl<<"5. Buy accessories for your pet "<<endl;
     cin>>choice;
      switch(choice){
     case 1:
     u[index].cpet[i].feed();
     break;
     case 2:
     u[index].cpet[i].playing();
     break;
     case 3:
     u[index].cpet[i].grooming();
     break;
     case 4:
     u[index].cpet[i].rest();
     break;
     case 5:
     u[index].cpet[i].accessories();
     break;
    }
    }
    }
    for(int i=0;i<u[index].p_pet.size();i++){
        if(u[index].p_pet[i].getname()==n1){
         money=u[index].getmoney();
        u[index].p_pet[i].setmoney(money);
    cout<<"1. Do you want feed your pet \n"<<"2. Do you want play with your pet \n"<<"3. Do you want groom your pet \n  "<<"4. Do you want rest your pet "<<endl<<"5. Buy accessories for your pet "<<endl;
     cin>>choice;
      switch(choice){
     case 1:
     u[index].p_pet[i].feed();
     break;
     case 2:
     u[index].p_pet[i].playing();
     break;
     case 3:
     u[index].p_pet[i].grooming();
     break;
     case 4:
     u[index].p_pet[i].rest();
     break;
     case 5:
     u[index].p_pet[i].accessories();
     break;
      }
    }
        }
         cout<<"Enter Y to contiue or N to end "<<endl;
     cin>>a;
        }
    
    
     

    }
break;

case 5:
cout<<"Enter your user ID "<<endl;
cin>>id;
a='Y';
x=-1;
while(a=='Y'||a=='y'){
for(int i=0;i<u.size();i++){
   if(u[i].getid()==id){
    while(a=='Y'||a=='y'){
    cout<<"WELCOME TO GAMING CENTRE "<<endl;
    cout<<"Play games to earn money and spend it on your pets "<<endl;
    cout<<"Which game do you want play "<<endl<<"1. GUESS THE RANDOM NUMBER \n"<<"2. ROCK PAPER SCISSORS "<<endl;
    cin>>choice;
    x=1;
    switch(choice){
        case 1:
        u[i].randomgame();
        break;
        case 2:
        u[i].rps();
        break;
    }
    cout<<"Enter Y to contiue or N to end "<<endl;
    cin>>a;
   }
   
   
}
}
if(x==-1)
    cout<<" User not found "<<endl;
break;
case 6:
x=-1;
cout<<"Enter your user ID "<<endl;
cin>>id;
for(int i=0;i<u.size();i++){
    if(u[i].getid()==id){
        x=1;
}
}
if(x==1){
    x=-1;
    cout<<"enter the user who you want to be friends with "<<endl;
    cin>>id;
    for(int i=0;i<u.size();i++){
      if(u[i].getid()==id){
        u[i].addFriend(u[i]);
        x=1;
    }
}
if(x==-1){
    cout<<"user not found"<<endl;
}
}
if(x==-1){
    cout<<"user not found "<<endl;

}
break;
case 7:
cout<<"Enter your user ID "<<endl;
cin>>id;
x=-1;
for(int i=0;i<u.size();i++){
    if(u[i].getid()==id){
        x=1;
}
}
if(x==1){
    cout<<"Enter the user ID you want to message from your friends list "<<endl;
    cin>>id;
    for(int i=0;i<u.size();i++){
        if(u[i].getid()==id){
            cout<<"enter the message from (hi/bye/welcome/thanks/whatsup) "<<endl;
           cin>>msg;
            u[i].sendMessage(u[i],msg);
            x=1;
    }
}
if(x==-1){
    cout<<"user not found"<<endl;
}
}
if(x==-1){
    cout<<"user not found "<<endl;
}
break;
case 8:
cout<<"LOGGING OUT ......"<<endl;
 this_thread::sleep_for(seconds(3));
 cout<<"SUCESSFULLY LOGGED OUT "<<endl;
y='n';
break;
}

     

     }
}
}

    

