package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import GenericResponse._

case class GenericResponse (
  status: String,
text: String)

object GenericResponse {
  import DateTimeCodecs._

  implicit val GenericResponseCodecJson: CodecJson[GenericResponse] = CodecJson.derive[GenericResponse]
  implicit val GenericResponseDecoder: EntityDecoder[GenericResponse] = jsonOf[GenericResponse]
  implicit val GenericResponseEncoder: EntityEncoder[GenericResponse] = jsonEncoderOf[GenericResponse]
}
