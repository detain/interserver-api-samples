package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsClientLink._

case class VpsClientLink (
  /* Display label for the link. */
  label: Option[String],
/* URL or route for the action. */
  link: Option[String],
/* Icon class for the link. */
  icon: Option[String],
/* Icon text label. */
  icon_text: Option[String],
/* Help tooltip text for the link. */
  help_text: Option[String])

object VpsClientLink {
  import DateTimeCodecs._

  implicit val VpsClientLinkCodecJson: CodecJson[VpsClientLink] = CodecJson.derive[VpsClientLink]
  implicit val VpsClientLinkDecoder: EntityDecoder[VpsClientLink] = jsonOf[VpsClientLink]
  implicit val VpsClientLinkEncoder: EntityEncoder[VpsClientLink] = jsonEncoderOf[VpsClientLink]
}
