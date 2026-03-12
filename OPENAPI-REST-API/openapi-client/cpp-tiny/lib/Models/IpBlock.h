
/*
 * IpBlock.h
 *
 * An IP address block option available for a dedicated server configuration.
 */

#ifndef TINY_CPP_CLIENT_IpBlock_H_
#define TINY_CPP_CLIENT_IpBlock_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief An IP address block option available for a dedicated server configuration.
 *
 *  \ingroup Models
 *
 */

class IpBlock{
public:

    /*! \brief Constructor.
	 */
    IpBlock();
    IpBlock(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~IpBlock();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getId();

	/*! \brief Set 
	 */
	void setId(int id);
	/*! \brief Get 
	 */
	std::string getShortDesc();

	/*! \brief Set 
	 */
	void setShortDesc(std::string short_desc);
	/*! \brief Get 
	 */
	std::string getQty();

	/*! \brief Set 
	 */
	void setQty(std::string qty);
	/*! \brief Get 
	 */
	long getMonthlyPrice();

	/*! \brief Set 
	 */
	void setMonthlyPrice(long monthly_price);


    private:
    int id{};
    std::string short_desc{};
    std::string qty{};
    long monthly_price{};
};
}

#endif /* TINY_CPP_CLIENT_IpBlock_H_ */
