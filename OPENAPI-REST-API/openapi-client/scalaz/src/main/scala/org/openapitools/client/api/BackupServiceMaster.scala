package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BackupServiceMaster._

case class BackupServiceMaster (
  /* Backup ID of the service master. */
  backup_id: Option[Integer],
/* Name of the backup service. */
  backup_name: Option[String],
/* IP address of the backup service. */
  backup_ip: Option[String],
/* Type of the backup service. */
  backup_type: Option[Integer],
/* Size of the backup service's hard drive. */
  backup_hdsize: Option[Integer],
/* Amount of free space on the backup service's hard drive. */
  backup_hdfree: Option[Integer],
/* Last update timestamp of the backup service. */
  backup_last_update: Option[String],
/* Availability status of the backup service. */
  backup_available: Option[Integer],
/* I/O wait status of the backup service. */
  backup_iowait: Option[Integer],
/* Order associated with the backup service. */
  backup_order: Option[Integer])

object BackupServiceMaster {
  import DateTimeCodecs._

  implicit val BackupServiceMasterCodecJson: CodecJson[BackupServiceMaster] = CodecJson.derive[BackupServiceMaster]
  implicit val BackupServiceMasterDecoder: EntityDecoder[BackupServiceMaster] = jsonOf[BackupServiceMaster]
  implicit val BackupServiceMasterEncoder: EntityEncoder[BackupServiceMaster] = jsonEncoderOf[BackupServiceMaster]
}
