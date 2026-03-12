
/*
 * FormValues.h
 *
 * Currently selected configuration option IDs for a server order form.
 */

#ifndef TINY_CPP_CLIENT_FormValues_H_
#define TINY_CPP_CLIENT_FormValues_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Currently selected configuration option IDs for a server order form.
 *
 *  \ingroup Models
 *
 */

class FormValues{
public:

    /*! \brief Constructor.
	 */
    FormValues();
    FormValues(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~FormValues();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Selected memory option ID.
	 */
	int getMemory();

	/*! \brief Set Selected memory option ID.
	 */
	void setMemory(int memory);
	/*! \brief Get Selected bandwidth option ID.
	 */
	int getBandwidth();

	/*! \brief Set Selected bandwidth option ID.
	 */
	void setBandwidth(int bandwidth);
	/*! \brief Get Selected IP block option ID.
	 */
	int getIps();

	/*! \brief Set Selected IP block option ID.
	 */
	void setIps(int ips);
	/*! \brief Get Selected operating system option ID.
	 */
	int getOs();

	/*! \brief Set Selected operating system option ID.
	 */
	void setOs(int os);
	/*! \brief Get Selected control panel option ID.
	 */
	int getCp();

	/*! \brief Set Selected control panel option ID.
	 */
	void setCp(int cp);
	/*! \brief Get Selected RAID option ID.
	 */
	int getRaid();

	/*! \brief Set Selected RAID option ID.
	 */
	void setRaid(int raid);
	/*! \brief Get Selected hard drive option ID.
	 */
	int getHd();

	/*! \brief Set Selected hard drive option ID.
	 */
	void setHd(int hd);
	/*! \brief Get Selected datacenter region ID.
	 */
	int getRegion();

	/*! \brief Set Selected datacenter region ID.
	 */
	void setRegion(int region);


    private:
    int memory{};
    int bandwidth{};
    int ips{};
    int os{};
    int cp{};
    int raid{};
    int hd{};
    int region{};
};
}

#endif /* TINY_CPP_CLIENT_FormValues_H_ */
