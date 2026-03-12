package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DownloadQsBackupRequest._

case class DownloadQsBackupRequest (
  /* The backup filename to download. */
  file: String)

object DownloadQsBackupRequest {
  import DateTimeCodecs._

  implicit val DownloadQsBackupRequestCodecJson: CodecJson[DownloadQsBackupRequest] = CodecJson.derive[DownloadQsBackupRequest]
  implicit val DownloadQsBackupRequestDecoder: EntityDecoder[DownloadQsBackupRequest] = jsonOf[DownloadQsBackupRequest]
  implicit val DownloadQsBackupRequestEncoder: EntityEncoder[DownloadQsBackupRequest] = jsonEncoderOf[DownloadQsBackupRequest]
}
