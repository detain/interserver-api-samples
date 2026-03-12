package io.swagger.server.model


/**
 * = DnsRecord =
 *
 * A single DNS Record row for a Domain
 *
 * @param id The ID of the DNS Record. for example: ''472''
 * @param domain_id The ID of the Domain this is a record of. for example: ''68''
 * @param name  for example: ''hussfamily.com''
 * @param `type` 
 * @param content The content of the record, such as the IP address or hsotname. for example: ''cdns1.interserver.net''
 * @param ttl Time To Live (seconds) for example: ''86400''
 * @param prio Priority for example: ''0''
 * @param disabled  for example: ''0''
 * @param ordername Alternate name to use for sorting
 * @param auth  for example: ''1''
 */
case class DnsRecord (
  id: String,
  domain_id: String,
  name: String,
  `type`: DnsRecordType,
  content: String,
  ttl: String,
  prio: String,
  disabled: String,
  ordername: String,
  auth: String
)

