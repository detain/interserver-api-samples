package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import WebsiteBackupsInner._

case class WebsiteBackupsInner (
  name: String,
size: Option[Integer])

object WebsiteBackupsInner {
  import DateTimeCodecs._

  implicit val WebsiteBackupsInnerCodecJson: CodecJson[WebsiteBackupsInner] = CodecJson.derive[WebsiteBackupsInner]
  implicit val WebsiteBackupsInnerDecoder: EntityDecoder[WebsiteBackupsInner] = jsonOf[WebsiteBackupsInner]
  implicit val WebsiteBackupsInnerEncoder: EntityEncoder[WebsiteBackupsInner] = jsonEncoderOf[WebsiteBackupsInner]
}
