/*
 * FormValues.h
 *
 * Currently selected configuration option IDs for a server order form.
 */

#ifndef _FormValues_H_
#define _FormValues_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Currently selected configuration option IDs for a server order form.
 *
 *  \ingroup Models
 *
 */

class FormValues : public Object {
public:
	/*! \brief Constructor.
	 */
	FormValues();
	FormValues(char* str);

	/*! \brief Destructor.
	 */
	virtual ~FormValues();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Selected memory option ID.
	 */
	int getMemory();

	/*! \brief Set Selected memory option ID.
	 */
	void setMemory(int  memory);
	/*! \brief Get Selected bandwidth option ID.
	 */
	int getBandwidth();

	/*! \brief Set Selected bandwidth option ID.
	 */
	void setBandwidth(int  bandwidth);
	/*! \brief Get Selected IP block option ID.
	 */
	int getIps();

	/*! \brief Set Selected IP block option ID.
	 */
	void setIps(int  ips);
	/*! \brief Get Selected operating system option ID.
	 */
	int getOs();

	/*! \brief Set Selected operating system option ID.
	 */
	void setOs(int  os);
	/*! \brief Get Selected control panel option ID.
	 */
	int getCp();

	/*! \brief Set Selected control panel option ID.
	 */
	void setCp(int  cp);
	/*! \brief Get Selected RAID option ID.
	 */
	int getRaid();

	/*! \brief Set Selected RAID option ID.
	 */
	void setRaid(int  raid);
	/*! \brief Get Selected hard drive option ID.
	 */
	int getHd();

	/*! \brief Set Selected hard drive option ID.
	 */
	void setHd(int  hd);
	/*! \brief Get Selected datacenter region ID.
	 */
	int getRegion();

	/*! \brief Set Selected datacenter region ID.
	 */
	void setRegion(int  region);

private:
	int memory;
	int bandwidth;
	int ips;
	int os;
	int cp;
	int raid;
	int hd;
	int region;
	void __init();
	void __cleanup();

};
}
}

#endif /* _FormValues_H_ */
