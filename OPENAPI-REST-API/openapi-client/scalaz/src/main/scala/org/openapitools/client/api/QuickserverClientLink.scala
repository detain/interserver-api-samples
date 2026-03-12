package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import QuickserverClientLink._

case class QuickserverClientLink (
  /* Link label */
  label: Option[String],
/* Link */
  link: Option[String],
/* Icon class */
  icon: Option[String],
/* Icon text */
  icon_text: Option[String],
/* Help text */
  help_text: Option[String],
/* Other attribute */
  other_attr: Option[String])

object QuickserverClientLink {
  import DateTimeCodecs._

  implicit val QuickserverClientLinkCodecJson: CodecJson[QuickserverClientLink] = CodecJson.derive[QuickserverClientLink]
  implicit val QuickserverClientLinkDecoder: EntityDecoder[QuickserverClientLink] = jsonOf[QuickserverClientLink]
  implicit val QuickserverClientLinkEncoder: EntityEncoder[QuickserverClientLink] = jsonEncoderOf[QuickserverClientLink]
}
