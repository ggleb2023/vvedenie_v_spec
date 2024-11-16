#include <iostream>

//z1

bool CanRun(){

    std::string platform;
    std::string architecture;
    std::string machine;
        
        bool RunningSystem = (platform == "Windows" || platform == "Linux") && (architecture == "64bit" && machine == "AMD64");
        
    return RunningSystem;
}

//z2

int GetPerimeter(int w, int h){
    return 2*(w + h);
}

//z3

#include <cmath>
struct Point
{
    int x = 0;
    int y = 0;
};

int GetDist()

int GetTriangleArea(Point p1, Point p2, Point p3){
    int d1 = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y,2));
    int d2 = sqrt(pow(p1.x - p3.x, 2) + pow(p1.y - p3.y,2));
    int d3 = sqrt(pow(p2.x - p3.x, 2) + pow(p2.y - p3.y,2));
    int pp = (d1 + d2 + d3) / 2;
    return sqrt(pp * (pp-d1) * (pp-d2) * (pp -d3));
}

//z4

def main():
    users = None
    usersData = None
    usersPasswords = None




    with open('users.json', 'w+') as file:
        try:
            users = json.loads(file.read())
        except:
            users = list()
            print('empty json!')
           
    with open('usersData.json', 'w+') as file:
        try:
            usersData = json.loads(file.read())
        except:
            usersData = list()
            print('empty json!')
    with open('usersPasswords.json', 'w+') as file:
        try:
            usersPasswords = json.loads(file.read())
        except:
            usersPasswords = list()
            print('empty json!')




    if not type(users) and not type(usersData) and not type(usersPasswords):
        print(f'can\'t load data cause one of parameters is None : \n users : {type(users) is not None} \n usersData : { type(usersData) is not None} \n usersPasswords : {type(usersPasswords) is not None}')
        exit(-1)




    users.append('John')
    usersData.append({
        'name' : 'John',
        'surname' : 'Wick'
    })
    usersPasswords.append('love my dog')




    with open('users.json', 'w') as file:
        file.write(json.dumps(users))
    with open('usersData.json', 'w') as file:
        file.write(json.dumps(usersData))
    with open('usersPasswords.json', 'w') as file:
        file.write(json.dumps(usersPasswords))




if __name__ == '__main__':
    main()

//z5

class request(object):
    def __init__(self):
        self.__count_of_failures = 0
        self.__sended_successfully = False




    def if_more_than_ten_failures(self):
        return self.__count_of_failures >= 10




    def can_retry(self):
        if self.if_more_than_ten_failures():
            return False
        else:
            return True
    def retry(self):
        if self.__sended_successfully or not self.can_retry():
            return False
       
        self.send()




        return self.retry()
    def send(self):
        self.__sended_successfully = True