package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import CancelBackup200Response._

case class CancelBackup200Response (
  success: Boolean,
text: String)

object CancelBackup200Response {
  import DateTimeCodecs._

  implicit val CancelBackup200ResponseCodecJson: CodecJson[CancelBackup200Response] = CodecJson.derive[CancelBackup200Response]
  implicit val CancelBackup200ResponseDecoder: EntityDecoder[CancelBackup200Response] = jsonOf[CancelBackup200Response]
  implicit val CancelBackup200ResponseEncoder: EntityEncoder[CancelBackup200Response] = jsonEncoderOf[CancelBackup200Response]
}
