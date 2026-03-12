package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BackupRow._

case class BackupRow (
  /* The id of the backup. */
  backup_id: Option[String],
/* The name of the backup. */
  backup_name: Option[String],
/* The cost of the backup. */
  backup_cost: Option[String],
/* The username of the backup. */
  backup_username: Option[String],
/* The status of the backup. */
  backup_status: Option[String],
/* The services name of the backup. */
  services_name: Option[String])

object BackupRow {
  import DateTimeCodecs._

  implicit val BackupRowCodecJson: CodecJson[BackupRow] = CodecJson.derive[BackupRow]
  implicit val BackupRowDecoder: EntityDecoder[BackupRow] = jsonOf[BackupRow]
  implicit val BackupRowEncoder: EntityEncoder[BackupRow] = jsonEncoderOf[BackupRow]
}
