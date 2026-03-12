package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsCPData._

case class VpsCPData (
  /* Control panel name (e.g., cPanel). */
  name: Option[String],
/* Monthly cost in cents for the control panel license. */
  cost: Option[Integer])

object VpsCPData {
  import DateTimeCodecs._

  implicit val VpsCPDataCodecJson: CodecJson[VpsCPData] = CodecJson.derive[VpsCPData]
  implicit val VpsCPDataDecoder: EntityDecoder[VpsCPData] = jsonOf[VpsCPData]
  implicit val VpsCPDataEncoder: EntityEncoder[VpsCPData] = jsonEncoderOf[VpsCPData]
}
