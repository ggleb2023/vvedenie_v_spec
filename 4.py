//z4
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


//z5

class request(object):
    def __init__(self):
        self.__count_of_failures = 0
        self.__sended_successfully = False

    def if_more_than_ten_failures(self):
        return self.__count_of_failures >= 10




    def can_retry(self):
        if self.__count_of_failures >= 10:
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