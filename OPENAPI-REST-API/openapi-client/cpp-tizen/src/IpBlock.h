/*
 * IpBlock.h
 *
 * An IP address block option available for a dedicated server configuration.
 */

#ifndef _IpBlock_H_
#define _IpBlock_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief An IP address block option available for a dedicated server configuration.
 *
 *  \ingroup Models
 *
 */

class IpBlock : public Object {
public:
	/*! \brief Constructor.
	 */
	IpBlock();
	IpBlock(char* str);

	/*! \brief Destructor.
	 */
	virtual ~IpBlock();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getId();

	/*! \brief Set 
	 */
	void setId(int  id);
	/*! \brief Get 
	 */
	std::string getShortDesc();

	/*! \brief Set 
	 */
	void setShortDesc(std::string  short_desc);
	/*! \brief Get 
	 */
	std::string getQty();

	/*! \brief Set 
	 */
	void setQty(std::string  qty);
	/*! \brief Get 
	 */
	long long getMonthlyPrice();

	/*! \brief Set 
	 */
	void setMonthlyPrice(long long  monthly_price);

private:
	int id;
	std::string short_desc;
	std::string qty;
	long long monthly_price;
	void __init();
	void __cleanup();

};
}
}

#endif /* _IpBlock_H_ */
