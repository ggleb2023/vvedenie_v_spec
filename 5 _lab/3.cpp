// извлечение переменной
std::string platform;
std::string architecture;
std::string machine;
bool CanRun(){
    bool isValidPlatform = platform == "Windows" || platform =="Linux";
    bool availableArch = architecture == "64bit";
    bool availableMachine = machine == "AMD64";
    
    return isValidPlatform && availableArch && availableMachine;
    
}
// выстраивание переменной
int GetPerimeter(int w, int h) {
    return 2 * (w + h);
}
//Замена переменной вызовом метода
#include <cmath>
struct Point
{
    int x = 0;
    int y = 0;
};


int GetDistance(Point p1, Point p2){
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1. y - p2. y, 2));
}

int GetTriangleArea(Point p1, Point p2, Point p3){
    int d1 = GetDistance(p1,p2);
    int d2 = GetDistance(p1, p3);
    int d3 = GetDistance(p2,p3);
    int pp = (d1 + d2 + d3) / 2;
    return sqrt(pp * (pp-d1) * (pp-d2) * (pp -d3));
}


// Извлечение метода
def openJson (path):
with open(path, 'w+') as file:
return json.loads (file.read())

def saveJson (path, data):
with open (path, 'w') as file:
file.write(json.dumps(data))

def main():
users = openJson('users. json')
usersData = openJson('usersData. json')
usersPasswords - openJson ('usersPasswords. json')

if not type(users) and not type(usersData) and not type(usersPasswords):
print (f'can\'t load data cause one of parameters is None : In users: {type(users) is not None] In usersData: { type (usersData) is not None] In usersPasswords
exit (-1)

users.append (John')
usersData.append({
'name' : 'John' 
'surnam' : 'Wick'
}
usersPasswords. append ('love my dog")
saveJson (users. ¡son' „users)
saveJson(* usersData. json* ‚usersData)
saveJson(*usersPasswords-json"‚usersPasswords)
if name
main_



