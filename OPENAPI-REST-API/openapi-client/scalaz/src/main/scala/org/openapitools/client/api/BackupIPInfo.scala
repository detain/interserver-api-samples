package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BackupIPInfo._

case class BackupIPInfo (
  /* Title of the IP information table. */
  title: Option[String],
rows: Option[List[BackupIPInfoRow]])

object BackupIPInfo {
  import DateTimeCodecs._

  implicit val BackupIPInfoCodecJson: CodecJson[BackupIPInfo] = CodecJson.derive[BackupIPInfo]
  implicit val BackupIPInfoDecoder: EntityDecoder[BackupIPInfo] = jsonOf[BackupIPInfo]
  implicit val BackupIPInfoEncoder: EntityEncoder[BackupIPInfo] = jsonEncoderOf[BackupIPInfo]
}
