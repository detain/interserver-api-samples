package org.openapitools.api;

import org.openapitools.api.ApiUtils
import org.openapitools.model.AffiliateBannerRow
import org.openapitools.model.AffiliateTrafficRow
import org.openapitools.model.BillingAddCcRequest
import org.openapitools.model.BillingInvoiceDetail
import org.openapitools.model.BillingInvoiceList
import org.openapitools.model.BillingPaymentMethodRequest
import org.openapitools.model.BillingPrepayRequest
import org.openapitools.model.BillingVerifyCcRequest
import org.openapitools.model.GetAccountInfo401Response
import org.openapitools.model.InitiatePayment200Response
import org.openapitools.model.Invoice
import org.openapitools.model.MonthlyCounts
import org.openapitools.model.StatusMonthlyBreakdown
import org.openapitools.model.SuccessTextResponse
import org.openapitools.model.TextResponse

class BillingApi {
    String basePath = "https://my.interserver.net/apiv2"
    String versionPath = ""
    ApiUtils apiUtils = new ApiUtils();

    def addAccountCreditCard ( String name, String address, String city, String state, String country, String zip, String cc, String ccExp, String ccCcv2, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/account/creditcards"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType





        contentType = 'multipart/form-data';
        bodyParams = [:]
        bodyParams.put("name", name)
        bodyParams.put("address", address)
        bodyParams.put("city", city)
        bodyParams.put("state", state)
        bodyParams.put("country", country)
        bodyParams.put("zip", zip)
        bodyParams.put("cc", cc)
        bodyParams.put("cc_exp", ccExp)
        bodyParams.put("cc_ccv2", ccCcv2)

        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    SuccessTextResponse.class )

    }

    def addBillingCreditCard ( BillingAddCcRequest billingAddCcRequest, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/billing/creditcards"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (billingAddCcRequest == null) {
            throw new RuntimeException("missing required params billingAddCcRequest")
        }



        contentType = 'application/json';
        bodyParams = billingAddCcRequest


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    SuccessTextResponse.class )

    }

    def addBillingPrepay ( BillingPrepayRequest billingPrepayRequest, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/billing/prepays"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (billingPrepayRequest == null) {
            throw new RuntimeException("missing required params billingPrepayRequest")
        }



        contentType = 'application/json';
        bodyParams = billingPrepayRequest


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    SuccessTextResponse.class )

    }

    def deleteAccountCreditCard ( String id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/account/creditcards/${id}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "DELETE", "",
                    null )

    }

    def deleteBillingCreditCard ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/billing/creditcards/${id}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "DELETE", "",
                    SuccessTextResponse.class )

    }

    def deleteBillingInvoice ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/billing/invoices/${id}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "DELETE", "",
                    SuccessTextResponse.class )

    }

    def deleteBillingPrepay ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/billing/prepays/${id}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "DELETE", "",
                    SuccessTextResponse.class )

    }

    def getAffiliateBanners ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/affiliate/banners"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    AffiliateBannerRow.class )

    }

    def getAffiliateRichReport ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/affiliate/rich_report"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    TextResponse.class )

    }

    def getAffiliateSalesGraph ( Integer days, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/affiliate/sales_graph"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType


        if (days != null) {
            queryParams.put("days", days)
        }




        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    StatusMonthlyBreakdown.class )

    }

    def getAffiliateSalesReport ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/affiliate/sales_report"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    TextResponse.class )

    }

    def getAffiliateTrafficGraph ( Integer days, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/affiliate/traffic_graph"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType


        if (days != null) {
            queryParams.put("days", days)
        }




        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    MonthlyCounts.class )

    }

    def getAffiliateWebTraffic ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/affiliate/web_traffic"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    AffiliateTrafficRow.class )

    }

    def getBillingCart ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/billing/cart"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    null )

    }

    def getBillingCreditCardVerify ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/billing/creditcards/${id}/verify"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    SuccessTextResponse.class )

    }

    def getBillingInvoice ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/billing/invoices/${id}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    BillingInvoiceDetail.class )

    }

    def getBillingInvoices ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/billing/invoices"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    BillingInvoiceList.class )

    }

    def getBillingPrePays ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/billing/prepays"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    null )

    }

    def getInvoices ( String searchString, Integer skip, Integer limit, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/invoices"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType


        if (searchString != null) {
            queryParams.put("searchString", searchString)
        }
        if (skip != null) {
            queryParams.put("skip", skip)
        }
        if (limit != null) {
            queryParams.put("limit", limit)
        }




        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    Invoice.class )

    }

    def initiatePayment ( String method, String invoices, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/pay/${method}/${invoices}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (method == null) {
            throw new RuntimeException("missing required params method")
        }
        // verify required params are set
        if (invoices == null) {
            throw new RuntimeException("missing required params invoices")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    InitiatePayment200Response.class )

    }

    def postBillingCreditCardVerify ( Integer id, BillingVerifyCcRequest billingVerifyCcRequest, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/billing/creditcards/${id}/verify"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }
        // verify required params are set
        if (billingVerifyCcRequest == null) {
            throw new RuntimeException("missing required params billingVerifyCcRequest")
        }



        contentType = 'application/json';
        bodyParams = billingVerifyCcRequest


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    SuccessTextResponse.class )

    }

    def updateAccountCreditCard ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/account/creditcards/${id}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    null )

    }

    def updateAffiliateDockSetup ( String affiliateDockTitle, String affiliateDockDescription, String referrerCoupon, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/affiliate/dock_setup"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType





        contentType = 'multipart/form-data';
        bodyParams = [:]
        bodyParams.put("affiliate_dock_title", affiliateDockTitle)
        bodyParams.put("affiliate_dock_description", affiliateDockDescription)
        bodyParams.put("referrer_coupon", referrerCoupon)

        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    TextResponse.class )

    }

    def updateAffiliateLandingPage ( String affiliateDockTitle, String affiliateDockDescription, String referrerCoupon, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/affiliate/landing_pg"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType





        contentType = 'multipart/form-data';
        bodyParams = [:]
        bodyParams.put("affiliate_dock_title", affiliateDockTitle)
        bodyParams.put("affiliate_dock_description", affiliateDockDescription)
        bodyParams.put("referrer_coupon", referrerCoupon)

        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    TextResponse.class )

    }

    def updateAffiliatePaymentSetup ( String affiliatePaypal, String affiliatePaymentMethod, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/affiliate/payment_setup"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType





        contentType = 'multipart/form-data';
        bodyParams = [:]
        bodyParams.put("affiliate_paypal", affiliatePaypal)
        bodyParams.put("affiliate_payment_method", affiliatePaymentMethod)

        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    TextResponse.class )

    }

    def updateBillingCreditCard ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/billing/creditcards/${id}"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (id == null) {
            throw new RuntimeException("missing required params id")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    SuccessTextResponse.class )

    }

    def updateBillingPaymentMethod ( BillingPaymentMethodRequest billingPaymentMethodRequest, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/billing/payment_method"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType

        // verify required params are set
        if (billingPaymentMethodRequest == null) {
            throw new RuntimeException("missing required params billingPaymentMethodRequest")
        }



        contentType = 'application/json';
        bodyParams = billingPaymentMethodRequest


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    SuccessTextResponse.class )

    }

}
