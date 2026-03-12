package io.swagger.server.model


/**
 * Blocklist status information for a mail service.
 *
 * @param id Mail service ID.
 * @param local Local blocklist entries.
 * @param mbtrap MailBaby trap block entries.
 * @param subject Subject-based block entries.
 * @param manual Manually blocked entries.
 */
case class MailDelistResponse (
  id: Option[Int],
  local: Option[List[Object]],
  mbtrap: Option[List[Object]],
  subject: Option[List[Object]],
  manual: Option[List[Object]]
)

