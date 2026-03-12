package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerClientLink._

case class ServerClientLink (
  label: String,
link: String,
icon: Option[String],
icon_text: Option[String],
help_text: Option[String])

object ServerClientLink {
  import DateTimeCodecs._

  implicit val ServerClientLinkCodecJson: CodecJson[ServerClientLink] = CodecJson.derive[ServerClientLink]
  implicit val ServerClientLinkDecoder: EntityDecoder[ServerClientLink] = jsonOf[ServerClientLink]
  implicit val ServerClientLinkEncoder: EntityEncoder[ServerClientLink] = jsonEncoderOf[ServerClientLink]
}
