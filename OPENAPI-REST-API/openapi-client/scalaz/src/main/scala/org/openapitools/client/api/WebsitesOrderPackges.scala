package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import WebsitesOrderPackges._

case class WebsitesOrderPackges (
  `11440`: WebsitesOrderPackagesInfo)

object WebsitesOrderPackges {
  import DateTimeCodecs._

  implicit val WebsitesOrderPackgesCodecJson: CodecJson[WebsitesOrderPackges] = CodecJson.derive[WebsitesOrderPackges]
  implicit val WebsitesOrderPackgesDecoder: EntityDecoder[WebsitesOrderPackges] = jsonOf[WebsitesOrderPackges]
  implicit val WebsitesOrderPackgesEncoder: EntityEncoder[WebsitesOrderPackges] = jsonEncoderOf[WebsitesOrderPackges]
}
