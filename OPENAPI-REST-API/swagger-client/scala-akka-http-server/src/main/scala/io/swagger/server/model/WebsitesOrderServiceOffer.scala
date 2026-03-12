package io.swagger.server.model


/**
 * @param service_offer_id The ID of the service offer. for example: ''136''
 * @param service_id The ID of the associated service. for example: ''1026''
 * @param intro_cost The introductory cost of the service offer. for example: ''96.00''
 * @param renewal_cost The renewal cost of the service offer. for example: ''96.00''
 * @param intro_frequency The introductory frequency of the service offer. for example: ''12''
 * @param renewal_frequency The renewal frequency of the service offer. for example: ''12''
 * @param allow_coupon Indicates if coupons are allowed (1 for yes, 0 for no). for example: ''1''
 * @param service_module The module of the service offer. for example: ''webhosting''
 * @param created_at The creation timestamp of the service offer. for example: ''2023-01-25T14:50:55.000Z''
 * @param updated_at The update timestamp of the service offer.
 * @param deleted_at The deletion timestamp of the service offer.
 */
case class WebsitesOrderServiceOffer (
  service_offer_id: String,
  service_id: String,
  intro_cost: String,
  renewal_cost: String,
  intro_frequency: String,
  renewal_frequency: String,
  allow_coupon: String,
  service_module: String,
  created_at: String,
  updated_at: Option[String],
  deleted_at: Option[String]
)

