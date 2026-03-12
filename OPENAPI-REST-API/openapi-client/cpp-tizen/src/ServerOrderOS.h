/*
 * ServerOrderOS.h
 *
 * An operating system option available when ordering a dedicated server.
 */

#ifndef _ServerOrderOS_H_
#define _ServerOrderOS_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief An operating system option available when ordering a dedicated server.
 *
 *  \ingroup Models
 *
 */

class ServerOrderOS : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerOrderOS();
	ServerOrderOS(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerOrderOS();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Operating System ID.
	 */
	std::string getId();

	/*! \brief Set Operating System ID.
	 */
	void setId(std::string  id);
	/*! \brief Get Operating System price.
	 */
	int getPrice();

	/*! \brief Set Operating System price.
	 */
	void setPrice(int  price);
	/*! \brief Get Operating System image.
	 */
	std::string getImg();

	/*! \brief Set Operating System image.
	 */
	void setImg(std::string  img);
	/*! \brief Get Short description of the OS.
	 */
	std::string getShortDesc();

	/*! \brief Set Short description of the OS.
	 */
	void setShortDesc(std::string  short_desc);
	/*! \brief Get Long description of the OS.
	 */
	std::string getLongDesc();

	/*! \brief Set Long description of the OS.
	 */
	void setLongDesc(std::string  long_desc);
	/*! \brief Get Monthly price.
	 */
	int getMonthlyPrice();

	/*! \brief Set Monthly price.
	 */
	void setMonthlyPrice(int  monthly_price);
	/*! \brief Get Active status.
	 */
	std::string getActive();

	/*! \brief Set Active status.
	 */
	void setActive(std::string  active);
	/*! \brief Get Display of OS price.
	 */
	std::string getPriceDisplay();

	/*! \brief Set Display of OS price.
	 */
	void setPriceDisplay(std::string  price_display);
	/*! \brief Get Display of monthly OS price.
	 */
	std::string getMonthlyPriceDisplay();

	/*! \brief Set Display of monthly OS price.
	 */
	void setMonthlyPriceDisplay(std::string  monthly_price_display);

private:
	std::string id;
	int price;
	std::string img;
	std::string short_desc;
	std::string long_desc;
	int monthly_price;
	std::string active;
	std::string price_display;
	std::string monthly_price_display;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerOrderOS_H_ */
