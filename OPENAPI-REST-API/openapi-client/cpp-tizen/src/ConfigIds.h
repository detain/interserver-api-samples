/*
 * ConfigIds.h
 *
 * Internal configuration IDs mapped from the selected form values for a server order.
 */

#ifndef _ConfigIds_H_
#define _ConfigIds_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Internal configuration IDs mapped from the selected form values for a server order.
 *
 *  \ingroup Models
 *
 */

class ConfigIds : public Object {
public:
	/*! \brief Constructor.
	 */
	ConfigIds();
	ConfigIds(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ConfigIds();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Configuration ID for the selected memory option.
	 */
	int getMemory();

	/*! \brief Set Configuration ID for the selected memory option.
	 */
	void setMemory(int  memory);
	/*! \brief Get Configuration ID for the selected hard drive option.
	 */
	int getHd();

	/*! \brief Set Configuration ID for the selected hard drive option.
	 */
	void setHd(int  hd);
	/*! \brief Get Configuration ID for the selected bandwidth option.
	 */
	int getBandwidth();

	/*! \brief Set Configuration ID for the selected bandwidth option.
	 */
	void setBandwidth(int  bandwidth);
	/*! \brief Get Configuration ID for the selected IP block option.
	 */
	int getIps();

	/*! \brief Set Configuration ID for the selected IP block option.
	 */
	void setIps(int  ips);
	/*! \brief Get Configuration ID for the selected operating system.
	 */
	int getOs();

	/*! \brief Set Configuration ID for the selected operating system.
	 */
	void setOs(int  os);
	/*! \brief Get Configuration ID for the selected control panel.
	 */
	int getCp();

	/*! \brief Set Configuration ID for the selected control panel.
	 */
	void setCp(int  cp);
	/*! \brief Get Configuration ID for the selected RAID option.
	 */
	int getRaid();

	/*! \brief Set Configuration ID for the selected RAID option.
	 */
	void setRaid(int  raid);

private:
	int memory;
	int hd;
	int bandwidth;
	int ips;
	int os;
	int cp;
	int raid;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ConfigIds_H_ */
