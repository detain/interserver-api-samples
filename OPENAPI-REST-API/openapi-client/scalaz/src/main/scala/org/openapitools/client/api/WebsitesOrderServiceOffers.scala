package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import WebsitesOrderServiceOffers._

case class WebsitesOrderServiceOffers (
  `1026`: List[WebsitesOrderServiceOffer])

object WebsitesOrderServiceOffers {
  import DateTimeCodecs._

  implicit val WebsitesOrderServiceOffersCodecJson: CodecJson[WebsitesOrderServiceOffers] = CodecJson.derive[WebsitesOrderServiceOffers]
  implicit val WebsitesOrderServiceOffersDecoder: EntityDecoder[WebsitesOrderServiceOffers] = jsonOf[WebsitesOrderServiceOffers]
  implicit val WebsitesOrderServiceOffersEncoder: EntityEncoder[WebsitesOrderServiceOffers] = jsonEncoderOf[WebsitesOrderServiceOffers]
}
