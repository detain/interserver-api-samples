package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DeleteFilter200Response._

case class DeleteFilter200Response (
  success: Option[Boolean],
text: Option[String])

object DeleteFilter200Response {
  import DateTimeCodecs._

  implicit val DeleteFilter200ResponseCodecJson: CodecJson[DeleteFilter200Response] = CodecJson.derive[DeleteFilter200Response]
  implicit val DeleteFilter200ResponseDecoder: EntityDecoder[DeleteFilter200Response] = jsonOf[DeleteFilter200Response]
  implicit val DeleteFilter200ResponseEncoder: EntityEncoder[DeleteFilter200Response] = jsonEncoderOf[DeleteFilter200Response]
}
