package io.swagger.server.model


/**
 * = Post Reply to your ticket =
 *
 * @param success 
 * @param post_id 
 */
case class ReplyTicketResponseSchema (
  success: Option[Boolean],
  post_id: Option[Int]
)

