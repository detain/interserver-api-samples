
/*
 * AffiliateBannerRow.h
 *
 * An affiliate banner image details.
 */

#ifndef TINY_CPP_CLIENT_AffiliateBannerRow_H_
#define TINY_CPP_CLIENT_AffiliateBannerRow_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief An affiliate banner image details.
 *
 *  \ingroup Models
 *
 */

class AffiliateBannerRow{
public:

    /*! \brief Constructor.
	 */
    AffiliateBannerRow();
    AffiliateBannerRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AffiliateBannerRow();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getImage();

	/*! \brief Set 
	 */
	void setImage(std::string image);
	/*! \brief Get 
	 */
	std::string getWidth();

	/*! \brief Set 
	 */
	void setWidth(std::string width);
	/*! \brief Get 
	 */
	std::string getHeight();

	/*! \brief Set 
	 */
	void setHeight(std::string height);


    private:
    std::string image{};
    std::string width{};
    std::string height{};
};
}

#endif /* TINY_CPP_CLIENT_AffiliateBannerRow_H_ */
