package io.swagger.server.model


/**
 * Payload for removing a sender from mail blocklists.
 *
 * @param unblock Email address to delist.
 */
case class MailDelistRequest (
  unblock: Option[String]
)

