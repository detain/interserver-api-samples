package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import LicenseClientLink._

case class LicenseClientLink (
  /* Link label */
  label: String,
/* Link URL */
  link: String,
/* Link icon */
  icon: String,
/* Help text */
  help_text: String,
/* Icon text */
  icon_text: Option[String],
/* Other attributes */
  other_attr: Option[String])

object LicenseClientLink {
  import DateTimeCodecs._

  implicit val LicenseClientLinkCodecJson: CodecJson[LicenseClientLink] = CodecJson.derive[LicenseClientLink]
  implicit val LicenseClientLinkDecoder: EntityDecoder[LicenseClientLink] = jsonOf[LicenseClientLink]
  implicit val LicenseClientLinkEncoder: EntityEncoder[LicenseClientLink] = jsonEncoderOf[LicenseClientLink]
}
