package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import RestoreRequest._

case class RestoreRequest (
  backup: Option[String],
password: Option[String])

object RestoreRequest {
  import DateTimeCodecs._

  implicit val RestoreRequestCodecJson: CodecJson[RestoreRequest] = CodecJson.derive[RestoreRequest]
  implicit val RestoreRequestDecoder: EntityDecoder[RestoreRequest] = jsonOf[RestoreRequest]
  implicit val RestoreRequestEncoder: EntityEncoder[RestoreRequest] = jsonEncoderOf[RestoreRequest]
}
