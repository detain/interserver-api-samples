package org.openapitools.api;

import org.openapitools.api.ApiUtils
import org.openapitools.model.ChargeInvoiceRows
import org.openapitools.model.DenyRuleNew
import org.openapitools.model.DenyRuleRecord
import org.openapitools.model.GenericResponse
import org.openapitools.model.GetAccountInfo401Response
import org.openapitools.model.MailAlertRequest
import org.openapitools.model.MailAlertUpdateRequest
import org.openapitools.model.MailAlertsResponse
import org.openapitools.model.MailBlocks
import org.openapitools.model.MailCancel200Response
import org.openapitools.model.MailDelistRequest
import org.openapitools.model.MailDelistResponse
import org.openapitools.model.MailDeliverabilityResponse
import org.openapitools.model.MailLog
import org.openapitools.model.MailOrder
import org.openapitools.model.MailRow
import org.openapitools.model.MailSchema
import org.openapitools.model.MailStatsType
import org.openapitools.model.SendMail
import org.openapitools.model.SendMailAdv
import org.openapitools.model.SuccessTextResponse

class MailApi {
    String basePath = "https://my.interserver.net/apiv2"
    String versionPath = ""
    ApiUtils apiUtils = new ApiUtils();

    def addMail ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/order"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    null )

    }

    def addRule ( Integer id, DenyRuleNew denyRuleNew, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}/rules"

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
        if (denyRuleNew == null) {
            throw new RuntimeException("missing required params denyRuleNew")
        }



        contentType = 'application/json';
        bodyParams = denyRuleNew


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    GenericResponse.class )

    }

    def createMailAlert ( Integer id, MailAlertRequest mailAlertRequest, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}/alerts"

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
        if (mailAlertRequest == null) {
            throw new RuntimeException("missing required params mailAlertRequest")
        }



        contentType = 'application/json';
        bodyParams = mailAlertRequest


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    SuccessTextResponse.class )

    }

    def deleteMailAlert ( Integer id, Integer alertId, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}/alerts"

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
        if (alertId == null) {
            throw new RuntimeException("missing required params alertId")
        }

        if (alertId != null) {
            queryParams.put("alert_id", alertId)
        }




        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "DELETE", "",
                    SuccessTextResponse.class )

    }

    def deleteRule ( Integer id, String rule, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}/rules/${rule}"

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
        if (rule == null) {
            throw new RuntimeException("missing required params rule")
        }





        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "DELETE", "",
                    GenericResponse.class )

    }

    def delistBlock ( Integer id, String email, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}/blocks/delete"

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




        contentType = 'multipart/form-data';
        bodyParams = email

        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    GenericResponse.class )

    }

    def getMailAlerts ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}/alerts"

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
                    MailAlertsResponse.class )

    }

    def getMailBlocks ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}/blocks"

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
                    MailBlocks.class )

    }

    def getMailDelist ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}/delist"

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
                    MailDelistResponse.class )

    }

    def getMailDeliverability ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}/deliverability"

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
                    MailDeliverabilityResponse.class )

    }

    def getMailInfo ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}"

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
                    MailSchema.class )

    }

    def getMailInvoices ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}/invoices"

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
                    ChargeInvoiceRows.class )

    }

    def getMailList ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "array",
                    MailRow.class )

    }

    def getMailWelcomeEmail ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}/welcome_email"

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

    def getNewMail ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/order"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    MailOrder.class )

    }

    def getRules ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}/rules"

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
                    "GET", "array",
                    DenyRuleRecord.class )

    }

    def getStats ( Integer id, String time, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}/stats"

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

        if (time != null) {
            queryParams.put("time", time)
        }




        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    MailStatsType.class )

    }

    def mailCancel ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}"

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
                    MailCancel200Response.class )

    }

    def postMailDelist ( Integer id, MailDelistRequest mailDelistRequest, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}/delist"

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
        if (mailDelistRequest == null) {
            throw new RuntimeException("missing required params mailDelistRequest")
        }



        contentType = 'application/json';
        bodyParams = mailDelistRequest


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    SuccessTextResponse.class )

    }

    def putMail ( Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/order"

        // params
        def queryParams = [:]
        def headerParams = [:]
        def bodyParams
        def accept
        def contentType






        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "PUT", "",
                    null )

    }

    def resetMailPassword ( Integer id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}/reset_password"

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

    def sendAdvMail ( Integer id, SendMailAdv sendMailAdv, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}/advsend"

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
        if (sendMailAdv == null) {
            throw new RuntimeException("missing required params sendMailAdv")
        }



        contentType = 'application/json';
        bodyParams = sendMailAdv


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    GenericResponse.class )

    }

    def sendMail ( Integer id, SendMail sendMail, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}/send"

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
        if (sendMail == null) {
            throw new RuntimeException("missing required params sendMail")
        }



        contentType = 'application/json';
        bodyParams = sendMail


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "POST", "",
                    GenericResponse.class )

    }

    def updateMailAlert ( Integer id, MailAlertUpdateRequest mailAlertUpdateRequest, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}/alerts"

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
        if (mailAlertUpdateRequest == null) {
            throw new RuntimeException("missing required params mailAlertUpdateRequest")
        }



        contentType = 'application/json';
        bodyParams = mailAlertUpdateRequest


        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "PUT", "",
                    SuccessTextResponse.class )

    }

    def updateMailInfo ( String id, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}"

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

    def viewMailLog ( Integer id, Long id2, String origin, String mx, String from, String to, String subject, String mailid, Integer skip, Integer limit, Long startDate, Long endDate, String delivered, Closure onSuccess, Closure onFailure)  {
        String resourcePath = "/mail/${id}/log"

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

        if (id2 != null) {
            queryParams.put("id", id2)
        }
        if (origin != null) {
            queryParams.put("origin", origin)
        }
        if (mx != null) {
            queryParams.put("mx", mx)
        }
        if (from != null) {
            queryParams.put("from", from)
        }
        if (to != null) {
            queryParams.put("to", to)
        }
        if (subject != null) {
            queryParams.put("subject", subject)
        }
        if (mailid != null) {
            queryParams.put("mailid", mailid)
        }
        if (skip != null) {
            queryParams.put("skip", skip)
        }
        if (limit != null) {
            queryParams.put("limit", limit)
        }
        if (startDate != null) {
            queryParams.put("startDate", startDate)
        }
        if (endDate != null) {
            queryParams.put("endDate", endDate)
        }
        if (delivered != null) {
            queryParams.put("delivered", delivered)
        }




        accept = apiUtils.selectHeaderAccept(["application/json"])

        apiUtils.invokeApi(onSuccess, onFailure, basePath, versionPath, resourcePath, queryParams, headerParams, bodyParams, accept, contentType,
                    "GET", "",
                    MailLog.class )

    }

}
