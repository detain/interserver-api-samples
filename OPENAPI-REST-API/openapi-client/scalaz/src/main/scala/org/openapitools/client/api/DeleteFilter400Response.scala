package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DeleteFilter400Response._

case class DeleteFilter400Response (
  success: Option[Boolean],
text: Option[String])

object DeleteFilter400Response {
  import DateTimeCodecs._

  implicit val DeleteFilter400ResponseCodecJson: CodecJson[DeleteFilter400Response] = CodecJson.derive[DeleteFilter400Response]
  implicit val DeleteFilter400ResponseDecoder: EntityDecoder[DeleteFilter400Response] = jsonOf[DeleteFilter400Response]
  implicit val DeleteFilter400ResponseEncoder: EntityEncoder[DeleteFilter400Response] = jsonEncoderOf[DeleteFilter400Response]
}
