package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsBackupRow._

case class VpsBackupRow (
  /* Backup Type */
  `type`: String,
/* The service id such as vps  id. */
  service: Integer,
/* The name of the backup. */
  name: String,
/* Size of the file in bytes */
  size: Integer,
/* The creation date of the backup in a unix timestamp. */
  date: Integer)

object VpsBackupRow {
  import DateTimeCodecs._

  implicit val VpsBackupRowCodecJson: CodecJson[VpsBackupRow] = CodecJson.derive[VpsBackupRow]
  implicit val VpsBackupRowDecoder: EntityDecoder[VpsBackupRow] = jsonOf[VpsBackupRow]
  implicit val VpsBackupRowEncoder: EntityEncoder[VpsBackupRow] = jsonEncoderOf[VpsBackupRow]
}
