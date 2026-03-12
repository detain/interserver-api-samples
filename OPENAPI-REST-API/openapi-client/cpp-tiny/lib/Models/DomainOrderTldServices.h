
/*
 * DomainOrderTldServices.h
 *
 * Example map of TLDs to service IDs for domain ordering.
 */

#ifndef TINY_CPP_CLIENT_DomainOrderTldServices_H_
#define TINY_CPP_CLIENT_DomainOrderTldServices_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Example map of TLDs to service IDs for domain ordering.
 *
 *  \ingroup Models
 *
 */

class DomainOrderTldServices{
public:

    /*! \brief Constructor.
	 */
    DomainOrderTldServices();
    DomainOrderTldServices(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainOrderTldServices();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Service ID for .asia TLD
	 */
	int getAsia();

	/*! \brief Set Service ID for .asia TLD
	 */
	void setAsia(int asia);
	/*! \brief Get Service ID for .be TLD
	 */
	int getBe();

	/*! \brief Set Service ID for .be TLD
	 */
	void setBe(int be);
	/*! \brief Get Service ID for .biz TLD
	 */
	int getBiz();

	/*! \brief Set Service ID for .biz TLD
	 */
	void setBiz(int biz);
	/*! \brief Get Service ID for .ca TLD
	 */
	int getCa();

	/*! \brief Set Service ID for .ca TLD
	 */
	void setCa(int ca);


    private:
    int asia{};
    int be{};
    int biz{};
    int ca{};
};
}

#endif /* TINY_CPP_CLIENT_DomainOrderTldServices_H_ */
