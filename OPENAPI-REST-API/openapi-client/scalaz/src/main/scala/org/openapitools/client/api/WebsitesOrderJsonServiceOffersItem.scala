package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import WebsitesOrderJsonServiceOffersItem._

case class WebsitesOrderJsonServiceOffersItem (
  /* Service offer ID */
  service_offer_id: Option[String],
/* Service ID */
  service_id: Option[String],
/* Introductory cost */
  intro_cost: Option[Integer],
/* Renewal cost */
  renewal_cost: Option[Integer],
/* Introductory frequency */
  intro_frequency: Option[String],
/* Renewal frequency */
  renewal_frequency: Option[String],
/* Allow coupon */
  allow_coupon: Option[String],
/* Service module */
  service_module: Option[String],
/* Creation date */
  created_at: Option[String],
/* Update date */
  updated_at: Option[String],
/* Deletion date */
  deleted_at: Option[String],
/* Currency symbol */
  currencySymbol: Option[String])

object WebsitesOrderJsonServiceOffersItem {
  import DateTimeCodecs._

  implicit val WebsitesOrderJsonServiceOffersItemCodecJson: CodecJson[WebsitesOrderJsonServiceOffersItem] = CodecJson.derive[WebsitesOrderJsonServiceOffersItem]
  implicit val WebsitesOrderJsonServiceOffersItemDecoder: EntityDecoder[WebsitesOrderJsonServiceOffersItem] = jsonOf[WebsitesOrderJsonServiceOffersItem]
  implicit val WebsitesOrderJsonServiceOffersItemEncoder: EntityEncoder[WebsitesOrderJsonServiceOffersItem] = jsonEncoderOf[WebsitesOrderJsonServiceOffersItem]
}
