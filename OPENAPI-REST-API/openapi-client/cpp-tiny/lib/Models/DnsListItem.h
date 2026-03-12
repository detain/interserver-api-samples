
/*
 * DnsListItem.h
 *
 * A DNS zone entry with its ID, domain name, and record content.
 */

#ifndef TINY_CPP_CLIENT_DnsListItem_H_
#define TINY_CPP_CLIENT_DnsListItem_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A DNS zone entry with its ID, domain name, and record content.
 *
 *  \ingroup Models
 *
 */

class DnsListItem{
public:

    /*! \brief Constructor.
	 */
    DnsListItem();
    DnsListItem(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DnsListItem();


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
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string name);
	/*! \brief Get 
	 */
	std::string getContent();

	/*! \brief Set 
	 */
	void setContent(std::string content);


    private:
    int id{};
    std::string name{};
    std::string content{};
};
}

#endif /* TINY_CPP_CLIENT_DnsListItem_H_ */
