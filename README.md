# cppcsvtojson

This is a program for parsing a csv file into json via the terminal. many thanks to the following two tutorials:

Code Morsels How to Parse a CSV file:
https://www.youtube.com/watch?v=NFvxA-57LLA

Tommy Ngo's CSV to JSON
https://www.youtube.com/watch?v=on74MKlxnts

Example usage and output:

```
C:\Users\branc\projects\csvtojson>a.exe testfilewithtrades.csv
[
{
"Account": "91TESTACCT",
"AccountType": "0",
"BRK01": "8888",
"BS": "B",
"BackExec": "WXYZ",
"BlueID": "",
"CCOM": "",
"CallPut": "",
"CapacityCode": "2",
"ClearingFacilitationAccount": "",
"CommissionType": "3",
"Currency": "USD",
"DestinationCode": "",
"Exchange": "S",
"ExecutionID": "2345678",
"ExecutionQuantity": "1",
"ExecutionTime": "13:22:28:000",
"ExpDate": "",
"FCOM": "0",
"Fee1": "",
"Fee2": "",
"Fee3": "",
"Fee4": "",
"Fee5": "",
"Filler1": "",
"Filler3": "",
"Filler4": "",
"Filler5": "",
"FrontExec": "ABCD",
"Interest": "",
"InterestRateType": "",
"Legend": "",
"MarketCode": "N",
"OrderID": "12345678-9-10",
"OrderQuantity": "1",
"OrderStatus": "2",
"PositionEffect": "",
"Price": "181.6",
"Principal": "",
"RRGross": "",
"SettleDate": "",
"SpecialCode": "",
"StrikePrice": "",
"Symbol": "AAPL",
"TradeDate": "2/26/2024",
"Trailer": ""
},
{
"Account": "91TESTACCT",
"AccountType": "0",
"BRK01": "8888",
"BS": "S",
"BackExec": "WXYZ",
"BlueID": "",
"CCOM": "",
"CallPut": "",
"CapacityCode": "2",
"ClearingFacilitationAccount": "",
"CommissionType": "3",
"Currency": "USD",
"DestinationCode": "",
"Exchange": "S",
"ExecutionID": "2345679",
"ExecutionQuantity": "1",
"ExecutionTime": "13:22:50:818",
"ExpDate": "",
"FCOM": "0",
"Fee1": "",
"Fee2": "",
"Fee3": "",
"Fee4": "",
"Fee5": "",
"Filler1": "",
"Filler3": "",
"Filler4": "",
"Filler5": "",
"FrontExec": "ABCD",
"Interest": "",
"InterestRateType": "",
"Legend": "",
"MarketCode": "N",
"OrderID": "12345678-9-11",
"OrderQuantity": "1",
"OrderStatus": "2",
"PositionEffect": "",
"Price": "175.03",
"Principal": "",
"RRGross": "",
"SettleDate": "",
"SpecialCode": "",
"StrikePrice": "",
"Symbol": "AMZN",
"TradeDate": "2/26/2024",
"Trailer": ""
}
]
```
