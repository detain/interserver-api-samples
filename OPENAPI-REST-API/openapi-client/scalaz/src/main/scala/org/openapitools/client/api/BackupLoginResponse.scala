package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BackupLoginResponse._

case class BackupLoginResponse (
  /* Indicates whether a login session was created. */
  success: Option[Boolean],
/* Login URL or error text returned by the storage provider. */
  text: Option[String])

object BackupLoginResponse {
  import DateTimeCodecs._

  implicit val BackupLoginResponseCodecJson: CodecJson[BackupLoginResponse] = CodecJson.derive[BackupLoginResponse]
  implicit val BackupLoginResponseDecoder: EntityDecoder[BackupLoginResponse] = jsonOf[BackupLoginResponse]
  implicit val BackupLoginResponseEncoder: EntityEncoder[BackupLoginResponse] = jsonEncoderOf[BackupLoginResponse]
}
