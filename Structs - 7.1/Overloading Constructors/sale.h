#ifndef SALE_H
#define SALE_H

class Sale{
	private:
		double taxRate;
		double total;
		void calcSale(double cost){
			total = cost + (cost * taxRate);
		}
	public:
		Sale(double rate, double cost){
			taxRate = rate;
			calcSale(cost);
		}
		Sale(double cost){
			taxRate = 0.0;
			total = cost;
		}
		Sale(){
			taxRate = 0.0;
			total = 0.0;
		}
	
		double getTotal(){
			return total;
		}
};
#endif