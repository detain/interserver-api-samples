package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import WebsitesOrderJsonServiceOffers._

case class WebsitesOrderJsonServiceOffers (
  /* Array of service offers */
  `1026`: List[WebsitesOrderJsonServiceOffersItem])

object WebsitesOrderJsonServiceOffers {
  import DateTimeCodecs._

  implicit val WebsitesOrderJsonServiceOffersCodecJson: CodecJson[WebsitesOrderJsonServiceOffers] = CodecJson.derive[WebsitesOrderJsonServiceOffers]
  implicit val WebsitesOrderJsonServiceOffersDecoder: EntityDecoder[WebsitesOrderJsonServiceOffers] = jsonOf[WebsitesOrderJsonServiceOffers]
  implicit val WebsitesOrderJsonServiceOffersEncoder: EntityEncoder[WebsitesOrderJsonServiceOffers] = jsonEncoderOf[WebsitesOrderJsonServiceOffers]
}
