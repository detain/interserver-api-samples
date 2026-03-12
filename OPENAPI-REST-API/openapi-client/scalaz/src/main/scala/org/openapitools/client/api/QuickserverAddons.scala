package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import QuickserverAddons._

case class QuickserverAddons (
  /* Table title */
  title: Option[String],
rows: Option[List[QuickserverAddonsRow]])

object QuickserverAddons {
  import DateTimeCodecs._

  implicit val QuickserverAddonsCodecJson: CodecJson[QuickserverAddons] = CodecJson.derive[QuickserverAddons]
  implicit val QuickserverAddonsDecoder: EntityDecoder[QuickserverAddons] = jsonOf[QuickserverAddons]
  implicit val QuickserverAddonsEncoder: EntityEncoder[QuickserverAddons] = jsonEncoderOf[QuickserverAddons]
}
