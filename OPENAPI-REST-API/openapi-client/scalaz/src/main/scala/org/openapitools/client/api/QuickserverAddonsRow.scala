package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import QuickserverAddonsRow._

case class QuickserverAddonsRow (
  /* Description */
  desc: Option[String],
/* Value */
  value: Option[String])

object QuickserverAddonsRow {
  import DateTimeCodecs._

  implicit val QuickserverAddonsRowCodecJson: CodecJson[QuickserverAddonsRow] = CodecJson.derive[QuickserverAddonsRow]
  implicit val QuickserverAddonsRowDecoder: EntityDecoder[QuickserverAddonsRow] = jsonOf[QuickserverAddonsRow]
  implicit val QuickserverAddonsRowEncoder: EntityEncoder[QuickserverAddonsRow] = jsonEncoderOf[QuickserverAddonsRow]
}
