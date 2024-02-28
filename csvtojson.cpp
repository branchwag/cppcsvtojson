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
        string accountType,
        string orderID,
        string executionID,
        string bS, 
        string symbol,
        int orderQuantity,
        int executionQuantity,
        double price,
        string marketCode,
        string capacityCode,
        string exchange,
        string orderStatus, 
        string executionTime,
        string tradeDate,
        string settleDate,
        string frontExec,
        string backExec, 
        string bRK01, 
        string destinationCode,
        string clearingFacilitationAccount,
        string blueID,
        string positionEffect,
        string callPut,
        double strikePrice,
        string expDate,
        string legend,
        string fCOM, 
        string commissionType,
        string cCOM,
        string fee1,
        string fee2,
        string fee3,
        string fee4,
        string fee5,
        string trailer,
        string rRGross,
        string interest,
        string interestRateType,
        string principal,
        string currency,
        string filler1,
        string specialCode,
        string filler3,
        string filler4,
        string filler5
    ) {
        Account = account;
        AccountType = accountType;
        OrderID = orderID;
        ExecutionID = executionID;
        BS = bS;
        Symbol = symbol;
        OrderQuantity = orderQuantity;
        ExecutionQuantity = executionQuantity;
        Price = price;
        MarketCode = marketCode;
        CapacityCode = capacityCode;
        Exchange = exchange;
        OrderStatus = orderStatus;
        ExecutionTime = executionTime;
        TradeDate = tradeDate;
        SettleDate = settleDate;
        FrontExec = frontExec;
        BackExec = backExec;
        BRK01 = bRK01;
        DestinationCode = destinationCode;
        ClearingFacilitationAccount = clearingFacilitationAccount;
        BlueID = blueID;
        PositionEffect = positionEffect;
        CallPut = callPut;
        StrikePrice = strikePrice;
        ExpDate = expDate;
        Legend = legend;
        FCOM = fCOM;
        CommissionType = commissionType;
        CCOM = cCOM;
        Fee1 = fee1;
        Fee2 = fee2;
        Fee3 = fee3;
        Fee4 = fee4;
        Fee5 = fee5;
        Trailer = trailer;
        RRGross = rRGross;
        Interest = interest;
        InterestRateType = interestRateType;
        Principal = principal;
        Currency = currency;
        Filler1 = filler1;
        SpecialCode = specialCode;
        Filler3 = filler3;
        Filler4 = filler4;
        Filler5 = filler5;

    }

    void display() {
        cout << "   Account: " << Account << endl;
        cout << "   AccountType: " << AccountType << endl;
        cout << "   OrderID: " << OrderID << endl;
        cout << "   ExecutionID: " << ExecutionID << endl;
        cout << "   BS: " << BS << endl;
        cout << "   Symbol: " << Symbol << endl;
        cout << "   OrderQuantity: " << OrderQuantity << endl;
        cout << "   ExecutionQuantity: " << ExecutionQuantity << endl;
        cout << "   Price: " << Price << endl;
        cout << "   MarketCode: " << MarketCode << endl;
        cout << "   CapacityCode: " << CapacityCode << endl;
        cout << "   Exchange: " << Exchange << endl;
        cout << "   OrderStatus: " << OrderStatus << endl;
        cout << "   ExecutionTime: " << ExecutionTime << endl;
        cout << "   TradeDate: " << TradeDate << endl;
        cout << "   SettleDate: " << SettleDate << endl;
        cout << "   FrontExec: " << FrontExec << endl;
        cout << "   BackExec: " << BackExec << endl;
        cout << "   BRK01: " << BRK01 << endl;
        cout << "   DestinationCode: " << DestinationCode << endl;
        cout << "   ClearingFacilitationAccount: " << ClearingFacilitationAccount << endl;
        cout << "   BlueID: " << BlueID << endl;
        cout << "   PositionEffect: " << PositionEffect << endl;
        cout << "   CallPut: " << CallPut << endl;
        cout << "   StrikePrice: " << StrikePrice << endl;
        cout << "   ExpDate: " << ExpDate << endl;
        cout << "   Legend: " << Legend << endl;
        cout << "   FCOM: " << FCOM << endl;
        cout << "   CommissionType: " << CommissionType << endl;
        cout << "   CCOM: " << CCOM << endl;
        cout << "   Fee1: " << Fee1 << endl;
        cout << "   Fee2: " << Fee2 << endl;
        cout << "   Fee3: " << Fee3 << endl;
        cout << "   Fee4: " << Fee4 << endl;
        cout << "   Fee5: " << Fee5 << endl;
        cout << "   Trailer: " << Trailer << endl;
        cout << "   RRGross: " << RRGross << endl;
        cout << "   Interest: " << Interest << endl;
        cout << "   InterestRateType: " << InterestRateType << endl;
        cout << "   Principal: " << Principal << endl;
        cout << "   Currency: " << Currency << endl;
        cout << "   Filler1: " << Filler1 << endl;
        cout << "   SpecialCode: " << SpecialCode << endl;
        cout << "   Filler3: " << Filler3 << endl;
        cout << "   Filler4: " << Filler4 << endl;
        cout << "   Filler5: " << Filler5 << endl;

        cout << endl;
    }

    string Account;
    string AccountType;
    string OrderID;
    string ExecutionID;
    string BS;
    string Symbol;
    string OrderQuantity;
    string ExecutionQuantity;
    int Price;
    string MarketCode;
    string CapacityCode;
    string Exchange;
    string OrderStatus;
    string ExecutionTime;
    string TradeDate;
    string SettleDate;
    string FrontExec;
    string BackExec;
    string BRK01;
    string DestinationCode;
    string ClearingFacilitationAccount;
    string BlueID;
    string PositionEffect;
    string CallPut;
    string StrikePrice;
    string ExpDate;
    string Legend;
    string FCOM;
    string CommissionType;
    string CCOM;
    string Fee1;
    string Fee2;
    string Fee3;
    string Fee4;
    string Fee5;
    string Trailer;
    string RRGross;
    string Interest;
    string InterestRateType;
    string Principal;
    string Currency;
    string Filler1;
    string SpecialCode;
    string Filler3;
    string Filler4;
    string Filler5;

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
    getline(inputFile, line);
    line = "";

    vector<TradeRecord> trades;
    //std::vector<string> data;

    while (getline(inputFile, line)) {

        stringstream inputString(line);

        string account;
        string accountType;
        string orderID;
        string executionID;
        string bS; 
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
        string bRK01; 
        string destinationCode;
        string clearingFacilitationAccount;
        string blueID;
        string positionEffect;
        string callPut;
        double strikePrice;
        string expDate;
        string legend;
        string fCOM; 
        string commissionType;
        string cCOM;
        string fee1;
        string fee2;
        string fee3;
        string fee4;
        string fee5;
        string trailer;
        string rRGross;
        string interest;
        string interestRateType;
        string principal;
        string currency;
        string filler1;
        string specialCode;
        string filler3;
        string filler4;
        string filler5;
        string tempString;

        getline(inputString, account, ',');
        getline(inputString, accountType , ',');
        getline(inputString, orderID, ',');
        getline(inputString, executionID, ',');
        getline(inputString, bS, ',');
        getline(inputString, symbol, ',');

        //getting the order quantity which is an int
        tempString = "";
        getline(inputString, tempString);
        orderQuantity = atoi(tempString.c_str());

        // int executionQuantity;
        tempString = "";
        getline(inputString, tempString);
        executionQuantity = atoi(tempString.c_str());

        // double price; - need to use atof for this one since it is a double
        tempString = "";
        getline(inputString, tempString);
        price = atof(tempString.c_str());

        // string marketCode;
        getline(inputString, marketCode, ',');
        // string capacityCode;
        getline(inputString, capacityCode, ',');
        // string exchange;
        getline(inputString, exchange, ',');
        // string orderStatus; 
        getline(inputString, orderStatus, ',');
        // string executionTime;
        getline(inputString, executionTime, ',');
        // string tradeDate;
        getline(inputString, tradeDate, ',');
        // string settleDate;
        getline(inputString, settleDate, ',');
        // string frontExec;
        getline(inputString, frontExec, ',');
        // string backExec; 
        getline(inputString, backExec, ',');
        // string bRK01;
        getline(inputString, bRK01, ','); 
        // string destinationCode;
        getline(inputString, destinationCode, ',');
        // string clearingFacilitationAccount;
        getline(inputString, clearingFacilitationAccount, ',');
        // string blueID;
        getline(inputString, blueID, ',');
        // string positionEffect;
        getline(inputString, positionEffect, ',');
        // string callPut;
        getline(inputString, callPut, ',');

        // double strikePrice;
        tempString = "";
        getline(inputString, tempString);
        strikePrice = atof(tempString.c_str());

        // string expDate;
        getline(inputString, expDate, ',');
        // string legend;
        getline(inputString, legend, ',');
        // string fCOM;
        getline(inputString, fCOM, ','); 
        // string commissionType;
        getline(inputString, commissionType, ',');
        // string cCOM;
        getline(inputString, cCOM, ',');
        // string fee1;
        getline(inputString, fee1, ',');
        // string fee2;
        getline(inputString, fee2, ',');
        // string fee3;
        getline(inputString, fee3, ',');
        // string fee4;
        getline(inputString, fee4, ',');
        // string fee5;
        getline(inputString, fee5, ',');
        // string trailer;
        getline(inputString, trailer, ',');
        // string rRGross;
        getline(inputString, rRGross, ',');
        // string interest;
        getline(inputString, interest, ',');
        // string interestRateType;
        getline(inputString, interestRateType, ',');
        // string principal;
        getline(inputString, principal, ',');
        // string currency;
        getline(inputString, currency, ',');
        // string filler1;
        getline(inputString, filler1, ',');
        // string specialCode;
        getline(inputString, specialCode, ',');
        // string filler3;
        getline(inputString, filler3, ',');
        // string filler4;
        getline(inputString, filler4, ',');
        // string filler5;
        getline(inputString, filler5, ',');

        //cout << line << endl;

        //cout << accountType << endl;

        TradeRecord trade(account, accountType, orderID, executionID, bS, symbol, orderQuantity, executionQuantity, price, marketCode, capacityCode, exchange, orderStatus, executionTime, tradeDate, settleDate, frontExec, backExec, bRK01, destinationCode, clearingFacilitationAccount, blueID, positionEffect, callPut, strikePrice, expDate, legend, fCOM, commissionType, cCOM, fee1, fee2, fee3, fee4, fee5, trailer, rRGross, interest, interestRateType, principal, currency, filler1, specialCode, filler3, filler4, filler5);
        trades.push_back(trade);
    
        line = "";

        
    }

//cout << line << endl;
//cout << "test" << endl;
displayTrades(trades);
return 0;
}