package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BackupExtraInfoTables._

case class BackupExtraInfoTables (
  ip_info: Option[BackupIPInfo])

object BackupExtraInfoTables {
  import DateTimeCodecs._

  implicit val BackupExtraInfoTablesCodecJson: CodecJson[BackupExtraInfoTables] = CodecJson.derive[BackupExtraInfoTables]
  implicit val BackupExtraInfoTablesDecoder: EntityDecoder[BackupExtraInfoTables] = jsonOf[BackupExtraInfoTables]
  implicit val BackupExtraInfoTablesEncoder: EntityEncoder[BackupExtraInfoTables] = jsonEncoderOf[BackupExtraInfoTables]
}
