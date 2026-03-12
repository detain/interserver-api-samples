package io.swagger.server.model


/**
 * = Root Type for MailStatsType =
 *
 * Statistics about the mail usage including volume by IP, To address, and From address; as well as total sent / delivered counts and cost.
 *
 * @param time 
 * @param usage 
 * @param currency 
 * @param currencySymbol 
 * @param cost 
 * @param received 
 * @param sent 
 * @param volume 
 */
case class MailStatsType (
  time: Option[String],
  usage: Option[Int],
  currency: Option[String],
  currencySymbol: Option[String],
  cost: Option[Double],
  received: Option[Int],
  sent: Option[Int],
  volume: Option[MailStatsType_volume]
)

