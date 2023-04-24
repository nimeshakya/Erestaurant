#pragma once
#include "Customer.h"
#include "MenuItem.h"

#include <vector>

const std::string ORDERS_FILE{ "RestaurantData/Orders.txt" };

class Order
{
	std::string ordererName;
	std::string ordererPhone;
	std::string itemName;
	float itemPrice;
	float quantity;

	std::string orders;
public:
	Order();
	bool idDoneOrdering();
	bool placeOrder(Customer customer);
	void createOrderFile(Order currOrderItem, std::string path);
	void updateOrderFile(Order orderItem);
	void updateOrders(std::string currOrderItem);
	void displayCustomerOrder(Customer customer);
};