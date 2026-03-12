package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import QueueResponse._

case class QueueResponse (
  /* Response text */
  text: String,
/* The Queue ID attached to the action. */
  queueId: Integer)

object QueueResponse {
  import DateTimeCodecs._

  implicit val QueueResponseCodecJson: CodecJson[QueueResponse] = CodecJson.derive[QueueResponse]
  implicit val QueueResponseDecoder: EntityDecoder[QueueResponse] = jsonOf[QueueResponse]
  implicit val QueueResponseEncoder: EntityEncoder[QueueResponse] = jsonEncoderOf[QueueResponse]
}
