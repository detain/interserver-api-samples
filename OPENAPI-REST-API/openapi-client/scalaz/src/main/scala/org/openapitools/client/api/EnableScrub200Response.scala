package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import EnableScrub200Response._

case class EnableScrub200Response (
  success: Boolean,
text: String)

object EnableScrub200Response {
  import DateTimeCodecs._

  implicit val EnableScrub200ResponseCodecJson: CodecJson[EnableScrub200Response] = CodecJson.derive[EnableScrub200Response]
  implicit val EnableScrub200ResponseDecoder: EntityDecoder[EnableScrub200Response] = jsonOf[EnableScrub200Response]
  implicit val EnableScrub200ResponseEncoder: EntityEncoder[EnableScrub200Response] = jsonEncoderOf[EnableScrub200Response]
}
