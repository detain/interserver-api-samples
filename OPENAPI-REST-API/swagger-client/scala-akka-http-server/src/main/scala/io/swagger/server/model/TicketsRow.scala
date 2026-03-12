package io.swagger.server.model


/**
 * = TicketsRow =
 *
 * Information about a single ticket.
 *
 * @param title 
 * @param ticketmaskid 
 * @param lastreplier 
 * @param status 
 * @param priority 
 * @param total_replies 
 * @param lastactivity 
 * @param departmenttitle 
 * @param ticketid 
 * @param can_close 
 * @param attachments 
 * @param status_text 
 * @param checked 
 */
case class TicketsRow (
  title: String,
  ticketmaskid: String,
  lastreplier: String,
  status: String,
  priority: String,
  total_replies: Int,
  lastactivity: String,
  departmenttitle: String,
  ticketid: Int,
  can_close: String,
  attachments: ,
  status_text: String,
  checked: Boolean
)

