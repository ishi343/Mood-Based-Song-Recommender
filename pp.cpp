#include <iostream>
using namespace std;

class Music
{
protected:
    string mood;

public:
    void setMood(string m)
    {
        mood = m;
    }

    virtual void recommend() = 0;   
};

class Song : public Music
{
private:
    string name;
    string artist;

public:
  
    Song()
    {
        name = "Unknown";
        artist = "Unknown";
    }

    Song(string n, string a)
    {
        name = n;
        artist = a;
    }

    void recommend()
    {
        cout << "\nRecommended Song: " << name << " by " << artist << endl;
    }

    void setDetails(string n, string a)
    {
        name = n;
        artist = a;
    }

    void getDetails()
    {
        cout << "Song Name : " << name << endl;
        cout << "Artist    : " << artist << endl;
    }

    ~Song()
    {
        cout << "\nThank You for using Song Recommender!\n";
    }
};

int main()
{
    string userMood;

    cout << "Enter Mood (happy/sad/romantic/motivational/chill): ";
    cin >> userMood;

    Song s1;   

    if (userMood == "happy")
        s1.setDetails("Cruel Summer", "Taylor Swift");

    else if (userMood == "sad")
        s1.setDetails("Let Me Down Slowly", "Alec Benjamin");

    else if (userMood == "romantic")
        s1.setDetails("Perfect", "Ed Sheeran");

    else if (userMood == "motivational")
        s1.setDetails("Unstoppable", "Sia");

    else if (userMood == "chill")
        s1.setDetails("Levitating", "Dua Lipa");

    else
    {
        cout << "Invalid Mood!" << endl;
        return 0;
    }

    s1.setMood(userMood);

    Music *ptr;
    ptr = &s1;

    ptr->recommend();

    cout << endl;
    s1.getDetails();

    return 0;
}