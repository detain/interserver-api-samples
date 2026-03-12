package io.swagger.server.model


/**
 * @param to 
 * @param from 
 * @param ip 
 */
case class MailStatsType_volume (
  to: Option[MailStatsType_volume_to],
  from: Option[MailStatsType_volume_from],
  ip: Option[MailStatsType_volume_ip]
)

