package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import WebsiteClientLink._

case class WebsiteClientLink (
  /* Label for the link */
  label: Option[String],
/* Link URL */
  link: Option[String],
/* Icon for the link */
  icon: Option[String],
/* Icon text for the link */
  icon_text: Option[String],
/* Help text for the link */
  help_text: Option[String],
/* Other attributes for the link */
  other_attr: Option[String])

object WebsiteClientLink {
  import DateTimeCodecs._

  implicit val WebsiteClientLinkCodecJson: CodecJson[WebsiteClientLink] = CodecJson.derive[WebsiteClientLink]
  implicit val WebsiteClientLinkDecoder: EntityDecoder[WebsiteClientLink] = jsonOf[WebsiteClientLink]
  implicit val WebsiteClientLinkEncoder: EntityEncoder[WebsiteClientLink] = jsonEncoderOf[WebsiteClientLink]
}
