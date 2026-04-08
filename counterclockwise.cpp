
# include <bits/stdc++.h>

using namespace std;



class Robot {
public:
    int w , h;
    int x,y;
    string direction;
    Robot(int width, int height) {
        w=width;
        h=height;
        x=0;y=0;
        direction="East";
    }
    
    void step(int num) {
        int to=2*w+2*h-4;
        if(num>to){
            num=num%to;
            if(x==0&&y==0)direction="South";
            if(x==w-1&&y==h-1)direction="North";
            if(x==w-1&&y==0)direction="East";
            if(x==0&&y==h-1)direction="West";
        }
        while(num>0){
            if(direction=="East"){
                
                if(num>w-x-1){
                    direction="North";
                    num-=w-x-1;
                    x=w-1;
                }
                else{
                    x+=num;
                    num=0;
                }
            }
            else if(direction=="North"){
                    if(num>h-y-1){
                        direction="West";
                        num-=h-y-1;
                        y=h-1;
                    }
                    else{
                        y+=num;
                        num=0;
                    }
                
            }
            else if(direction=="South"){
                    if(num>y){
                        num-=y;
                        direction="East";
                        y=0;
                    }
                    else{
                        y-=num;
                        num=0;
                    }
            }
            else{
                    if(num>x){
                        num-=x;
                        x=0;
                        direction="South";
                    }
                    else{
                        x-=num;
                        num=0;
                    }
            }
            cout<<x<<' '<<y<<" "<<direction<<'\n';
        }
    }
    
    vector<int> getPos() {

        return {x,y};
    }
    
    string getDir() {
        return direction;
    }
};

/**
 * Your Robot object will be instantiated and called as such:
 * Robot* obj = new Robot(width, height);
 * obj->step(num);
 * vector<int> param_2 = obj->getPos();
 * string param_3 = obj->getDir();
 */