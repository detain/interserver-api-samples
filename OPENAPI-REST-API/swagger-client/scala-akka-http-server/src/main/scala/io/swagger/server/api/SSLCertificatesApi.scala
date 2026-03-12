package io.swagger.server.api

import akka.http.scaladsl.server.Directives._
import akka.http.scaladsl.server.Route
import akka.http.scaladsl.unmarshalling.FromRequestUnmarshaller
import akka.http.scaladsl.marshalling.ToEntityMarshaller
import io.swagger.server.AkkaHttpHelper._
import io.swagger.server.model.ChargeInvoiceRows
import io.swagger.server.model.SuccessTextResponse
import io.swagger.server.model.inline_response_200_20
import io.swagger.server.model.inline_response_401

class SSLCertificatesApi(
    sSLCertificatesService: SSLCertificatesApiService,
    sSLCertificatesMarshaller: SSLCertificatesApiMarshaller
) {
  import sSLCertificatesMarshaller._

  lazy val route: Route =
    path() { 
      post {
        
          
            
              
                
                  sSLCertificatesService.addSsl()
               
             
           
         
       
      }
    } ~
    path() { 
      get {
        
          
            
              
                
                  sSLCertificatesService.getNewSsl()
               
             
           
         
       
      }
    } ~
    path() { (id) => 
      get {
        
          
            
              
                
                  sSLCertificatesService.getSslInfo(id = id)
               
             
           
         
       
      }
    } ~
    path() { (id) => 
      get {
        
          
            
              
                
                  sSLCertificatesService.getSslInvoices(id = id)
               
             
           
         
       
      }
    } ~
    path() { 
      get {
        
          
            
              
                
                  sSLCertificatesService.getSslList()
               
             
           
         
       
      }
    } ~
    path() { (id) => 
      get {
        
          
            
              
                
                  sSLCertificatesService.getSslWelcomeEmail(id = id)
               
             
           
         
       
      }
    } ~
    path() { 
      put {
        
          
            
              
                
                  sSLCertificatesService.putSsl()
               
             
           
         
       
      }
    } ~
    path() { (id) => 
      delete {
        
          
            
              
                
                  sSLCertificatesService.sslCancel(id = id)
               
             
           
         
       
      }
    } ~
    path() { (id) => 
      post {
        
          
            
              
                
                  sSLCertificatesService.updateSslInfo(id = id)
               
             
           
         
       
      }
    }
}

trait SSLCertificatesApiService {

  def addSsl401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  def addSsl0: Route =
    complete((0, "Default response"))
  /**
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   * Code: 0, Message: Default response
   */
  def addSsl()
      (implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def getNewSsl401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  def getNewSsl0: Route =
    complete((0, "Default response"))
  /**
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   * Code: 0, Message: Default response
   */
  def getNewSsl()
      (implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def getSslInfo401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  def getSslInfo0: Route =
    complete((0, "Default response"))
  /**
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   * Code: 0, Message: Default response
   */
  def getSslInfo(id: Int)
      (implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def getSslInvoices200(responseChargeInvoiceRows: ChargeInvoiceRows)(implicit toEntityMarshallerChargeInvoiceRows: ToEntityMarshaller[ChargeInvoiceRows]): Route =
    complete((200, responseChargeInvoiceRows))
  def getSslInvoices401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  /**
   * Code: 200, Message: Get Invoices response, DataType: ChargeInvoiceRows
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   */
  def getSslInvoices(id: Int)
      (implicit toEntityMarshallerChargeInvoiceRows: ToEntityMarshaller[ChargeInvoiceRows], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def getSslList200: Route =
    complete((200, "The listing of &#x60;SSL&#x60; services on your account."))
  def getSslList401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  def getSslList0: Route =
    complete((0, "Default response"))
  /**
   * Code: 200, Message: The listing of &#x60;SSL&#x60; services on your account.
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   * Code: 0, Message: Default response
   */
  def getSslList()
      (implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def getSslWelcomeEmail200(responseSuccessTextResponse: SuccessTextResponse)(implicit toEntityMarshallerSuccessTextResponse: ToEntityMarshaller[SuccessTextResponse]): Route =
    complete((200, responseSuccessTextResponse))
  def getSslWelcomeEmail401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  /**
   * Code: 200, Message: A response indicating the operation completed successfully with a text message., DataType: SuccessTextResponse
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   */
  def getSslWelcomeEmail(id: Int)
      (implicit toEntityMarshallerSuccessTextResponse: ToEntityMarshaller[SuccessTextResponse], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def putSsl200: Route =
    complete((200, "Validate SSL Order response"))
  def putSsl401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  /**
   * Code: 200, Message: Validate SSL Order response
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   */
  def putSsl()
      (implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def sslCancel200(responseinline_response_200_20: inline_response_200_20)(implicit toEntityMarshallerinline_response_200_20: ToEntityMarshaller[inline_response_200_20]): Route =
    complete((200, responseinline_response_200_20))
  def sslCancel401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  /**
   * Code: 200, Message: SSL Cancel, DataType: inline_response_200_20
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   */
  def sslCancel(id: Int)
      (implicit toEntityMarshallerinline_response_200_20: ToEntityMarshaller[inline_response_200_20], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def updateSslInfo401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  def updateSslInfo0: Route =
    complete((0, "Default response"))
  /**
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   * Code: 0, Message: Default response
   */
  def updateSslInfo(id: String)
      (implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

}

trait SSLCertificatesApiMarshaller {

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerChargeInvoiceRows: ToEntityMarshaller[ChargeInvoiceRows]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerSuccessTextResponse: ToEntityMarshaller[SuccessTextResponse]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerinline_response_200_20: ToEntityMarshaller[inline_response_200_20]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

}

