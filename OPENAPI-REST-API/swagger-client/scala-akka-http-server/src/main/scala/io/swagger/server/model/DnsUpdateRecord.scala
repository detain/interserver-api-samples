package io.swagger.server.model


/**
 * = DnsUpdateRecord =
 *
 * The request data to update a dns record.
 *
 * @param name 
 * @param `type` 
 * @param content 
 * @param ttl 
 * @param prio 
 * @param disabled 
 * @param ordername 
 * @param auth 
 */
case class DnsUpdateRecord (
  name: Option[String],
  `type`: Option[DnsRecordType],
  content: Option[String],
  ttl: Option[String],
  prio: Option[String],
  disabled: Option[String],
  ordername: Option[String],
  auth: Option[String]
)

