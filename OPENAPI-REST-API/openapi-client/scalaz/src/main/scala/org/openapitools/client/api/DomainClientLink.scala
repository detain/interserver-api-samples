package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainClientLink._

case class DomainClientLink (
  label: Option[String],
link: Option[String],
icon: Option[String],
icon_text: Option[String],
help_text: Option[String])

object DomainClientLink {
  import DateTimeCodecs._

  implicit val DomainClientLinkCodecJson: CodecJson[DomainClientLink] = CodecJson.derive[DomainClientLink]
  implicit val DomainClientLinkDecoder: EntityDecoder[DomainClientLink] = jsonOf[DomainClientLink]
  implicit val DomainClientLinkEncoder: EntityEncoder[DomainClientLink] = jsonEncoderOf[DomainClientLink]
}
