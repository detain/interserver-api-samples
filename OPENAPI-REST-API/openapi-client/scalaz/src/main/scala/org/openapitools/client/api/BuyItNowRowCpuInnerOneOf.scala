package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BuyItNowRowCpuInnerOneOf._

case class BuyItNowRowCpuInnerOneOf (
  img: Option[String],
`type`: Option[String],
speed: Option[String],
num_cpus: Option[String],
num_cores: Option[String])

object BuyItNowRowCpuInnerOneOf {
  import DateTimeCodecs._

  implicit val BuyItNowRowCpuInnerOneOfCodecJson: CodecJson[BuyItNowRowCpuInnerOneOf] = CodecJson.derive[BuyItNowRowCpuInnerOneOf]
  implicit val BuyItNowRowCpuInnerOneOfDecoder: EntityDecoder[BuyItNowRowCpuInnerOneOf] = jsonOf[BuyItNowRowCpuInnerOneOf]
  implicit val BuyItNowRowCpuInnerOneOfEncoder: EntityEncoder[BuyItNowRowCpuInnerOneOf] = jsonEncoderOf[BuyItNowRowCpuInnerOneOf]
}
