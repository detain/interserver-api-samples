#ifndef TINY_CPP_CLIENT_SSLCertificatesApi_H_
#define TINY_CPP_CLIENT_SSLCertificatesApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "ChargeInvoiceRows.h"
#include "GetAccountInfo_401_response.h"
#include "SslCancel_200_response.h"
#include "SuccessTextResponse.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class SSLCertificatesApi : public Service {
public:
    SSLCertificatesApi() = default;

    virtual ~SSLCertificatesApi() = default;

    /**
    * Place SSL Cert Order.
    *
    * Places an order for a new SSL certificate. Use `PUT /ssl/order` to validate the order first.
    */
    Response<
            String
        >
    addSsl(
    );
    /**
    * SSL Cert Ordering Information.
    *
    * Retrieves available SSL certificate types and pricing for ordering.
    */
    Response<
            String
        >
    getNewSsl(
    );
    /**
    * Get SSL Cert Info.
    *
    * Returns detailed information about a specific SSL certificate including its domain and expiration.
    * \param id SSL certificate ID number. *Required*
    */
    Response<
            String
        >
    getSslInfo(
            
            int id
            
    );
    /**
    * Get SSL Cert Invoices.
    *
    * Returns the billing invoices associated with this SSL certificate.
    * \param id SSL Cert ID number *Required*
    */
    Response<
                ChargeInvoiceRows
        >
    getSslInvoices(
            
            int id
            
    );
    /**
    * List SSL Certs.
    *
    * Returns all SSL certificate services on the account with their current status.
    */
    Response<
            String
        >
    getSslList(
    );
    /**
    * Resend SSL Welcome Email.
    *
    * Resends the welcome email for the order.
    * \param id SSL Cert ID number *Required*
    */
    Response<
                SuccessTextResponse
        >
    getSslWelcomeEmail(
            
            int id
            
    );
    /**
    * Validate SSL Cert Order.
    *
    * Validates an SSL certificate order before placing it.
    */
    Response<
            String
        >
    putSsl(
    );
    /**
    * Cancel SSL Certificate Service.
    *
    * Cancels the SSL certificate service. The certificate will not be renewed and billing will stop at the end of the current billing cycle.
    * \param id SSL Cert ID number *Required*
    */
    Response<
                SslCancel_200_response
        >
    sslCancel(
            
            int id
            
    );
    /**
    * Update SSL Cert Order.
    *
    * Updates settings on an SSL certificate order.
    * \param id SSL certificate ID number. *Required*
    */
    Response<
            String
        >
    updateSslInfo(
            
            std::string id
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_SSLCertificatesApi_H_ */