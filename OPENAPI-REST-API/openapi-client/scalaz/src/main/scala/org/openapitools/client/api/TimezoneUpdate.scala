package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import TimezoneUpdate._

case class TimezoneUpdate (
  /* The time zone */
  timezone: String)

object TimezoneUpdate {
  import DateTimeCodecs._

  implicit val TimezoneUpdateCodecJson: CodecJson[TimezoneUpdate] = CodecJson.derive[TimezoneUpdate]
  implicit val TimezoneUpdateDecoder: EntityDecoder[TimezoneUpdate] = jsonOf[TimezoneUpdate]
  implicit val TimezoneUpdateEncoder: EntityEncoder[TimezoneUpdate] = jsonEncoderOf[TimezoneUpdate]
}
