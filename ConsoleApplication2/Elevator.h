#include <iostream>
#include <string>
#include <queue>
#include <set>
#include <stack>
using namespace std;

class Elevator {
    bool move = false;
protected:
    void Moves();
    void DontMove();
    

public:
    void LiftMove();
};








    /*
 
class Elevator
{
private:
	bool move_up=false;
	bool move_down=false;
	int flor_sum;
	int pos=1;
	queue<int> queue;
    set<int> levels;
    bool flag = true;
    string str = "";
   
    int level;
    void call_que() {
        for (int n : this->levels)
            this->queue.push(n);
    }
    void set_queue() {
        for (int n : levels) {
            this->queue.push(n);
        }
        this->levels.clear();
        if (move_down) {
            this->pos = queue.front();
        }
        else
            this->pos = queue.back();
        
    }
    bool isNumeric(std::string const& str)
    {
        char* p;
        strtol(str.c_str(), &p, 10);
        return *p == 0;
    }
    void reverseQueue(std::queue<int>& q) {
        std::stack<int> s;
        while (!q.empty()) {
            s.push(q.front());
            q.pop();
        }
        while (!s.empty()) {
            std::cout << s.top() << endl;
            s.pop();
        }
    }
   
public:
    void set_flor_sum() {
        cout << "please input max level: ";
        cin >> this->flor_sum;
        
    }
	void call_set() {	
        cout << "\nplease input levels separated by commas: ";
		cin >> this->str;
        str += ',';
        int pos = str.find(",");
        while (str != ""){
           pos = str.find(",");
            string sub = str.substr(0, pos);
            str.erase(0, pos + 1);
            //cout << "String is: " << stoi(sub);
            if (sub!=""&&isNumeric(sub)) {
                
                this->level = stoi(sub);
                if (flor_sum > this->level) {
                    if (this->pos != level && move_up && this->pos < this->level) {
                        levels.insert(level);
                    }
                    else if (this->pos != level && move_down && this->pos > this->level) {
                        levels.insert(level);
                    }
                    else if (this->pos != level) {
                        levels.insert(level);
                    }
                    else {
                        cout << "elevator on this level";
                    }

                    if (flag) {
                        if (this->pos < this->level)
                            move_up = true;
                        else
                            move_down = true;
                    }
                }
                else
                    cout << "dont level: " << this->level << endl;
            }
            else {
                cout << "error input: " << sub << endl;
            }
        }
	}
    void get_set() {
        for (int n :levels) {
            cout << n<<endl;
        }
    }
    void move_elevate() {
        set_queue();
        if (this->move_up) {
            cout << "move up" << endl;
            while (!queue.empty())  // пока очередь не пуста
            {
                std::cout << queue.front() << std::endl;
                queue.pop();    // извлекаем первый элемент
            }
        }
        else if (this->move_down) {
            cout << "move down" << endl;
            reverseQueue(this->queue);
        }
        else {
            cout << "lift dont move" << endl;
        }
        this->move_up = false;
        this->move_down = false;
    }
    
    void get_pos() {
        cout<<"pos: " << pos << endl;
    }
    void hov_move() {
        if (move_up) {
            cout << "move_up: " << endl;
        }
        else {
            cout << "move_down: " << endl;
        }
    }
    
};
*/
