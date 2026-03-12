package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import QuickserverOrderDistroSel._

case class QuickserverOrderDistroSel (
  Ubuntu: Option[QuickserverOrderDistroSelUbuntu])

object QuickserverOrderDistroSel {
  import DateTimeCodecs._

  implicit val QuickserverOrderDistroSelCodecJson: CodecJson[QuickserverOrderDistroSel] = CodecJson.derive[QuickserverOrderDistroSel]
  implicit val QuickserverOrderDistroSelDecoder: EntityDecoder[QuickserverOrderDistroSel] = jsonOf[QuickserverOrderDistroSel]
  implicit val QuickserverOrderDistroSelEncoder: EntityEncoder[QuickserverOrderDistroSel] = jsonEncoderOf[QuickserverOrderDistroSel]
}
