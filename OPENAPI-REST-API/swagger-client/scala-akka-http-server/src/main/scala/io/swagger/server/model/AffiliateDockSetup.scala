package io.swagger.server.model


/**
 * = Root Type for AffiliateDockSetup =
 *
 * Affiliate Landing Page information.
 *
 * @param affiliate_dock_title 
 * @param affiliate_dock_description 
 * @param referrer_coupon 
 */
case class AffiliateDockSetup (
  affiliate_dock_title: Option[String],
  affiliate_dock_description: Option[String],
  referrer_coupon: Option[String]
)

