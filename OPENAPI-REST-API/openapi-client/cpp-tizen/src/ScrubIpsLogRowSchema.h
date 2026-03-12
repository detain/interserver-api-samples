/*
 * ScrubIpsLogRowSchema.h
 *
 * 
 */

#ifndef _ScrubIpsLogRowSchema_H_
#define _ScrubIpsLogRowSchema_H_


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

class ScrubIpsLogRowSchema : public Object {
public:
	/*! \brief Constructor.
	 */
	ScrubIpsLogRowSchema();
	ScrubIpsLogRowSchema(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ScrubIpsLogRowSchema();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getDate();

	/*! \brief Set 
	 */
	void setDate(std::string  date);
	/*! \brief Get 
	 */
	std::string getFilter();

	/*! \brief Set 
	 */
	void setFilter(std::string  filter);
	/*! \brief Get 
	 */
	std::string getBlockedIp();

	/*! \brief Set 
	 */
	void setBlockedIp(std::string  blocked_ip);
	/*! \brief Get 
	 */
	std::string getTargetIp();

	/*! \brief Set 
	 */
	void setTargetIp(std::string  target_ip);
	/*! \brief Get 
	 */
	long long getTargetPort();

	/*! \brief Set 
	 */
	void setTargetPort(long long  target_port);
	/*! \brief Get 
	 */
	std::string getProtocol();

	/*! \brief Set 
	 */
	void setProtocol(std::string  protocol);
	/*! \brief Get 
	 */
	long long getByteCount();

	/*! \brief Set 
	 */
	void setByteCount(long long  byte_count);
	/*! \brief Get 
	 */
	std::string getXdpAction();

	/*! \brief Set 
	 */
	void setXdpAction(std::string  xdp_action);

private:
	std::string date;
	std::string filter;
	std::string blocked_ip;
	std::string target_ip;
	long long target_port;
	std::string protocol;
	long long byte_count;
	std::string xdp_action;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ScrubIpsLogRowSchema_H_ */
