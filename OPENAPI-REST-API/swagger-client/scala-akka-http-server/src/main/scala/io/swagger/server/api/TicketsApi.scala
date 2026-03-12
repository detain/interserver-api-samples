package io.swagger.server.api

import akka.http.scaladsl.server.Directives._
import akka.http.scaladsl.server.Route
import akka.http.scaladsl.unmarshalling.FromRequestUnmarshaller
import akka.http.scaladsl.marshalling.ToEntityMarshaller
import io.swagger.server.AkkaHttpHelper._
import java.math.BigDecimal
import io.swagger.server.model.CloseTicketResponseSchema
import io.swagger.server.model.ReplyTicketRequest
import io.swagger.server.model.ReplyTicketResponseSchema
import io.swagger.server.model.TicketNew
import io.swagger.server.model.TicketNewResponse
import io.swagger.server.model.Tickets
import io.swagger.server.model.UpdateTicket
import io.swagger.server.model.UpdateTicketResponseSchema
import io.swagger.server.model.ViewTicketResponse
import io.swagger.server.model.inline_response_401

class TicketsApi(
    ticketsService: TicketsApiService,
    ticketsMarshaller: TicketsApiMarshaller
) {
  import ticketsMarshaller._

  lazy val route: Route =
    path() { 
      post {
        
          
            formFields("subject".as[String], "body".as[String], "service_id".as[Int], "service_module".as[String]) { (subject, body, serviceId, serviceModule) =>
              
                entity(as[TicketNew]){ body =>
                  ticketsService.addNewTicket(body = body, subject = subject, body = body, serviceId = serviceId, serviceModule = serviceModule)
                }
             
            }
         
       
      }
    } ~
    path() { (id) => 
      get {
        
          
            
              
                
                  ticketsService.closeTicket(id = id)
               
             
           
         
       
      }
    } ~
    path() { (id) => 
      delete {
        
          
            
              
                
                  ticketsService.deleteTicketInfo(id = id)
               
             
           
         
       
      }
    } ~
    path() { 
      get {
        
          
            
              
                
                  ticketsService.getNewTicket()
               
             
           
         
       
      }
    } ~
    path() { (id) => 
      get {
        
          
            
              
                
                  ticketsService.getTicketInfo(id = id)
               
             
           
         
       
      }
    } ~
    path() { 
      get {
        parameters("page".as[Int].?, "period".as[String].?, "view".as[String].?) { (page, period, view) =>
          
            
              
                
                  ticketsService.getTicketsList(page = page, period = period, view = view)
               
             
           
         
        }
      }
    } ~
    path() { (id) => 
      post {
        
          
            
              
                
                  ticketsService.postTicketInfo(id = id)
               
             
           
         
       
      }
    } ~
    path() { 
      post {
        
          
            
              
                
                  ticketsService.postTicketsList()
               
             
           
         
       
      }
    } ~
    path() { (id) => 
      put {
        
          
            
              
                
                  ticketsService.putTicketInfo(id = id)
               
             
           
         
       
      }
    } ~
    path() { (id) => 
      post {
        
          
            formFields("content".as[String].?) { (content) =>
              
                entity(as[ReplyTicketRequest]){ body =>
                  ticketsService.replyTicket(id = id, body = body, content = content)
                }
             
            }
         
       
      }
    } ~
    path() { (id) => 
      post {
        
          
            formFields("ip".as[String].?, "ip_address".as[String].?, "customer_server_access".as[String].?, "root_password".as[String].?, "sudo_username".as[String].?, "sudo_password".as[String].?, "port".as[Int].?) { (ip, ipAddress, customerServerAccess, rootPassword, sudoUsername, sudoPassword, port) =>
              
                entity(as[UpdateTicket]){ body =>
                  ticketsService.updateTicketInfo(id = id, body = body, ip = ip, ipAddress = ipAddress, customerServerAccess = customerServerAccess, rootPassword = rootPassword, sudoUsername = sudoUsername, sudoPassword = sudoPassword, port = port)
                }
             
            }
         
       
      }
    }
}

trait TicketsApiService {

  def addNewTicket200(responseTicketNewResponse: TicketNewResponse)(implicit toEntityMarshallerTicketNewResponse: ToEntityMarshaller[TicketNewResponse]): Route =
    complete((200, responseTicketNewResponse))
  def addNewTicket400(responseTicketNewResponse: TicketNewResponse)(implicit toEntityMarshallerTicketNewResponse: ToEntityMarshaller[TicketNewResponse]): Route =
    complete((400, responseTicketNewResponse))
  def addNewTicket401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  /**
   * Code: 200, Message: A successful response after creating a ticket, DataType: TicketNewResponse
   * Code: 400, Message: A successful response after creating a ticket, DataType: TicketNewResponse
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   */
  def addNewTicket(body: String, subject: String, body: String, serviceId: Int, serviceModule: String)
      (implicit toEntityMarshallerTicketNewResponse: ToEntityMarshaller[TicketNewResponse], toEntityMarshallerTicketNewResponse: ToEntityMarshaller[TicketNewResponse], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def closeTicket200(responseCloseTicketResponseSchema: CloseTicketResponseSchema)(implicit toEntityMarshallerCloseTicketResponseSchema: ToEntityMarshaller[CloseTicketResponseSchema]): Route =
    complete((200, responseCloseTicketResponseSchema))
  def closeTicket401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  /**
   * Code: 200, Message: Close ticket., DataType: CloseTicketResponseSchema
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   */
  def closeTicket(id: String)
      (implicit toEntityMarshallerCloseTicketResponseSchema: ToEntityMarshaller[CloseTicketResponseSchema], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def deleteTicketInfo200(responseViewTicketResponse: ViewTicketResponse)(implicit toEntityMarshallerViewTicketResponse: ToEntityMarshaller[ViewTicketResponse]): Route =
    complete((200, responseViewTicketResponse))
  def deleteTicketInfo401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  def deleteTicketInfo0: Route =
    complete((0, "Default response"))
  /**
   * Code: 200, Message: Ticket Information, DataType: ViewTicketResponse
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   * Code: 0, Message: Default response
   */
  def deleteTicketInfo(id: String)
      (implicit toEntityMarshallerViewTicketResponse: ToEntityMarshaller[ViewTicketResponse], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def getNewTicket200: Route =
    complete((200, "New ticket form data including departments and service categories."))
  def getNewTicket401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  /**
   * Code: 200, Message: New ticket form data including departments and service categories.
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   */
  def getNewTicket()
      (implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def getTicketInfo200(responseViewTicketResponse: ViewTicketResponse)(implicit toEntityMarshallerViewTicketResponse: ToEntityMarshaller[ViewTicketResponse]): Route =
    complete((200, responseViewTicketResponse))
  def getTicketInfo401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  def getTicketInfo0: Route =
    complete((0, "Default response"))
  /**
   * Code: 200, Message: Ticket Information, DataType: ViewTicketResponse
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   * Code: 0, Message: Default response
   */
  def getTicketInfo(id: String)
      (implicit toEntityMarshallerViewTicketResponse: ToEntityMarshaller[ViewTicketResponse], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def getTicketsList200(responseTickets: Tickets)(implicit toEntityMarshallerTickets: ToEntityMarshaller[Tickets]): Route =
    complete((200, responseTickets))
  def getTicketsList401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  /**
   * Code: 200, Message: The listing of support tickets., DataType: Tickets
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   */
  def getTicketsList(page: Option[Int], period: Option[String], view: Option[String])
      (implicit toEntityMarshallerTickets: ToEntityMarshaller[Tickets], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def postTicketInfo200(responseViewTicketResponse: ViewTicketResponse)(implicit toEntityMarshallerViewTicketResponse: ToEntityMarshaller[ViewTicketResponse]): Route =
    complete((200, responseViewTicketResponse))
  def postTicketInfo401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  def postTicketInfo0: Route =
    complete((0, "Default response"))
  /**
   * Code: 200, Message: Ticket Information, DataType: ViewTicketResponse
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   * Code: 0, Message: Default response
   */
  def postTicketInfo(id: String)
      (implicit toEntityMarshallerViewTicketResponse: ToEntityMarshaller[ViewTicketResponse], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def postTicketsList200(responseTickets: Tickets)(implicit toEntityMarshallerTickets: ToEntityMarshaller[Tickets]): Route =
    complete((200, responseTickets))
  def postTicketsList401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  /**
   * Code: 200, Message: Search through the ticket system for a given email, subject, or ticket mask id., DataType: Tickets
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   */
  def postTicketsList()
      (implicit toEntityMarshallerTickets: ToEntityMarshaller[Tickets], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def putTicketInfo200(responseViewTicketResponse: ViewTicketResponse)(implicit toEntityMarshallerViewTicketResponse: ToEntityMarshaller[ViewTicketResponse]): Route =
    complete((200, responseViewTicketResponse))
  def putTicketInfo401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  def putTicketInfo0: Route =
    complete((0, "Default response"))
  /**
   * Code: 200, Message: Ticket Information, DataType: ViewTicketResponse
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   * Code: 0, Message: Default response
   */
  def putTicketInfo(id: String)
      (implicit toEntityMarshallerViewTicketResponse: ToEntityMarshaller[ViewTicketResponse], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def replyTicket200(responseReplyTicketResponseSchema: ReplyTicketResponseSchema)(implicit toEntityMarshallerReplyTicketResponseSchema: ToEntityMarshaller[ReplyTicketResponseSchema]): Route =
    complete((200, responseReplyTicketResponseSchema))
  def replyTicket401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  def replyTicket0: Route =
    complete((0, "Default response"))
  /**
   * Code: 200, Message: Post Reply to the ticket., DataType: ReplyTicketResponseSchema
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   * Code: 0, Message: Default response
   */
  def replyTicket(id: String, body: ReplyTicketRequest, content: Option[String])
      (implicit toEntityMarshallerReplyTicketResponseSchema: ToEntityMarshaller[ReplyTicketResponseSchema], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

  def updateTicketInfo200(responseUpdateTicketResponseSchema: UpdateTicketResponseSchema)(implicit toEntityMarshallerUpdateTicketResponseSchema: ToEntityMarshaller[UpdateTicketResponseSchema]): Route =
    complete((200, responseUpdateTicketResponseSchema))
  def updateTicketInfo401(responseinline_response_401: inline_response_401)(implicit toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route =
    complete((401, responseinline_response_401))
  def updateTicketInfo0: Route =
    complete((0, "Default response"))
  /**
   * Code: 200, Message: Response from updating a support ticket., DataType: UpdateTicketResponseSchema
   * Code: 401, Message: Unauthorized, DataType: inline_response_401
   * Code: 0, Message: Default response
   */
  def updateTicketInfo(id: String, body: UpdateTicket, ip: Option[String], ipAddress: Option[String], customerServerAccess: Option[String], rootPassword: Option[String], sudoUsername: Option[String], sudoPassword: Option[String], port: Option[Int])
      (implicit toEntityMarshallerUpdateTicketResponseSchema: ToEntityMarshaller[UpdateTicketResponseSchema], toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]): Route

}

trait TicketsApiMarshaller {
  implicit def fromRequestUnmarshallerTicketNew: FromRequestUnmarshaller[TicketNew]

  implicit def fromRequestUnmarshallerUpdateTicket: FromRequestUnmarshaller[UpdateTicket]

  implicit def fromRequestUnmarshallerReplyTicketRequest: FromRequestUnmarshaller[ReplyTicketRequest]


  implicit def toEntityMarshallerTicketNewResponse: ToEntityMarshaller[TicketNewResponse]

  implicit def toEntityMarshallerTicketNewResponse: ToEntityMarshaller[TicketNewResponse]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerCloseTicketResponseSchema: ToEntityMarshaller[CloseTicketResponseSchema]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerViewTicketResponse: ToEntityMarshaller[ViewTicketResponse]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerViewTicketResponse: ToEntityMarshaller[ViewTicketResponse]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerTickets: ToEntityMarshaller[Tickets]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerViewTicketResponse: ToEntityMarshaller[ViewTicketResponse]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerTickets: ToEntityMarshaller[Tickets]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerViewTicketResponse: ToEntityMarshaller[ViewTicketResponse]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerReplyTicketResponseSchema: ToEntityMarshaller[ReplyTicketResponseSchema]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

  implicit def toEntityMarshallerUpdateTicketResponseSchema: ToEntityMarshaller[UpdateTicketResponseSchema]

  implicit def toEntityMarshallerinline_response_401: ToEntityMarshaller[inline_response_401]

}

