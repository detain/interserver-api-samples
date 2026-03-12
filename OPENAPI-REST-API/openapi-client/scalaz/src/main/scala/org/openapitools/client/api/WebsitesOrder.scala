package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import WebsitesOrder._

case class WebsitesOrder (
  /* Step description */
  step: String,
/* Website description */
  website: String,
/* Period description */
  period: Integer,
/* Service offer ID description */
  serviceOfferId: Integer,
packages: WebsitesOrderPackages,
/* Enable domain registering description */
  enableDomainRegistering: Boolean,
jsonServices: WebsitesOrderJsonServices,
jsonServiceOffers: WebsitesOrderJsonServiceOffers,
serviceTypes: WebsitesOrderServiceTypes,
serviceOffers: WebsitesOrderServiceOffers,
packges: Option[WebsitesOrderPackges])

object WebsitesOrder {
  import DateTimeCodecs._

  implicit val WebsitesOrderCodecJson: CodecJson[WebsitesOrder] = CodecJson.derive[WebsitesOrder]
  implicit val WebsitesOrderDecoder: EntityDecoder[WebsitesOrder] = jsonOf[WebsitesOrder]
  implicit val WebsitesOrderEncoder: EntityEncoder[WebsitesOrder] = jsonEncoderOf[WebsitesOrder]
}
