package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BackupServiceInfo._

case class BackupServiceInfo (
  /* Backup ID. */
  backup_id: Option[String],
/* Backup server ID. */
  backup_server: Option[String],
/* Backup username. */
  backup_username: Option[String],
/* Backup type. */
  backup_type: Option[String],
/* Backup currency. */
  backup_currency: Option[String],
/* Backup order date. */
  backup_order_date: Option[String],
/* Backup customer ID. */
  backup_custid: Option[String],
/* Backup quota. */
  backup_quota: Option[String],
/* Backup IP address. */
  backup_ip: Option[String],
/* Backup status. */
  backup_status: Option[String],
/* Backup invoice. */
  backup_invoice: Option[String],
/* Backup coupon. */
  backup_coupon: Option[String],
/* Backup extra information. */
  backup_extra: Option[String],
/* Backup server status. */
  backup_server_status: Option[String],
/* Backup comment. */
  backup_comment: Option[String])

object BackupServiceInfo {
  import DateTimeCodecs._

  implicit val BackupServiceInfoCodecJson: CodecJson[BackupServiceInfo] = CodecJson.derive[BackupServiceInfo]
  implicit val BackupServiceInfoDecoder: EntityDecoder[BackupServiceInfo] = jsonOf[BackupServiceInfo]
  implicit val BackupServiceInfoEncoder: EntityEncoder[BackupServiceInfo] = jsonEncoderOf[BackupServiceInfo]
}
