package io.swagger.server.api

import akka.http.scaladsl.server.Directives._
import akka.http.scaladsl.server.Route
import akka.http.scaladsl.unmarshalling.FromRequestUnmarshaller
import akka.http.scaladsl.marshalling.ToEntityMarshaller
import io.swagger.server.AkkaHttpHelper._
import io.swagger.server.model.ChargeInvoiceRows
import io.swagger.server.model.IpObject
import io.swagger.server.model.SuccessTextResponse
import io.swagger.server.model.inline_response_200_3
import io.swagger.server.model.inline_response_401

class FloatingIPsApi(
    floatingIPsService: FloatingIPsApiService,
    floatingIPsMarshaller: FloatingIPsApiMarshaller
) {
  import floatingIPsMarshaller._

  lazy val route: Route =
    path() { 
      post {
        
          
            
              
                
                  floatingIPsService.addFloatingIp()
               
             
           
         
       
      }
    } ~
    path() { (id) => 
      delete {
        
          
            
              
                
                  floatingIPsService.floatingIpsCancel(id = id)
               
             
           
         
       
      }
    } ~
    path() { (id) => 
      get {
        
          
            
              
                
                  floatingIPsService.getFloatingIpInfo(id = id)
               
             
           
         
       
      }
    } ~
    path() { (id) => 
      get {
        
          
            
              
                
                  floatingIPsService.getFloatingIpInvoices(id = id)
               
             
           
         
       
      }
    } ~
    path() { 
      get {
        
          
            
              
                
                  floatingIPsService.getFloatingIpsList()
               
             
           
         
       
      }
    } ~
    path() { (id) => 
      get {
        
          
            
              
                
                  floatingIPsService.getFloatingIpsWelcomeEmail(id = id)
               
             
           
         
       
      }
    } ~
    path() { 
      get {
        
          
            
              
                
                  floatingIPsService.getNewFloatingIp()
               
             
           
         
       
      }
    } ~
    path() { (id) => 
      post {
        
          
            formFields("ip".as[String]) { (ip) =>
              
                entity(as[IpObject]){ body =>
                  floatingIPsService.postFloatingIpsChangeIp(ip = ip, body = body, id = id)
                }
             
            }
         
       
      }
    } ~
    path() { 
      put {
        
          
            
              
                
                  floatingIPsService.putFloatingIps()
               
             
           
         
       
      }
    } ~
    path() { (id) => 
      post {
        
          
            
              
                
                  floatingIPsService.updateFloatingIpInfo(id = id)
               
             
           
         
       
      }
    }
}

trait FloatingIPsApiService {

  def addFloatingIp401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  def addFloatingIp0: Route =
    complete((0, "Default response"))
  /**
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   * Code: 0, Message: Default response
   */
  def addFloatingIp()
      (implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def floatingIpsCancel200(responseinline_response_200_3: inline_response_200_3)(implicit toEntityMarshallerinline_response_200_3: ToEntityMarshaller[inline_response_200_3]): Route =
    complete((200, responseinline_response_200_3))
  def floatingIpsCancel401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  /**
   * Code: 200, Message: Floating Ip Cancel, DataType: inline_response_200_3
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   */
  def floatingIpsCancel(id: Int)
      (implicit toEntityMarshallerinline_response_200_3: ToEntityMarshaller[inline_response_200_3], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def getFloatingIpInfo401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  def getFloatingIpInfo0: Route =
    complete((0, "Default response"))
  /**
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   * Code: 0, Message: Default response
   */
  def getFloatingIpInfo(id: Int)
      (implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def getFloatingIpInvoices200(responseChargeInvoiceRows: ChargeInvoiceRows)(implicit toEntityMarshallerChargeInvoiceRows: ToEntityMarshaller[ChargeInvoiceRows]): Route =
    complete((200, responseChargeInvoiceRows))
  def getFloatingIpInvoices401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  /**
   * Code: 200, Message: Get Invoices response, DataType: ChargeInvoiceRows
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   */
  def getFloatingIpInvoices(id: Int)
      (implicit toEntityMarshallerChargeInvoiceRows: ToEntityMarshaller[ChargeInvoiceRows], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def getFloatingIpsList200: Route =
    complete((200, "The listing of &#x60;Floating IPs&#x60; services on your account."))
  def getFloatingIpsList401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  def getFloatingIpsList0: Route =
    complete((0, "Default response"))
  /**
   * Code: 200, Message: The listing of &#x60;Floating IPs&#x60; services on your account.
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   * Code: 0, Message: Default response
   */
  def getFloatingIpsList()
      (implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def getFloatingIpsWelcomeEmail200(responseSuccessTextResponse: SuccessTextResponse)(implicit toEntityMarshallerSuccessTextResponse: ToEntityMarshaller[SuccessTextResponse]): Route =
    complete((200, responseSuccessTextResponse))
  def getFloatingIpsWelcomeEmail401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  /**
   * Code: 200, Message: A response indicating the operation completed successfully with a text message., DataType: SuccessTextResponse
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   */
  def getFloatingIpsWelcomeEmail(id: Int)
      (implicit toEntityMarshallerSuccessTextResponse: ToEntityMarshaller[SuccessTextResponse], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def getNewFloatingIp401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  def getNewFloatingIp0: Route =
    complete((0, "Default response"))
  /**
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   * Code: 0, Message: Default response
   */
  def getNewFloatingIp()
      (implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def postFloatingIpsChangeIp200(responseSuccessTextResponse: SuccessTextResponse)(implicit toEntityMarshallerSuccessTextResponse: ToEntityMarshaller[SuccessTextResponse]): Route =
    complete((200, responseSuccessTextResponse))
  def postFloatingIpsChangeIp401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  /**
   * Code: 200, Message: A response indicating the operation completed successfully with a text message., DataType: SuccessTextResponse
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   */
  def postFloatingIpsChangeIp(ip: String, body: IpObject, id: Int)
      (implicit toEntityMarshallerSuccessTextResponse: ToEntityMarshaller[SuccessTextResponse], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def putFloatingIps200: Route =
    complete((200, "Validate Floating IPs order response"))
  def putFloatingIps401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  /**
   * Code: 200, Message: Validate Floating IPs order response
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   */
  def putFloatingIps()
      (implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def updateFloatingIpInfo401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  def updateFloatingIpInfo0: Route =
    complete((0, "Default response"))
  /**
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   * Code: 0, Message: Default response
   */
  def updateFloatingIpInfo(id: String)
      (implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

}

trait FloatingIPsApiMarshaller {
  implicit def fromRequestUnmarshallerIpObject: FromRequestUnmarshaller[IpObject]


  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerinline_response_200_3: ToEntityMarshaller[inline_response_200_3]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerChargeInvoiceRows: ToEntityMarshaller[ChargeInvoiceRows]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerSuccessTextResponse: ToEntityMarshaller[SuccessTextResponse]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerSuccessTextResponse: ToEntityMarshaller[SuccessTextResponse]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

}

