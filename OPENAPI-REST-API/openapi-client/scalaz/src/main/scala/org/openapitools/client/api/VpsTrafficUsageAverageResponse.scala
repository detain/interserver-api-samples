package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsTrafficUsageAverageResponse._

case class VpsTrafficUsageAverageResponse (
  in: VpsTrafficUsageAverageSectionResponse,
out: VpsTrafficUsageAverageSectionResponse)

object VpsTrafficUsageAverageResponse {
  import DateTimeCodecs._

  implicit val VpsTrafficUsageAverageResponseCodecJson: CodecJson[VpsTrafficUsageAverageResponse] = CodecJson.derive[VpsTrafficUsageAverageResponse]
  implicit val VpsTrafficUsageAverageResponseDecoder: EntityDecoder[VpsTrafficUsageAverageResponse] = jsonOf[VpsTrafficUsageAverageResponse]
  implicit val VpsTrafficUsageAverageResponseEncoder: EntityEncoder[VpsTrafficUsageAverageResponse] = jsonEncoderOf[VpsTrafficUsageAverageResponse]
}
