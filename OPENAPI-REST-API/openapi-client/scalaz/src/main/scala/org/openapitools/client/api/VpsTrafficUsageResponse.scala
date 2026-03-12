package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsTrafficUsageResponse._

case class VpsTrafficUsageResponse (
  current: VpsTrafficTotalsSectionResponse,
peak: VpsTrafficTotalsSectionResponse,
average: VpsTrafficUsageAverageResponse)

object VpsTrafficUsageResponse {
  import DateTimeCodecs._

  implicit val VpsTrafficUsageResponseCodecJson: CodecJson[VpsTrafficUsageResponse] = CodecJson.derive[VpsTrafficUsageResponse]
  implicit val VpsTrafficUsageResponseDecoder: EntityDecoder[VpsTrafficUsageResponse] = jsonOf[VpsTrafficUsageResponse]
  implicit val VpsTrafficUsageResponseEncoder: EntityEncoder[VpsTrafficUsageResponse] = jsonEncoderOf[VpsTrafficUsageResponse]
}
