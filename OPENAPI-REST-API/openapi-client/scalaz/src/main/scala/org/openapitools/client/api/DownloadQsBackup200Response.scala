package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DownloadQsBackup200Response._

case class DownloadQsBackup200Response (
  text: Option[String],
/* A pre-signed download URL valid for 24 hours. */
  url: Option[String])

object DownloadQsBackup200Response {
  import DateTimeCodecs._

  implicit val DownloadQsBackup200ResponseCodecJson: CodecJson[DownloadQsBackup200Response] = CodecJson.derive[DownloadQsBackup200Response]
  implicit val DownloadQsBackup200ResponseDecoder: EntityDecoder[DownloadQsBackup200Response] = jsonOf[DownloadQsBackup200Response]
  implicit val DownloadQsBackup200ResponseEncoder: EntityEncoder[DownloadQsBackup200Response] = jsonEncoderOf[DownloadQsBackup200Response]
}
