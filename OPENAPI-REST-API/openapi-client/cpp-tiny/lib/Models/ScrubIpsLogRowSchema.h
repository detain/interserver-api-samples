
/*
 * ScrubIpsLogRowSchema.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_ScrubIpsLogRowSchema_H_
#define TINY_CPP_CLIENT_ScrubIpsLogRowSchema_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ScrubIpsLogRowSchema{
public:

    /*! \brief Constructor.
	 */
    ScrubIpsLogRowSchema();
    ScrubIpsLogRowSchema(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ScrubIpsLogRowSchema();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getDate();

	/*! \brief Set 
	 */
	void setDate(std::string date);
	/*! \brief Get 
	 */
	std::string getFilter();

	/*! \brief Set 
	 */
	void setFilter(std::string filter);
	/*! \brief Get 
	 */
	std::string getBlockedIp();

	/*! \brief Set 
	 */
	void setBlockedIp(std::string blocked_ip);
	/*! \brief Get 
	 */
	std::string getTargetIp();

	/*! \brief Set 
	 */
	void setTargetIp(std::string target_ip);
	/*! \brief Get 
	 */
	long getTargetPort();

	/*! \brief Set 
	 */
	void setTargetPort(long target_port);
	/*! \brief Get 
	 */
	std::string getProtocol();

	/*! \brief Set 
	 */
	void setProtocol(std::string protocol);
	/*! \brief Get 
	 */
	long getByteCount();

	/*! \brief Set 
	 */
	void setByteCount(long byte_count);
	/*! \brief Get 
	 */
	std::string getXdpAction();

	/*! \brief Set 
	 */
	void setXdpAction(std::string xdp_action);


    private:
    std::string date{};
    std::string filter{};
    std::string blocked_ip{};
    std::string target_ip{};
    long target_port{};
    std::string protocol{};
    long byte_count{};
    std::string xdp_action{};
};
}

#endif /* TINY_CPP_CLIENT_ScrubIpsLogRowSchema_H_ */
