#include <iostream>
#include <fstream> 
#include <string> 
#include <chrono> 
#include <thread> 
using namespace std;
const int MAX_USERS = 100; bool viewAllFlights(){
ifstream file("flight.txt");
 string line;
while (getline(file, line))
 { cout << line << endl;
}

file.close(); 
return false;}
bool removeFlight(string flightno){ 
ifstream file("flight.txt"); string line;
while (getline(file, line)) {

size_t found = line.find(flightno); 
if (found != string::npos) {
file.close(); 
return true;
cout<<"	"<<endl;

cout<<"Processing Cancellation ....." << endl;

using namespace std::this_thread; // sleep_for, sleep_until


using namespace std::chrono; // nanoseconds, system_clock, seconds

sleep_for(nanoseconds(10)); 
sleep_until(system_clock::now() + seconds(4)); 
cout << "Cancellation Successful" << endl; return true;}}
file.close(); return false;}
bool removeTicket(string flightno){ ifstream file("ticket.txt"); 
string line;
while (getline(file, line)) {

size_t found = line.find(flightno); 
if (found != string::npos) {
file.close();
 return true;
cout<<"	"<<endl;

cout<<"Processing Cancellation ....." << endl;

using namespace std::this_thread; // sleep_for, sleep_until

using namespace std::chrono; // nanoseconds, system_clock, seconds

sleep_for(nanoseconds(10)); 
sleep_until(system_clock::now() + seconds(4)); 
cout << "Cancellation Successful" << endl; return true;}}
file.close();
return false;}
bool addFlight(){

string flightno, source, destination, date, time, price;

cout<<"	"<<endl;


cout << "Enter flight number: ";

cout<<"	"<<endl;

cin >> flightno;

cout<<"	"<<endl;

cout << "Enter source: ";

cout<<"	"<<endl;

cin >> source;

cout << "Enter destination: ";

cout<<"	"<<endl;

cin >> destination;
 cout << "Enter date: "; 
cin >> date;
cout<<"	"<<endl;

cout << "Enter time: ";

cout<<"	"<<endl;

cin >> time;

cout<<"	"<<endl;

cout << "Enter price: ";

cout<<"	"<<endl;

cin >> price; 
ofstream file("flight.txt", ios::app); 
if (file.is_open()) {
file << flightno << " " << source << " " << destination << " " << date << " " << time << " " << price << endl;

file.close();

cout << "Flight Added Successfully!" << endl;
 return true;
} else {cout << "Failed to open users file for writing." << endl;
 return false;}}




bool isUsernameExists(string username, string filename) { 
ifstream file(filename);
string line;

while (getline(file, line)) {

size_t found = line.find(username); 
if (found != string::npos) {
file.close();
 return true;}}
file.close();
 return false;}
bool checkticket(string username, string filename) { 
ifstream file(filename);
string line;

while (getline(file, line)) {

size_t found = line.find(username); 
if (found != string::npos) {
file.close();
 return true;}}
file.close(); 
return false;}
bool registerUser(string username, string password, string filename) {
 if (isUsernameExists(username, filename)) {
cout << "Username already exists. Please choose a different username." <<
endl;

return false;}

ofstream file(filename, ios::app);

 if (file.is_open()) {
file << username << " " << password << endl;


file.close();

cout << "Registration successful!" << endl;
 return true;
} else {


cout << "Failed to open users file for writing." << endl; 
return false;}}
bool addBeverage(string username, string filename){
if (isUsernameExists(username, filename)) {
cout << "U CAN AD ONLY ONE ITEM IN THIS FLIGHT." << endl;

return false;}

ofstream file(filename, ios::app); 
if (file.is_open()) {
file << username<< endl;
 file.close();
cout << "Processing Payment ..." << endl;

using namespace std::this_thread; // sleep_for, sleep_until

using namespace std::chrono; // nanoseconds, system_clock, seconds

sleep_for(nanoseconds(10)); 
sleep_until(system_clock::now() + seconds(4)); 
cout << "Payment Successful" << endl;
return true;

} else {

cout << "Failed to open beverage file for writing." << endl; 
return false;}}
bool isLoginValid(string username, string password, string filename) {
 ifstream file(filename);
string line;

while (getline(file, line)) {


size_t found = line.find(username + " " + password); 
if (found != string::npos) {
file.close();
 return true;}}
file.close();
 return false;}
bool showflight(string filename) { 
ifstream file(filename);
string line;

while (getline(file, line)) { 
cout << line ;}
file.close(); 
return false;}
bool checkflight(string username, string password, string filename) {
 ifstream file(filename);
string line;

while (getline(file, line)) {

size_t found = line.find(username + " " + password); 
if (found != string::npos) {
file.close(); 
return true;}}
file.close(); 
return false;}
bool bookticket(string id, string filename) { 
if (checkticket(id, filename)) {
cout << "Flight already in list " << endl; 
return false;}
ofstream file(filename, ios::app);


if (file.is_open()) { 
file << id << endl; 
file.close();
cout << "Processing Payment ....." << endl;

using namespace std::this_thread; // sleep_for, sleep_until

using namespace std::chrono; // nanoseconds, system_clock, seconds

sleep_for(nanoseconds(10)); 
sleep_until(system_clock::now() + seconds(4));
 cout << "Payment Successful" << endl;
return true;

} else {

cout << "Failed to open users file for writing." << endl; 
return false;	}}
bool cancelFlight(string id,string filename){ 
ifstream file(filename);
string line;

while (getline(file, line)) { 
size_t found = line.find(id); 
if (found != string::npos) {
file.close();
 return true;
cout<<"	"<<endl;

cout<<"Processing Cancellation ....." << endl;

using namespace std::this_thread; // sleep_for, sleep_until

using namespace std::chrono; // nanoseconds, system_clock, seconds

sleep_for(nanoseconds(10)); 
sleep_until(system_clock::now() + seconds(4)); 
cout<<"	"<<endl;



cout << "Cancellation Successful" << endl; 
cout<<"	"<<endl;}}
file.close();
return false;}
int main() {

string username,password; 
while (true) {
cout<<"	"<<endl;

cout << "Welcome to the Login/Register System!" << endl; 
cout<<"	"<<endl;
cout << "1. Register as Customer" << endl; 
cout<<"	"<<endl;
cout << "2. Customer Login" << endl;

cout<<"	"<<endl;

cout << "3. Admin Login" << endl;

cout<<"	"<<endl;

cout << "4. Quit" << endl;

cout<<"	"<<endl;

cout << "Enter your choice: "; 
int choice;
cin >> choice; switch (choice) {
case 1: {


// Register as Customer ifstream file("customers.txt"); 
file.close();
string newUsername, newPassword; cout << "Enter a new username: ";

cin >> newUsername;

cout << "Enter a new password: "; cin >> newPassword;
if (registerUser(newUsername, newPassword, "customers.txt")) { break;
} else {

cout << "Registration failed. Please try again." << endl; break;}}
case 2: {

cout << "Enter your username: "; cin >> username;
cout << "Enter your password: "; cin >> password;
if (isLoginValid(username, password, "customers.txt")) { cout << "Customer login successful!" << endl;
int select;

cout << "ENTER THE CHOICE : "<<endl;

cout<<"	"<<endl;

cout << "1. BOOK TICKET" << endl;

cout<<"	"<<endl;}}}}