package io.swagger.server.model


/**
 * = AffiliateTrafficRow =
 *
 * Affiliate Web Traffic Entry
 *
 * @param traffic_id 
 * @param traffic_ip 
 * @param traffic_url 
 * @param traffic_affiliate 
 * @param traffic_referrer 
 * @param traffic_timestamp 
 */
case class AffiliateTrafficRow (
  traffic_id: Option[String],
  traffic_ip: Option[String],
  traffic_url: Option[String],
  traffic_affiliate: Option[String],
  traffic_referrer: Option[String],
  traffic_timestamp: Option[String]
)

