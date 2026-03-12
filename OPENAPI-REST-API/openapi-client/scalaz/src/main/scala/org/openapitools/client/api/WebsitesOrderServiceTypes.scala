package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import WebsitesOrderServiceTypes._

case class WebsitesOrderServiceTypes (
  `11447`: WebsitesOrderServiceTypes)

object WebsitesOrderServiceTypes {
  import DateTimeCodecs._

  implicit val WebsitesOrderServiceTypesCodecJson: CodecJson[WebsitesOrderServiceTypes] = CodecJson.derive[WebsitesOrderServiceTypes]
  implicit val WebsitesOrderServiceTypesDecoder: EntityDecoder[WebsitesOrderServiceTypes] = jsonOf[WebsitesOrderServiceTypes]
  implicit val WebsitesOrderServiceTypesEncoder: EntityEncoder[WebsitesOrderServiceTypes] = jsonEncoderOf[WebsitesOrderServiceTypes]
}
