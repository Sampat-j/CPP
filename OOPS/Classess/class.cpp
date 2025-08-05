#include<iostream>

using namespace std;
class Player{
    public:
    int score;
    int health;
    void showHealth(){
        cout<<"health is "<<health<<endl;
    }
};
class Anime{
    private:
    int date;
    int rating;
    
    public:
    //setter
    void setDate(int d){
        date = d;
    }
     void setRating(int r){
        rating = r;
    }
    //getter
     int getDate(){
        return date;
    }
     int getRating(){
        return rating;
    }

};

int main(){
  Player amit;
  amit.score = 90;
  amit.health =  100;
  cout<<amit.score<<endl;  
  cout<<amit.health<<endl;

  Player harsh;
  harsh.score = 60;
  harsh.health =  10;
  cout<<harsh.score<<endl;  
  cout<<harsh.health<<endl;

  harsh.showHealth();

  Anime naruto;
  naruto.setDate(20);
  naruto.setRating(10);
  cout<<naruto.getDate()<<endl;
  cout<<naruto.getRating()<<endl;
}