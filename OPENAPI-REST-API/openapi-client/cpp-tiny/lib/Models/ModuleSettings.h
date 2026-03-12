
/*
 * ModuleSettings.h
 *
 * The settings for a module.
 */

#ifndef TINY_CPP_CLIENT_ModuleSettings_H_
#define TINY_CPP_CLIENT_ModuleSettings_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief The settings for a module.
 *
 *  \ingroup Models
 *
 */

class ModuleSettings{
public:

    /*! \brief Constructor.
	 */
    ModuleSettings();
    ModuleSettings(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ModuleSettings();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getSERVICEIDOFFSET();

	/*! \brief Set 
	 */
	void setSERVICEIDOFFSET(int sERVICE_ID_OFFSET);
	/*! \brief Get 
	 */
	bool isUSEREPEATINVOICE();

	/*! \brief Set 
	 */
	void setUSEREPEATINVOICE(bool uSE_REPEAT_INVOICE);
	/*! \brief Get 
	 */
	bool isUSEPACKAGES();

	/*! \brief Set 
	 */
	void setUSEPACKAGES(bool uSE_PACKAGES);
	/*! \brief Get 
	 */
	int getBILLINGDAYSOFFSET();

	/*! \brief Set 
	 */
	void setBILLINGDAYSOFFSET(int bILLING_DAYS_OFFSET);
	/*! \brief Get 
	 */
	std::string getIMGNAME();

	/*! \brief Set 
	 */
	void setIMGNAME(std::string iMGNAME);
	/*! \brief Get 
	 */
	int getREPEATBILLINGMETHOD();

	/*! \brief Set 
	 */
	void setREPEATBILLINGMETHOD(int rEPEAT_BILLING_METHOD);
	/*! \brief Get 
	 */
	int getDELETEPENDINGDAYS();

	/*! \brief Set 
	 */
	void setDELETEPENDINGDAYS(int dELETE_PENDING_DAYS);
	/*! \brief Get 
	 */
	int getSUSPENDDAYS();

	/*! \brief Set 
	 */
	void setSUSPENDDAYS(int sUSPEND_DAYS);
	/*! \brief Get 
	 */
	int getSUSPENDWARNINGDAYS();

	/*! \brief Set 
	 */
	void setSUSPENDWARNINGDAYS(int sUSPEND_WARNING_DAYS);
	/*! \brief Get 
	 */
	std::string getTITLE();

	/*! \brief Set 
	 */
	void setTITLE(std::string tITLE);
	/*! \brief Get 
	 */
	std::string getMENUNAME();

	/*! \brief Set 
	 */
	void setMENUNAME(std::string mENUNAME);
	/*! \brief Get 
	 */
	std::string getEMAILFROM();

	/*! \brief Set 
	 */
	void setEMAILFROM(std::string eMAIL_FROM);
	/*! \brief Get 
	 */
	std::string getTBLNAME();

	/*! \brief Set 
	 */
	void setTBLNAME(std::string tBLNAME);
	/*! \brief Get 
	 */
	std::string getTABLE();

	/*! \brief Set 
	 */
	void setTABLE(std::string tABLE);
	/*! \brief Get 
	 */
	std::string getTITLEFIELD();

	/*! \brief Set 
	 */
	void setTITLEFIELD(std::string tITLE_FIELD);
	/*! \brief Get 
	 */
	std::string getPREFIX();

	/*! \brief Set 
	 */
	void setPREFIX(std::string pREFIX);
	/*! \brief Get 
	 */
	std::string getTITLEFIELD2();

	/*! \brief Set 
	 */
	void setTITLEFIELD2(std::string tITLE_FIELD2);
	/*! \brief Get 
	 */
	std::string getTITLEFIELD3();

	/*! \brief Set 
	 */
	void setTITLEFIELD3(std::string tITLE_FIELD3);


    private:
    int sERVICE_ID_OFFSET{};
    bool uSE_REPEAT_INVOICE{};
    bool uSE_PACKAGES{};
    int bILLING_DAYS_OFFSET{};
    std::string iMGNAME{};
    int rEPEAT_BILLING_METHOD{};
    int dELETE_PENDING_DAYS{};
    int sUSPEND_DAYS{};
    int sUSPEND_WARNING_DAYS{};
    std::string tITLE{};
    std::string mENUNAME{};
    std::string eMAIL_FROM{};
    std::string tBLNAME{};
    std::string tABLE{};
    std::string tITLE_FIELD{};
    std::string pREFIX{};
    std::string tITLE_FIELD2{};
    std::string tITLE_FIELD3{};
};
}

#endif /* TINY_CPP_CLIENT_ModuleSettings_H_ */
