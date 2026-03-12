package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailClientLink._

case class MailClientLink (
  /* The label of the client link. */
  label: Option[String],
/* The link URL of the client link. */
  link: Option[String],
/* The icon class of the client link. */
  icon: Option[String],
/* The text for the icon of the client link. */
  icon_text: Option[String],
/* Help text for the client link. */
  help_text: Option[String],
/* Additional attributes for the client link. */
  other_attr: Option[String])

object MailClientLink {
  import DateTimeCodecs._

  implicit val MailClientLinkCodecJson: CodecJson[MailClientLink] = CodecJson.derive[MailClientLink]
  implicit val MailClientLinkDecoder: EntityDecoder[MailClientLink] = jsonOf[MailClientLink]
  implicit val MailClientLinkEncoder: EntityEncoder[MailClientLink] = jsonEncoderOf[MailClientLink]
}
