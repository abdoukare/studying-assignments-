#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <fstream>
#include <sstream>
#include <algorithm>
// Date class
class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d = 1, int m = 1, int y = 2024): day(d), month(m), year(y) {} // constructor with default values 
    
    // Getters and setters
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    
    std::string toString() const {
        return std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
    } // convert it to strings to make the look better 
};

// Medicine class
class Medicine {
private:
    std::string name;
    int id;
    Date expDate;
    float price;
    int quantity;

public:
    Medicine(std::string n = "", int i = 0, Date exp = Date(), float p = 0.0, int q = 0)
        : name(n), id(i), expDate(exp), price(p), quantity(q) {}
    
    // Getters and setters fucntions 
    std::string getName() const { return name; }
    int getId() const { return id; }
    Date getExpDate() const { return expDate; }
    float getPrice() const { return price; }
    int getQuantity() const { return quantity; }
    void setQuantity(int q) { quantity = q; }
    void setPrice(float p) { price = p; }
};

// User class to handle authentication
class User {
private:
    std::string username;
    std::string password;

public:
    User(std::string u, std::string p): username(u), password(p) {}
    
    std::string getUsername() const { return username; }
    bool checkPassword(const std::string& p) const { return password == p; }
	std::string getPassword() const { return password;}
};

// PharmacySystem class to manage the entire system
class PharmacySystem {
private:
    std::vector<Medicine> medicines;
    std::vector<User> users;
    static const int MAX_MEDICINES = 100;
    User* currentUser;

public:
    PharmacySystem(): currentUser(nullptr) {}
    
    bool registerUser(const std::string& username, const std::string& password) {
        // Check if username already exists
        for(const User& user : users) {
            if(user.getUsername() == username) {
                return false;
            }
        }
        users.push_back(User(username, password));
        return true;
    }
    
    bool login(const std::string& username, const std::string& password) {
        for(const User& user : users) {
            if(user.getUsername() == username && user.checkPassword(password)) {
                return true;
            }
        }
        return false;
    }
    
    bool addMedicine(const Medicine& med) {
        if(medicines.size() >= MAX_MEDICINES) {
            return false;
        }
        medicines.push_back(med);
        return true;
    }
    
    bool removeMedicine(const std::string& name) {
        for(auto it = medicines.begin(); it != medicines.end(); ++it) {
            if(it->getName() == name) {
                medicines.erase(it);
                return true;
            }
        }
        return false;
    }
    
    Medicine* searchMedicine(int id) {
        for(auto& med : medicines) {
            if(med.getId() == id) {
                return &med;
            }
        }
        return nullptr;
    }
    
    const std::vector<Medicine>& getAllMedicines() const {
        return medicines;
    }
	// making the file handling (writing on the file)
	void saveMedicineToFile(const std::string& filename) {
        std::ofstream file(filename);
        if (!file) {
            std::cerr << "Error opening file for writing!" << std::endl;
            return;
        }
        
        for (const auto& med : medicines) {
            file << med.getName() << ","
                 << med.getId() << ","
                 << med.getPrice() << ","
                 << med.getQuantity() << ","
                 << med.getExpDate().toString() << "\n";
        }
        file.close();
    }
	// making the file handling (reading from the file)
	void loadMedicineFromFile(const std::string& filename) {
        std::ifstream file(filename);
        if (!file) {
            std::cerr << "Error opening file for reading!" << std::endl;
            return;
        }

        medicines.clear();
        std::string line;
        
        while (std::getline(file, line)) {
            std::stringstream ss(line);
            std::string name, dateStr;
            int id, quantity;
            float price;
            
            // Parse CSV format
            std::getline(ss, name, ',');
            ss >> id;
            ss.ignore(); // Skip comma
            ss >> price;
            ss.ignore(); // Skip comma
            ss >> quantity;
            ss.ignore(); // Skip comma
            std::getline(ss, dateStr);
            
            // Parse date string (assuming format is dd/mm/yyyy)
            int day, month, year;
            sscanf(dateStr.c_str(), "%d/%d/%d", &day, &month, &year);
            
            medicines.emplace_back(name, id, Date(day, month, year), price, quantity);
        }
        
        file.close();
    }

	// Implement file handling for User Authentication 

	void saveUsersToFile(const std::string& filename) {
        std::ofstream file(filename);
        if (!file) {
            std::cerr << "Error opening file for writing users data!" << std::endl;
            return;
        }
        
        for (const auto& user : users) {
            file << user.getUsername() << "," << user.getPassword() << "\n";
        }
        file.close();
    }
	void loadUsersFromFile(const std::string& filename) {
        std::ifstream file(filename);
        if (!file) {
            std::cerr << "Error opening file for reading users data!" << std::endl;
            return;
        }

        users.clear();
        std::string line;
        
        while (std::getline(file, line)) {
            std::stringstream ss(line);
            std::string username, password;
            
            std::getline(ss, username, ',');
            std::getline(ss, password);
            
            // Remove any trailing whitespace from password
            password.erase(std::remove_if(password.begin(), password.end(), ::isspace), password.end());
            
            if (!username.empty() && !password.empty()) {
                users.emplace_back(username, password);
            }
        }
        
        file.close();
    }
};



int main() {

	PharmacySystem pharmacy;
int choice;
std::string username, password;

// First try to load existing users
pharmacy.loadUsersFromFile("users.csv");

// Register admin user if it doesn't exist and save immediately
if (pharmacy.registerUser("admin", "admin123")) {
    pharmacy.saveUsersToFile("users.csv");
}

// Load medicines
pharmacy.loadMedicineFromFile("medicines.csv");

    while (true) {  // Main program loop
        system("cls");  // Clear screen
        std::cout << "======================================\n";
        std::cout << "    Pharmacy Management System\n";
        std::cout << "======================================\n\n";
        
        // Login section
        std::cout << "Enter username: ";
        std::cin >> username;
        std::cout << "Enter password: ";
        std::cin >> password;
		pharmacy.saveUsersToFile("users.csv");
        
        if (!pharmacy.login(username, password)) {
            std::cout << "\nInvalid username or password!\n";
            std::cout << "Press Enter to try again...";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.get();
            continue;
        }
        
        do {
            std::system("cls");
            std::cout << "======================================\n";
            std::cout << "    Pharmacy Management System\n";
            std::cout << "======================================\n\n";
            std::cout << "Enter your choice: " << std::endl;
            std::cout << "1. Add Medicine" << std::endl;
            std::cout << "2. Remove Medicine" << std::endl;
            std::cout << "3. Search Medicine" << std::endl;
            std::cout << "4. View All Medicines" << std::endl;
            std::cout << "5. Logout" << std::endl;
            std::cout << "6. Exit Program" << std::endl;
            std::cout << "Enter your choice (1-6): ";
            
            // Fixed double cin issue
            if (!(std::cin >> choice)) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input. Please enter a number between 1 and 6.\n";
                continue;
            }

            switch (choice) {
                case 1: {
                    // Add Medicine
                    std::string name;
                    int id;
                    float price;
                    int quantity;
                    int day, month, year;
                    std::cin.ignore();
                    std::cout << "Enter medicine name: ";
                    std::getline(std::cin, name);
                    std::cout << "Enter medicine ID: ";
                    std::cin >> id;
                    std::cout << "Enter medicine price: ";
                    std::cin >> price;
                    std::cout << "Enter medicine quantity: ";
                    std::cin >> quantity;
                    std::cout << "Enter expiry date (day month year): ";
                    std::cin >> day >> month >> year;
                    Date expDate(day, month, year);
                    Medicine Newmed(name, id, expDate, price, quantity);
                    if (pharmacy.addMedicine(Newmed)) {
                        std::cout << "Medicine added successfully.\n";
						pharmacy.saveMedicineToFile("medicines.csv");
                    } else {
                        std::cout << "Failed to add medicine. Maximum limit reached.\n";
                    }
                    break;
                }
                case 2: {
                    // Remove Medicine
                    std::string medName;
                    std::cin.ignore();
                    std::cout << "Enter medicine name to remove: ";
                    std::getline(std::cin, medName);
                    if (pharmacy.removeMedicine(medName)) {
                        std::cout << "Medicine removed successfully.\n";
						pharmacy.saveMedicineToFile("medicines.csv");
                    } else {
                        std::cout << "Medicine not found.\n";
                    }
                    break;
                }
				//pharmacy.saveMedicineToFile("medicines.csv");
                case 3: {
                    // Search Medicine 
                    int medId;
                    std::cout << "Enter medicine ID to search: ";
                    std::cin >> medId;
                    Medicine* med = pharmacy.searchMedicine(medId);
                    if (med) {
                        std::cout << "Medicine found!\n";
                        std::cout << "Name: " << med->getName() << std::endl;
                        std::cout << "ID: " << med->getId() << std::endl;
                        std::cout << "Price: " << med->getPrice() << std::endl;
                        std::cout << "Quantity: " << med->getQuantity() << std::endl;
                        std::cout << "Expiry Date: " << med->getExpDate().toString() << std::endl;
                    } else {
                        std::cout << "Medicine not found.\n";
                    }
                    break;
                }
                case 4: {
                    // View all medicines 
                    const auto& meds = pharmacy.getAllMedicines();
                    if (meds.empty()) {
                        std::cout << "No medicines in the system.\n";
                    } else {
                        std::cout << "All medicines in the system:\n";
                        for (const Medicine& med : meds) {
                            std::cout << "Name: " << med.getName() << std::endl;
                            std::cout << "ID: " << med.getId() << std::endl;
                            std::cout << "Price: " << med.getPrice() << std::endl;
                            std::cout << "Quantity: " << med.getQuantity() << std::endl;
                            std::cout << "Expiry Date: " << med.getExpDate().toString() << std::endl;
                            std::cout << "-----------------------------\n";
                        }
                    }
                    break;
                }
                case 5: {
                    std::cout << "Logging out...\n";
                    break;
                }
                case 6: {
                    std::cout << "Exiting the program...\n";
                    return 0;
                }
                default: {
                    std::cout << "Invalid choice. Please enter a number between 1 and 6.\n";
                    break;
                }
            }
            
            // Wait for user input before continuing
            std::cout << "\nPress Enter to continue...";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.get();
            
        } while (choice != 5);
    }
    
    return 0;
}
