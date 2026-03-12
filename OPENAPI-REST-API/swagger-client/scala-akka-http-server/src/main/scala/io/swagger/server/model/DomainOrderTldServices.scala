package io.swagger.server.model


/**
 * Example map of TLDs to service IDs for domain ordering.
 *
 * @param .asia Service ID for .asia TLD for example: ''10001''
 * @param .be Service ID for .be TLD for example: ''10002''
 * @param .biz Service ID for .biz TLD for example: ''10003''
 * @param .ca Service ID for .ca TLD for example: ''10004''
 */
case class DomainOrderTldServices (
  .asia: Option[Int],
  .be: Option[Int],
  .biz: Option[Int],
  .ca: Option[Int]
)

