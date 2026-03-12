package io.swagger.server.model


/**
 * = MailOrder =
 *
 * A mail order record
 *
 * @param id The ID of the order. for example: ''21472''
 * @param status The order status. for example: ''active''
 * @param username The username to use for this order. for example: ''mb21472''
 * @param comment Optional order comment.
 */
case class MailOrder (
  id: Int,
  status: String,
  username: String,
  comment: Option[String]
)

