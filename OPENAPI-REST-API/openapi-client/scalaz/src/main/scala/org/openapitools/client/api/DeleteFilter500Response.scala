package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DeleteFilter500Response._

case class DeleteFilter500Response (
  success: Option[Boolean],
text: Option[String])

object DeleteFilter500Response {
  import DateTimeCodecs._

  implicit val DeleteFilter500ResponseCodecJson: CodecJson[DeleteFilter500Response] = CodecJson.derive[DeleteFilter500Response]
  implicit val DeleteFilter500ResponseDecoder: EntityDecoder[DeleteFilter500Response] = jsonOf[DeleteFilter500Response]
  implicit val DeleteFilter500ResponseEncoder: EntityEncoder[DeleteFilter500Response] = jsonEncoderOf[DeleteFilter500Response]
}
