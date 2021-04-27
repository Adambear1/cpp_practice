#include <iostream>
#include <string>
using namespace std;

class Movie{
    private:
        int rating;
    public:
        string title;
        string director;
        // int rating;
    Movie (string a_title, string a_director, int a_rating){
        title = a_title;
        director = a_director;
        setRating(a_rating);
    };
    void setRating(int a_rating){
        if(a_rating >= 0 && a_rating <= 10){
            rating = a_rating;
        } else{
            rating = 0;
        };
    };
    int getRating(){
        return rating;
    }

};

int main()
{
    Movie DumbAndDumber("Dumb and Dumber", "Will Smith", 10);
    DumbAndDumber.setRating(8);
    cout << DumbAndDumber.getRating();
}