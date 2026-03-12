package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import EnableScrub500Response._

case class EnableScrub500Response (
  success: Boolean,
text: String)

object EnableScrub500Response {
  import DateTimeCodecs._

  implicit val EnableScrub500ResponseCodecJson: CodecJson[EnableScrub500Response] = CodecJson.derive[EnableScrub500Response]
  implicit val EnableScrub500ResponseDecoder: EntityDecoder[EnableScrub500Response] = jsonOf[EnableScrub500Response]
  implicit val EnableScrub500ResponseEncoder: EntityEncoder[EnableScrub500Response] = jsonEncoderOf[EnableScrub500Response]
}
