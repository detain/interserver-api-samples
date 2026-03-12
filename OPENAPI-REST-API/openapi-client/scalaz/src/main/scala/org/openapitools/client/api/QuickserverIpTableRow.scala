package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import QuickserverIpTableRow._

case class QuickserverIpTableRow (
  /* Description */
  desc: Option[String],
/* Value */
  value: Option[String])

object QuickserverIpTableRow {
  import DateTimeCodecs._

  implicit val QuickserverIpTableRowCodecJson: CodecJson[QuickserverIpTableRow] = CodecJson.derive[QuickserverIpTableRow]
  implicit val QuickserverIpTableRowDecoder: EntityDecoder[QuickserverIpTableRow] = jsonOf[QuickserverIpTableRow]
  implicit val QuickserverIpTableRowEncoder: EntityEncoder[QuickserverIpTableRow] = jsonEncoderOf[QuickserverIpTableRow]
}
