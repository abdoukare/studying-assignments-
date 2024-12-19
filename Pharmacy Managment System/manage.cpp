#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int MAX_MEDECINES = 200;

struct Date {
    int day;
    int month;
    int year;
};

struct Medecine {
    string Name;
    int ID;
    Date exp_date;
    float price;
    int quantity;
};

vector<string> users = {};
vector<string> passwords = {};

Medecine container[MAX_MEDECINES];
int medCount = 0;

// Declaring the important functions for the system 
bool login();
void RegisterUser();
void ForgotPassword();
void addMed();
void removeMed();
void searchMed();
void displayMed();

int main() {
    int mainChoice;
    cout << "Welcome to the Pharmacy Management System (kadjoudj edition)" << endl;

    do {
        cout << "\n1. Log in" << endl;
        cout << "2. Register" << endl;
		cout<< "3. Forget password "<<endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> mainChoice;

        if (mainChoice == 1) {
            if (!login()) {
                cout << "Exiting program." << endl;
                return 0;
            }
        } else if (mainChoice == 2) {
            RegisterUser();
		} else if(mainChoice == 3) {
			ForgotPassword();
		} else if (mainChoice == 4) {
            cout << "Exiting program..." << endl;
            return 0;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (mainChoice != 4);

    // inserting the user choice
    int choice;
    do {
        cout << "1. Add Medicine." << endl;
        cout << "2. Remove Medicine by Name." << endl;
        cout << "3. Search Medicine by ID." << endl;
        cout << "4. Display All Medicines." << endl;
        cout << "5. Exit." << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                addMed();
                break;
            case 2:
                removeMed();
                break;
            case 3:
                searchMed();
                break;
            case 4:
                displayMed();
                break;
            case 5:
                cout << "Exiting program......" << endl;
                break;
            default:
                cout << "Invalid choice " << endl;
        }
    } while (choice != 5);

    return 0;
}

// log in section 
bool login() {
    string username, pwd;
    cout << "Please log in to the system. " << endl;
    cout << "Enter a username: " << endl;
    cin >> username;
    cout << "Enter a password: " << endl;
    cin >> pwd;
	// searching about the users if they are registred
    for (int i = 0; i < users.size(); ++i) {
        if (users[i] == username && passwords[i] == pwd) {
            cout << "Login successful!" << endl;
            return true;
        }
    }
    cout << "Invalid username or password." << endl;
    return false;
}

// Register Section

void RegisterUser() {
    string newusername, newpwd;
    cout<<" Pharmacien Registraion "<<endl;
    cout<<"Enter your username\n";
    cin >> newusername;

    for(int i = 0; i < users.size(); i++){
        if(users[i] == newusername){
            cout<<"This name is taken before so please choose another one\n";
            return;
        }
    }
    cout<<"enter a new code : "<<endl;
    cin >> newpwd;
    users.push_back(newusername);
    passwords.push_back(newpwd);
    cout<<"Registraion successful body . go to log in section ."<<endl;

}

// Forget password functionality 
void ForgotPassword() {
	string enterusername;
	bool userFound = false;
	int userindex = -1;
	cout<<"\n ----------- Forgeting password ----------"<<endl;
	cout<<" Enter your username :"<<endl;
	cin >> enterusername;
	//std::cin.ignore();
	//getline(cin, enterusername);
	// searching about the users if they are registred 
	for(int i = 0; users.size(); i++){
			if(users[i] == enterusername){
				userFound = true;
				userindex = i;
				break;
			}
	}

	if(userFound){
		string setpassword;
		cout<<"Enter your new password :"<<endl;
		cin >> setpassword;
		passwords[userindex] == setpassword;
		 cout << "Password reset successfully!" << endl;
    } else {
        cout << "Username not found. Please try again." << endl;
    }
}



// adding medicine functionality 
void addMed() {
    if (medCount >= MAX_MEDECINES) {
        cout << "Medicine container is full!" << endl;
        return;
    }

    Medecine med;
    cout << "Enter medicine name: ";
    //cin >> med.Name;
	std::cin.ignore();
	getline(cin, med.Name);
    cout << "Enter medicine ID: ";
    cin >> med.ID;
    cout << "Enter expiry date (day month year): ";
    cin >> med.exp_date.day >> med.exp_date.month >> med.exp_date.year;
    cout << "Enter price: ";
    cin >> med.price;
    cout << "Enter quantity: ";
    cin >> med.quantity;

    container[medCount++] = med;
    cout << "Medicine added successfully!" << endl;
}
// remove med function 
void removeMed() {
    string name;
    cout << "Enter the name of the medicine to remove: ";
    cin >> name;

    for (int i = 0; i < medCount; ++i) {
        if (container[i].Name == name) {
            for (int j = i; j < medCount - 1; ++j) { // az7et kol elemnt l element li wrah (shifting)
                container[j] = container[j + 1];
            }
            --medCount;
            cout << "Medicine removed successfully!" << endl;
            return;
        }
    }
    cout << "Medicine not found!" << endl;
}

// searching function 

void searchMed() {
    int id;
    cout << "Enter the ID of the medicine to search: ";
    cin >> id;

    for (int i = 0; i < medCount; ++i) {
        if (container[i].ID == id) {
            cout << "Medicine found: " << endl;
            cout << "Name: " << container[i].Name << endl;
            cout << "ID: " << container[i].ID << endl;
            cout << "Expiry Date: " << container[i].exp_date.day << "/" << container[i].exp_date.month << "/" << container[i].exp_date.year << endl;
            cout << "Price: " << container[i].price << endl;
            cout << "Quantity: " << container[i].quantity << endl;
            return;
        }
    }
    cout << "Medicine not found!" << endl;
}
// displaying 
void displayMed() {
    if (medCount == 0) {
        cout << "No medicines available!" << endl;
        return;
    }

    for (int i = 0; i < medCount; ++i) {
        cout << "Medicine " << i + 1 << ":" << endl;
        cout << "Name: " << container[i].Name << endl;
        cout << "ID: " << container[i].ID << endl;
        cout << "Expiry Date: " << container[i].exp_date.day << "/" << container[i].exp_date.month << "/" << container[i].exp_date.year << endl;
        cout << "Price: " << container[i].price << endl;
        cout << "Quantity: " << container[i].quantity << endl;
        cout << "------------------------" << endl;
    }
}

