package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BackupIPInfoRow._

case class BackupIPInfoRow (
  /* Description of the IP information. */
  desc: Option[String],
/* Value of the IP information. */
  value: Option[String])

object BackupIPInfoRow {
  import DateTimeCodecs._

  implicit val BackupIPInfoRowCodecJson: CodecJson[BackupIPInfoRow] = CodecJson.derive[BackupIPInfoRow]
  implicit val BackupIPInfoRowDecoder: EntityDecoder[BackupIPInfoRow] = jsonOf[BackupIPInfoRow]
  implicit val BackupIPInfoRowEncoder: EntityEncoder[BackupIPInfoRow] = jsonEncoderOf[BackupIPInfoRow]
}
