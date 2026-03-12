package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BackupClientLink._

case class BackupClientLink (
  /* Label of the client link. */
  label: Option[String],
/* Link URL of the client link. */
  link: Option[String],
/* Icon of the client link. */
  icon: Option[String],
/* Icon text of the client link. */
  icon_text: Option[String],
/* Help text of the client link. */
  help_text: Option[String],
/* Other attributes of the client link. */
  other_attr: Option[String])

object BackupClientLink {
  import DateTimeCodecs._

  implicit val BackupClientLinkCodecJson: CodecJson[BackupClientLink] = CodecJson.derive[BackupClientLink]
  implicit val BackupClientLinkDecoder: EntityDecoder[BackupClientLink] = jsonOf[BackupClientLink]
  implicit val BackupClientLinkEncoder: EntityEncoder[BackupClientLink] = jsonEncoderOf[BackupClientLink]
}
