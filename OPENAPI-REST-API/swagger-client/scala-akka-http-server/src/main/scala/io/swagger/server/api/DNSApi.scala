package io.swagger.server.api

import akka.http.scaladsl.server.Directives._
import akka.http.scaladsl.server.Route
import akka.http.scaladsl.unmarshalling.FromRequestUnmarshaller
import akka.http.scaladsl.marshalling.ToEntityMarshaller
import io.swagger.server.AkkaHttpHelper._
import io.swagger.server.model.DnsListItem
import io.swagger.server.model.DnsNewDomain
import io.swagger.server.model.DnsNewRecord
import io.swagger.server.model.DnsRecord
import io.swagger.server.model.DnsRecordType
import io.swagger.server.model.DnsUpdateRecord
import io.swagger.server.model.SuccessTextResponse
import io.swagger.server.model.inline_response_401

class DNSApi(
    dNSService: DNSApiService,
    dNSMarshaller: DNSApiMarshaller
) {
  import dNSMarshaller._

  lazy val route: Route =
    path() { 
      post {
        
          
            formFields("domain".as[String], "ip".as[String]) { (domain, ip) =>
              
                entity(as[DnsNewDomain]){ body =>
                  dNSService.addDnsDomain(domain = domain, ip = ip, body = body)
                }
             
            }
         
       
      }
    } ~
    path() { (id) => 
      post {
        
          
            formFields("name".as[String], "type".as[String], "content".as[String], "ttl".as[Int], "prio".as[Int]) { (name, &#x60;type&#x60;, content, ttl, prio) =>
              
                entity(as[DnsNewRecord]){ body =>
                  dNSService.addDnsRecord(name = name, &#x60;type&#x60; = &#x60;type&#x60;, content = content, ttl = ttl, prio = prio, body = body, id = id)
                }
             
            }
         
       
      }
    } ~
    path() { (id) => 
      delete {
        
          
            
              
                
                  dNSService.deleteDnsDomain(id = id)
               
             
           
         
       
      }
    } ~
    path() { (domainId, recordId) => 
      delete {
        
          
            
              
                
                  dNSService.deleteDnsRecord(domainId = domainId, recordId = recordId)
               
             
           
         
       
      }
    } ~
    path() { (id) => 
      get {
        
          
            
              
                
                  dNSService.getDnsDomain(id = id)
               
             
           
         
       
      }
    } ~
    path() { 
      get {
        
          
            
              
                
                  dNSService.getDnsList()
               
             
           
         
       
      }
    } ~
    path() { (domainId, recordId) => 
      post {
        
          
            formFields("name".as[String], "type".as[String], "content".as[String], "ttl".as[String], "prio".as[String], "disabled".as[String], "ordername".as[String], "auth".as[String]) { (name, &#x60;type&#x60;, content, ttl, prio, disabled, ordername, auth) =>
              
                entity(as[DnsUpdateRecord]){ body =>
                  dNSService.updateDnsRecord(name = name, &#x60;type&#x60; = &#x60;type&#x60;, content = content, ttl = ttl, prio = prio, disabled = disabled, ordername = ordername, auth = auth, body = body, domainId = domainId, recordId = recordId)
                }
             
            }
         
       
      }
    }
}

trait DNSApiService {

  def addDnsDomain200(responseSuccessTextResponse: SuccessTextResponse)(implicit toEntityMarshallerSuccessTextResponse: ToEntityMarshaller[SuccessTextResponse]): Route =
    complete((200, responseSuccessTextResponse))
  def addDnsDomain401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  /**
   * Code: 200, Message: A response indicating the operation completed successfully with a text message., DataType: SuccessTextResponse
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   */
  def addDnsDomain(domain: String, ip: String, body: DnsNewDomain)
      (implicit toEntityMarshallerSuccessTextResponse: ToEntityMarshaller[SuccessTextResponse], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def addDnsRecord200: Route =
    complete((200, "Add DNS Domain Response"))
  def addDnsRecord401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  /**
   * Code: 200, Message: Add DNS Domain Response
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   */
  def addDnsRecord(name: String, &#x60;type&#x60;: String, content: String, ttl: Int, prio: Int, body: DnsNewRecord, id: String)
      (implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def deleteDnsDomain200(responseSuccessTextResponse: SuccessTextResponse)(implicit toEntityMarshallerSuccessTextResponse: ToEntityMarshaller[SuccessTextResponse]): Route =
    complete((200, responseSuccessTextResponse))
  def deleteDnsDomain401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  /**
   * Code: 200, Message: A response indicating the operation completed successfully with a text message., DataType: SuccessTextResponse
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   */
  def deleteDnsDomain(id: String)
      (implicit toEntityMarshallerSuccessTextResponse: ToEntityMarshaller[SuccessTextResponse], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def deleteDnsRecord200(responseSuccessTextResponse: SuccessTextResponse)(implicit toEntityMarshallerSuccessTextResponse: ToEntityMarshaller[SuccessTextResponse]): Route =
    complete((200, responseSuccessTextResponse))
  def deleteDnsRecord401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  /**
   * Code: 200, Message: A response indicating the operation completed successfully with a text message., DataType: SuccessTextResponse
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   */
  def deleteDnsRecord(domainId: Int, recordId: Int)
      (implicit toEntityMarshallerSuccessTextResponse: ToEntityMarshaller[SuccessTextResponse], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def getDnsDomain200(responseDnsRecordarray: List[DnsRecord])(implicit toEntityMarshallerDnsRecordarray: ToEntityMarshaller[List[DnsRecord]]): Route =
    complete((200, responseDnsRecordarray))
  def getDnsDomain401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  /**
   * Code: 200, Message: The DNS records for the specified domain., DataType: List[DnsRecord]
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   */
  def getDnsDomain(id: Int)
      (implicit toEntityMarshallerDnsRecordarray: ToEntityMarshaller[List[DnsRecord]], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def getDnsList200(responseDnsListItemarray: List[DnsListItem])(implicit toEntityMarshallerDnsListItemarray: ToEntityMarshaller[List[DnsListItem]]): Route =
    complete((200, responseDnsListItemarray))
  def getDnsList401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  /**
   * Code: 200, Message: Listing of DNS domains on the account with their primary A record., DataType: List[DnsListItem]
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   */
  def getDnsList()
      (implicit toEntityMarshallerDnsListItemarray: ToEntityMarshaller[List[DnsListItem]], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def updateDnsRecord200(responseSuccessTextResponse: SuccessTextResponse)(implicit toEntityMarshallerSuccessTextResponse: ToEntityMarshaller[SuccessTextResponse]): Route =
    complete((200, responseSuccessTextResponse))
  def updateDnsRecord401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  /**
   * Code: 200, Message: A response indicating the operation completed successfully with a text message., DataType: SuccessTextResponse
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   */
  def updateDnsRecord(name: String, &#x60;type&#x60;: String, content: String, ttl: String, prio: String, disabled: String, ordername: String, auth: String, body: DnsUpdateRecord, domainId: Int, recordId: Int)
      (implicit toEntityMarshallerSuccessTextResponse: ToEntityMarshaller[SuccessTextResponse], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

}

trait DNSApiMarshaller {
  implicit def fromRequestUnmarshallerDnsUpdateRecord: FromRequestUnmarshaller[DnsUpdateRecord]

  implicit def fromRequestUnmarshallerDnsNewDomain: FromRequestUnmarshaller[DnsNewDomain]

  implicit def fromRequestUnmarshallerDnsNewRecord: FromRequestUnmarshaller[DnsNewRecord]


  implicit def toEntityMarshallerSuccessTextResponse: ToEntityMarshaller[SuccessTextResponse]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerSuccessTextResponse: ToEntityMarshaller[SuccessTextResponse]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerSuccessTextResponse: ToEntityMarshaller[SuccessTextResponse]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerDnsRecordarray: ToEntityMarshaller[List[DnsRecord]]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerDnsListItemarray: ToEntityMarshaller[List[DnsListItem]]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerSuccessTextResponse: ToEntityMarshaller[SuccessTextResponse]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

}

