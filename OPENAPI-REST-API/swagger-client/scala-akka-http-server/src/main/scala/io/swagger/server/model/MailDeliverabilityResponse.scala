package io.swagger.server.model

import java.math.BigDecimal

/**
 * Deliverability statistics for a mail service.
 *
 * @param stat Delivered and bounced counts.
 * @param percent Bounce percentage.
 * @param table_data Detailed deliverability breakdown by sender or domain.
 */
case class MailDeliverabilityResponse (
  stat: Option[Object],
  percent: Option[BigDecimal],
  table_data: Option[List[List[String]]]
)

