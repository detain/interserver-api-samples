/*
 * AffiliateBannerRow.h
 *
 * An affiliate banner image details.
 */

#ifndef _AffiliateBannerRow_H_
#define _AffiliateBannerRow_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief An affiliate banner image details.
 *
 *  \ingroup Models
 *
 */

class AffiliateBannerRow : public Object {
public:
	/*! \brief Constructor.
	 */
	AffiliateBannerRow();
	AffiliateBannerRow(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AffiliateBannerRow();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getImage();

	/*! \brief Set 
	 */
	void setImage(std::string  image);
	/*! \brief Get 
	 */
	std::string getWidth();

	/*! \brief Set 
	 */
	void setWidth(std::string  width);
	/*! \brief Get 
	 */
	std::string getHeight();

	/*! \brief Set 
	 */
	void setHeight(std::string  height);

private:
	std::string image;
	std::string width;
	std::string height;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AffiliateBannerRow_H_ */
