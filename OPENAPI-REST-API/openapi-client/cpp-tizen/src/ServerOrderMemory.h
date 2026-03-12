/*
 * ServerOrderMemory.h
 *
 * A memory (RAM) option available when ordering a dedicated server.
 */

#ifndef _ServerOrderMemory_H_
#define _ServerOrderMemory_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A memory (RAM) option available when ordering a dedicated server.
 *
 *  \ingroup Models
 *
 */

class ServerOrderMemory : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerOrderMemory();
	ServerOrderMemory(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerOrderMemory();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Memory ID.
	 */
	std::string getId();

	/*! \brief Set Memory ID.
	 */
	void setId(std::string  id);
	/*! \brief Get Memory price.
	 */
	std::string getPrice();

	/*! \brief Set Memory price.
	 */
	void setPrice(std::string  price);
	/*! \brief Get Memory image.
	 */
	std::string getImg();

	/*! \brief Set Memory image.
	 */
	void setImg(std::string  img);
	/*! \brief Get Short description of the memory.
	 */
	std::string getShortDesc();

	/*! \brief Set Short description of the memory.
	 */
	void setShortDesc(std::string  short_desc);
	/*! \brief Get Long description of the memory.
	 */
	std::string getLongDesc();

	/*! \brief Set Long description of the memory.
	 */
	void setLongDesc(std::string  long_desc);
	/*! \brief Get Manufacturer information.
	 */
	std::string getManu();

	/*! \brief Set Manufacturer information.
	 */
	void setManu(std::string  manu);
	/*! \brief Get Memory size.
	 */
	std::string getSize();

	/*! \brief Set Memory size.
	 */
	void setSize(std::string  size);
	/*! \brief Get Memory type.
	 */
	std::string getType();

	/*! \brief Set Memory type.
	 */
	void setType(std::string  type);
	/*! \brief Get Hidden status.
	 */
	std::string getHidden();

	/*! \brief Set Hidden status.
	 */
	void setHidden(std::string  hidden);
	/*! \brief Get Monthly price.
	 */
	int getMonthlyPrice();

	/*! \brief Set Monthly price.
	 */
	void setMonthlyPrice(int  monthly_price);
	/*! \brief Get Drive type.
	 */
	std::string getDriveType();

	/*! \brief Set Drive type.
	 */
	void setDriveType(std::string  drive_type);
	/*! \brief Get Display of monthly memory price.
	 */
	std::string getMonthlyPriceDisplay();

	/*! \brief Set Display of monthly memory price.
	 */
	void setMonthlyPriceDisplay(std::string  monthly_price_display);

private:
	std::string id;
	std::string price;
	std::string img;
	std::string short_desc;
	std::string long_desc;
	std::string manu;
	std::string size;
	std::string type;
	std::string hidden;
	int monthly_price;
	std::string drive_type;
	std::string monthly_price_display;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerOrderMemory_H_ */
