
/*
 * DomainNameServer.h
 *
 * A single registered nameserver entry with glue IPs.
 */

#ifndef TINY_CPP_CLIENT_DomainNameServer_H_
#define TINY_CPP_CLIENT_DomainNameServer_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A single registered nameserver entry with glue IPs.
 *
 *  \ingroup Models
 *
 */

class DomainNameServer{
public:

    /*! \brief Constructor.
	 */
    DomainNameServer();
    DomainNameServer(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainNameServer();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getSortorder();

	/*! \brief Set 
	 */
	void setSortorder(std::string sortorder);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string name);
	/*! \brief Get 
	 */
	std::string getIpaddress();

	/*! \brief Set 
	 */
	void setIpaddress(std::string ipaddress);


    private:
    std::string sortorder{};
    std::string name{};
    std::string ipaddress{};
};
}

#endif /* TINY_CPP_CLIENT_DomainNameServer_H_ */
