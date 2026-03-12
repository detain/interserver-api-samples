package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import scala.collection.mutable.ListBuffer

import VpsBackupRows._

case class VpsBackupRows (
  
object VpsBackupRows {
  import DateTimeCodecs._

  implicit val VpsBackupRowsCodecJson: CodecJson[VpsBackupRows] = CodecJson.derive[VpsBackupRows]
  implicit val VpsBackupRowsDecoder: EntityDecoder[VpsBackupRows] = jsonOf[VpsBackupRows]
  implicit val VpsBackupRowsEncoder: EntityEncoder[VpsBackupRows] = jsonEncoderOf[VpsBackupRows]
}
