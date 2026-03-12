package io.swagger.server.model


/**
 * A single registered nameserver entry with glue IPs.
 *
 * @param sortorder 
 * @param name 
 * @param ipaddress 
 */
case class DomainNameServer (
  sortorder: Option[String],
  name: Option[String],
  ipaddress: Option[String]
)

