package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BuyItNowRowCpuInner._

case class BuyItNowRowCpuInner (
  img: Option[String],
`type`: Option[String],
speed: Option[String],
num_cpus: Option[String],
num_cores: Option[String])

object BuyItNowRowCpuInner {
  import DateTimeCodecs._

  implicit val BuyItNowRowCpuInnerCodecJson: CodecJson[BuyItNowRowCpuInner] = CodecJson.derive[BuyItNowRowCpuInner]
  implicit val BuyItNowRowCpuInnerDecoder: EntityDecoder[BuyItNowRowCpuInner] = jsonOf[BuyItNowRowCpuInner]
  implicit val BuyItNowRowCpuInnerEncoder: EntityEncoder[BuyItNowRowCpuInner] = jsonEncoderOf[BuyItNowRowCpuInner]
}
