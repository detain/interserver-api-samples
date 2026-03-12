package io.swagger.server.model


/**
 * @param client@domain.com 
 * @param user@site.net 
 * @param sales@company.com 
 * @param client@anothersite.com 
 */
case class MailStatsType_volume_to (
  client@domain.com: Option[Int],
  user@site.net: Option[Int],
  sales@company.com: Option[Int],
  client@anothersite.com: Option[Int]
)

