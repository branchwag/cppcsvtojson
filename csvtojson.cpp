#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main(int argc, char* argv) {

    std::vector<string> data;

    ifstream inputFile;
    inputFile.open("testfilewithtrades.csv");

    string line = "";
    while (getline(inputFile, line)) {

        string account;
        string accountType;
        string orderID;
        string executionID;
        string BS; 
        string symbol;
        int orderQuantity;
        int executionQuantity;
        double price;
        string marketCode;
        string capacityCode;
        string exchange;
        string orderStatus; 
        string executionTime;
        string tradeDate;
        string settleDate;
        string frontExec;
        string backExec; 
        string BRK01; 
        string destinationCode;
        string clearingFacilitationAccount;
        string blueID;
        string positionEffect;
        string callPut;
        double strikePrice;
        string expDate;
        string legend;
        string FCOM; 
        string commissionType;
        string CCOM;
        string Fee1;
        string Fee2;
        string Fee3;
        string Fee4;
        string Fee5;
        string trailer;
        string RRGross;
        string interest;
        string interestRateType;
        string principal;
        string currency;
        string filler1;
        string specialCode;
        string Filler3;
        string Filler4;
        string Filler5;
        string tempString = "";

        stringstream inputString(line);

        getline(inputString, account, ',');
        getline(inputString, accountType , ',');

        //cout << line << endl;

        cout << account << endl;
    
        line = "";
        
    }

//cout << line << endl;
//cout << "test" << endl;
    
    return 0;
}