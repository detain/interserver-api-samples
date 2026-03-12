package io.swagger.server.model


/**
 * = Post reply =
 *
 * Post reply to your ticket
 *
 * @param content 
 */
case class ReplyTicketRequest (
  content: Option[String]
)

