package io.swagger.server.model


/**
 * = MailBlocks =
 *
 * The listing of blocked emails.
 *
 * @param local 
 * @param mbtrap 
 * @param subject 
 */
case class MailBlocks (
  local: List[MailBlockClickHouse],
  mbtrap: List[MailBlockClickHouse],
  subject: List[MailBlockRspamd]
)

