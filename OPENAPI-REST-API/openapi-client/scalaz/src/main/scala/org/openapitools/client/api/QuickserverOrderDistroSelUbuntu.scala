package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import QuickserverOrderDistroSelUbuntu._

case class QuickserverOrderDistroSelUbuntu (
  /* Selected distribution for Ubuntu. */
  Ubuntu: Option[String])

object QuickserverOrderDistroSelUbuntu {
  import DateTimeCodecs._

  implicit val QuickserverOrderDistroSelUbuntuCodecJson: CodecJson[QuickserverOrderDistroSelUbuntu] = CodecJson.derive[QuickserverOrderDistroSelUbuntu]
  implicit val QuickserverOrderDistroSelUbuntuDecoder: EntityDecoder[QuickserverOrderDistroSelUbuntu] = jsonOf[QuickserverOrderDistroSelUbuntu]
  implicit val QuickserverOrderDistroSelUbuntuEncoder: EntityEncoder[QuickserverOrderDistroSelUbuntu] = jsonEncoderOf[QuickserverOrderDistroSelUbuntu]
}
