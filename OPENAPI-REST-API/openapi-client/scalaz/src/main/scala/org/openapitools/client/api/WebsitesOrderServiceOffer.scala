package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import WebsitesOrderServiceOffer._

case class WebsitesOrderServiceOffer (
  /* The ID of the service offer. */
  service_offer_id: String,
/* The ID of the associated service. */
  service_id: String,
/* The introductory cost of the service offer. */
  intro_cost: String,
/* The renewal cost of the service offer. */
  renewal_cost: String,
/* The introductory frequency of the service offer. */
  intro_frequency: String,
/* The renewal frequency of the service offer. */
  renewal_frequency: String,
/* Indicates if coupons are allowed (1 for yes, 0 for no). */
  allow_coupon: String,
/* The module of the service offer. */
  service_module: String,
/* The creation timestamp of the service offer. */
  created_at: String,
/* The update timestamp of the service offer. */
  updated_at: Option[String],
/* The deletion timestamp of the service offer. */
  deleted_at: Option[String])

object WebsitesOrderServiceOffer {
  import DateTimeCodecs._

  implicit val WebsitesOrderServiceOfferCodecJson: CodecJson[WebsitesOrderServiceOffer] = CodecJson.derive[WebsitesOrderServiceOffer]
  implicit val WebsitesOrderServiceOfferDecoder: EntityDecoder[WebsitesOrderServiceOffer] = jsonOf[WebsitesOrderServiceOffer]
  implicit val WebsitesOrderServiceOfferEncoder: EntityEncoder[WebsitesOrderServiceOffer] = jsonEncoderOf[WebsitesOrderServiceOffer]
}
