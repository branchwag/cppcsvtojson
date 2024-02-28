#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

struct TradeRecord {
public:
    TradeRecord(
        string account,
        string accountType
    ) {
        Account = account;
        AccountType = accountType;
    }

    void display() {
        cout << "   Account: " << Account << endl;
        cout << "   AccountType: " << AccountType << endl;
        cout << endl;
    }

    string Account;
    string AccountType;
};

void displayTrades(vector<TradeRecord>& trades) {

    for (auto trade : trades) {
        trade.display();
    }
}


int main() {

    ifstream inputFile;
    inputFile.open("testfilewithtrades.csv");
    string line = "";

    vector<TradeRecord> trades;
    //std::vector<string> data;

    while (getline(inputFile, line)) {

        stringstream inputString(line);

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
        string tempString;

        getline(inputString, account, ',');
        getline(inputString, accountType , ',');

        //cout << line << endl;

        //cout << accountType << endl;

        TradeRecord trade(account, accountType);
        trades.push_back(trade);
    
        line = "";

        
    }

//cout << line << endl;
//cout << "test" << endl;
displayTrades(trades);
return 0;
}

//need to remove header still