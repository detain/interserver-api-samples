package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import WebsitesOrderJsonServices._

case class WebsitesOrderJsonServices (
  /* JSON services description */
  `11447`: String)

object WebsitesOrderJsonServices {
  import DateTimeCodecs._

  implicit val WebsitesOrderJsonServicesCodecJson: CodecJson[WebsitesOrderJsonServices] = CodecJson.derive[WebsitesOrderJsonServices]
  implicit val WebsitesOrderJsonServicesDecoder: EntityDecoder[WebsitesOrderJsonServices] = jsonOf[WebsitesOrderJsonServices]
  implicit val WebsitesOrderJsonServicesEncoder: EntityEncoder[WebsitesOrderJsonServices] = jsonEncoderOf[WebsitesOrderJsonServices]
}
