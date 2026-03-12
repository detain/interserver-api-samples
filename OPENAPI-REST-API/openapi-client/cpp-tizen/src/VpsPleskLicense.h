/*
 * VpsPleskLicense.h
 *
 * 
 */

#ifndef _VpsPleskLicense_H_
#define _VpsPleskLicense_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class VpsPleskLicense : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsPleskLicense();
	VpsPleskLicense(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsPleskLicense();

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
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	std::string getSubName();

	/*! \brief Set 
	 */
	void setSubName(std::string  sub_name);
	/*! \brief Get 
	 */
	int getCost();

	/*! \brief Set 
	 */
	void setCost(int  cost);

private:
	int id;
	std::string name;
	std::string sub_name;
	int cost;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsPleskLicense_H_ */
