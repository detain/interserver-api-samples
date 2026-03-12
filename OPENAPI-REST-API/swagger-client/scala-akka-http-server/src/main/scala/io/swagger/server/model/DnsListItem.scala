package io.swagger.server.model


/**
 * = DnsListItem =
 *
 * A DNS zone entry with its ID, domain name, and record content.
 *
 * @param id 
 * @param name 
 * @param content 
 */
case class DnsListItem (
  id: Option[Int],
  name: Option[String],
  content: Option[String]
)

