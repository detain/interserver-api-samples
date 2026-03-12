package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import java.util.HashMap

import MonthlyCounts._

case class MonthlyCounts (
  
object MonthlyCounts {
  import DateTimeCodecs._

  implicit val MonthlyCountsCodecJson: CodecJson[MonthlyCounts] = CodecJson.derive[MonthlyCounts]
  implicit val MonthlyCountsDecoder: EntityDecoder[MonthlyCounts] = jsonOf[MonthlyCounts]
  implicit val MonthlyCountsEncoder: EntityEncoder[MonthlyCounts] = jsonEncoderOf[MonthlyCounts]
}
