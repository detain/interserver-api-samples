package io.swagger.server.model


/**
 * @param service_offer_id Service offer ID for example: ''136''
 * @param service_id Service ID for example: ''1026''
 * @param intro_cost Introductory cost for example: ''96''
 * @param renewal_cost Renewal cost for example: ''96''
 * @param intro_frequency Introductory frequency for example: ''12''
 * @param renewal_frequency Renewal frequency for example: ''12''
 * @param allow_coupon Allow coupon for example: ''1''
 * @param service_module Service module for example: ''webhosting''
 * @param created_at Creation date for example: ''2023-01-25T14:50:55.000Z''
 * @param updated_at Update date
 * @param deleted_at Deletion date
 * @param currencySymbol Currency symbol for example: ''$''
 */
case class WebsitesOrderJsonServiceOffersItem (
  service_offer_id: Option[String],
  service_id: Option[String],
  intro_cost: Option[Int],
  renewal_cost: Option[Int],
  intro_frequency: Option[String],
  renewal_frequency: Option[String],
  allow_coupon: Option[String],
  service_module: Option[String],
  created_at: Option[String],
  updated_at: Option[String],
  deleted_at: Option[String],
  currencySymbol: Option[String]
)

