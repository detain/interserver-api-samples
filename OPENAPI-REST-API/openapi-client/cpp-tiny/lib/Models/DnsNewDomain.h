
/*
 * DnsNewDomain.h
 *
 * The request for a new domain to be managed by the dns servers.
 */

#ifndef TINY_CPP_CLIENT_DnsNewDomain_H_
#define TINY_CPP_CLIENT_DnsNewDomain_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief The request for a new domain to be managed by the dns servers.
 *
 *  \ingroup Models
 *
 */

class DnsNewDomain{
public:

    /*! \brief Constructor.
	 */
    DnsNewDomain();
    DnsNewDomain(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DnsNewDomain();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The domain name.
	 */
	std::string getDomain();

	/*! \brief Set The domain name.
	 */
	void setDomain(std::string domain);
	/*! \brief Get IP Address to point the domain to.
	 */
	std::string getIp();

	/*! \brief Set IP Address to point the domain to.
	 */
	void setIp(std::string ip);


    private:
    std::string domain{};
    std::string ip{};
};
}

#endif /* TINY_CPP_CLIENT_DnsNewDomain_H_ */
