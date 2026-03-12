package io.swagger.server.model


/**
 * = Root Type for DnsNewRecord =
 *
 * Request data for a new DNS record.
 *
 * @param name Name part of record for example: ''myfamily.com''
 * @param `type` 
 * @param content Content of record for example: ''127.0.0.1''
 * @param ttl Time-to-live for example: ''86400''
 * @param prio Priority for example: ''0''
 */
case class DnsNewRecord (
  name: String,
  `type`: DnsRecordType,
  content: String,
  ttl: Option[Int],
  prio: Option[Int]
)

