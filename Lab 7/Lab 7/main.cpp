//
//  main.cpp
//  Lab 7
//
//  Created by Aim Kim on 2022-07-13.
//

#include <iostream>
#include <string>

using namespace std;
//all data memn,ber private

class Movie
{
    string movie_name;
    string MPAA_rating;
    int something_rating[5];
    int terrible_rating;
    int bad_rating;
    int ok_rating;
    int good_rating;
    int great_rating;
    int addRating(int rating);
    void getAverage();
    string getName();
    string getMPAA();
    void setMPAA();
    void setName();
    
public:
    Movie ()
    {
        movie_name = "Empty";
        MPAA_rating = "Empty";
        terrible_rating = 0;
        bad_rating = 0;
        ok_rating = 0;
        good_rating = 0;
        great_rating = 0;
    };
    Movie (string new_name,string new_rating)
    {
        movie_name = new_name;
        MPAA_rating = new_rating;
        terrible_rating = 0;
        bad_rating = 0;
        ok_rating = 0;
        good_rating = 0;
        great_rating = 0;

    };
    
};
string Movie :: getName()
{
    return movie_name;
};

string Movie::getMPAA()
{
    return MPAA_rating;
};


int Movie::addRating(int rating)
{
    //recieve number that corresposnds to rating and add a tick to the something_rating
    if (rating == 1)
    {
        terrible_rating++;
    }
    else if (rating == 2)
    {
        bad_rating++;
    }
    else if(rating == 3)
    {
        ok_rating++;
    }
    else if( rating == 4)
    {
        good_rating++;
    }
    else if( rating == 5)
    {
        great_rating++;
    }
    return 0;
}
void Movie::getAverage()
{
    cout << (terrible_rating * 1
             + bad_rating * 2
             + ok_rating * 3
             + good_rating * 4
             + great_rating * 5)/5.0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
