//#include<iostream>
//#include<string>
//using namespace std;
//class Package         //defining package clas
//{
//private:                 //defining private attributes of class 
//	string name_sender;
//	string address_sender;
//	string city_sender;
//	string state_sender;
//	int ZIP_sender;
//	string name_receiver;
//	string address_receiver;
//	string city_receiver;
//	string state_receiver;
//	int ZIP_receiver;
//	int weight;
//	int cost_per_ounce;
//public:                        //defining public attributes of class 
//	Package(string ns,string as,string cs,string ss,int zips,string nr,string ar, string cr, string sr,int zipr,int w,int cost)
//	{
//		name_sender = ns;
//		address_sender = as;
//		city_sender = cs;
//		state_sender = ss;
//		ZIP_sender = zips;
//		name_receiver = nr;
//		address_receiver = ar;
//		city_receiver = cr;
//		state_receiver= sr;
//		ZIP_sender = zipr;
//		if (w >= 0)
//			weight = w;
//		if (cost >= 0)
//			cost_per_ounce = cost;
//	}
//	double calculateCost()                  //getters 
//	{
//		return weight * cost_per_ounce;
//	}
//	string getname_sender()
//	{
//		return name_sender;
//	}
//	string getaddress_sender()
//	{
//		return address_sender;
//	}
//	string getcity_sender()
//	{
//		return city_sender;
//	}
//	string getstate_sender()
//	{
//		return state_sender;
//	}
//	int getZIP_sender()
//	{
//		return ZIP_sender;
//	}
//	string getname_receiver()
//	{
//		return name_receiver;
//	}
//	string getaddress_receiver()
//	{
//		return address_receiver;
//	}
//	string getcity_receiver()
//	{
//		return city_receiver;
//	}
//	string getstate_receiver()
//	{
//		return state_receiver;
//	}
//	int getZIP_receiver()
//	{
//		return ZIP_receiver;
//	}
//	int getweight()
//	{
//		return weight;
//	}
//	int getcost_per_ounce()
//	{
//		return cost_per_ounce;
//	}
//};
//class TwoDayPackage :public Package        //defining TwoDayPackage class
//{
//private:                  //declaring private attributes 
//	int fee;
//public:                     //defining public attributes 
//	TwoDayPackage(int f, string ns, string as, string cs, string ss, int zips, string nr, string ar, string cr, string sr, int zipr, int w, int cost): Package(ns,as, cs,ss,zips,nr,ar,cr,sr, zipr, w,cost)
//	{
//		fee = f;
//	}
//	double calculateCost()
//	{
//		double temp;
//		temp=Package::calculateCost();
//		return temp + fee;
//	}
//
//};
//class OvernightPackage: public Package   //defining OvernightPackage class 
//{
//private:                          //declaring private attributes
//	int additional_fee;
//public:                     //defining public attributes
//	OvernightPackage(int add_fee, string ns, string as, string cs, string ss, int zips, string nr, string ar, string cr, string sr, int zipr, int w, int cost) : Package(ns, as, cs, ss, zips, nr, ar, cr, sr, zipr, w, cost)
//	{
//		additional_fee=add_fee;
//	}
//	double calculateCost()
//	{
//		int temp;
//		temp=Package::calculateCost();
//		return temp + additional_fee;
//	}
//};
//int main()
//{
//	Package package1("Marwa", "Islamabad campus", "Multan", "Pakistan", 38000, "Marwa", "Cfd campus", "Faisalabad", "Pakistan", 38000, 50, 1200);         //initializing attributes of package1 
//	cout << "Package 1 :" << endl << endl;         //printing details of sender of package 1
//	cout << "Sender:" << endl;
//	cout << package1.getname_sender() << endl;
//	cout << package1.getaddress_sender() << endl;
//	cout << package1.getcity_sender() << endl;
//	cout << package1.getZIP_sender() << endl;
//	cout << "\n\n";
//	cout << "Recipient :" << endl << endl;      //printing details of recipient of package 1 
//	cout << package1.getname_sender() << endl;
//	cout << package1.getaddress_sender() << endl;
//	cout << package1.getcity_sender() << endl;
//	cout << package1.getZIP_sender() << endl;
//	cout << "\n";
//
//	cout << "Cost :" << package1.calculateCost();           //printing cost of package 
//	
//	cout << endl << endl;
//
//	TwoDayPackage package2(200, "Marwa", "Islamabad campus", "Multan", "Pakistan", 38000, "Marwa", "Cfd campus", "Faisalabad", "Pakistan", 38000, 50, 1200);     //Initializing package 2 
//	cout << "Package 2 :" << endl << endl;
//	cout << "Sender:" << endl;                //printing details of sender of package 2 
//	cout<< package2.getname_sender() << endl; 
//	cout << package2.getaddress_sender() << endl;
//	cout << package2.getcity_sender() << endl;
//	cout << package2.getZIP_sender() << endl << endl;
//	cout << "Recipient :" << endl << endl;           //printing details of recipient of package 2 
//	cout << package2.getname_sender() << endl;
//	cout << package2.getaddress_sender() << endl;
//	cout << package2.getcity_sender() << endl;
//	cout << package2.getZIP_sender() << endl;
//	cout << "\n\n";
//	cout << "Cost :" << package2.calculateCost();        //printing cost of package 2 
//
//	cout << endl << endl; 
//
//	OvernightPackage package3(500, "Ali", "Islamabad campus", "Islamabad", "Pakistan", 38000, "Marwa", "Cfd campus", "Faisalabad", "Pakistan", 38000, 20, 1500);  //initializing package 3
//	cout << "Package 3 :" << endl << endl; 
//	cout << "Sender:" << endl;                        //printing details of sender of package 3 
//	cout << package2.getname_sender() << endl;
//	cout << package2.getaddress_sender() << endl;
//	cout << package2.getcity_sender() << endl;
//	cout << package2.getZIP_sender() << endl << endl;
//	cout << "Recipient :" << endl << endl;          //printing details of recipient of package 3  
//	cout << package3.getname_sender() << endl;
//	cout << package3.getaddress_sender() << endl;
//	cout << package3.getcity_sender() << endl;
//	cout << package3.getZIP_sender() << endl;
//	cout << "\n";
//	cout << "Cost : " << package2.calculateCost() << endl;    //printing cost of package 3 
//
//	
//	system("pause");
//	return 0;
//}