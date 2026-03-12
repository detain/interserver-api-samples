
/*
 * ConfigIds.h
 *
 * Internal configuration IDs mapped from the selected form values for a server order.
 */

#ifndef TINY_CPP_CLIENT_ConfigIds_H_
#define TINY_CPP_CLIENT_ConfigIds_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Internal configuration IDs mapped from the selected form values for a server order.
 *
 *  \ingroup Models
 *
 */

class ConfigIds{
public:

    /*! \brief Constructor.
	 */
    ConfigIds();
    ConfigIds(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ConfigIds();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Configuration ID for the selected memory option.
	 */
	int getMemory();

	/*! \brief Set Configuration ID for the selected memory option.
	 */
	void setMemory(int memory);
	/*! \brief Get Configuration ID for the selected hard drive option.
	 */
	int getHd();

	/*! \brief Set Configuration ID for the selected hard drive option.
	 */
	void setHd(int hd);
	/*! \brief Get Configuration ID for the selected bandwidth option.
	 */
	int getBandwidth();

	/*! \brief Set Configuration ID for the selected bandwidth option.
	 */
	void setBandwidth(int bandwidth);
	/*! \brief Get Configuration ID for the selected IP block option.
	 */
	int getIps();

	/*! \brief Set Configuration ID for the selected IP block option.
	 */
	void setIps(int ips);
	/*! \brief Get Configuration ID for the selected operating system.
	 */
	int getOs();

	/*! \brief Set Configuration ID for the selected operating system.
	 */
	void setOs(int os);
	/*! \brief Get Configuration ID for the selected control panel.
	 */
	int getCp();

	/*! \brief Set Configuration ID for the selected control panel.
	 */
	void setCp(int cp);
	/*! \brief Get Configuration ID for the selected RAID option.
	 */
	int getRaid();

	/*! \brief Set Configuration ID for the selected RAID option.
	 */
	void setRaid(int raid);


    private:
    int memory{};
    int hd{};
    int bandwidth{};
    int ips{};
    int os{};
    int cp{};
    int raid{};
};
}

#endif /* TINY_CPP_CLIENT_ConfigIds_H_ */
