package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsTrafficUsageAverageSectionResponse._

case class VpsTrafficUsageAverageSectionResponse (
  total: Integer,
count: Integer,
value: Integer)

object VpsTrafficUsageAverageSectionResponse {
  import DateTimeCodecs._

  implicit val VpsTrafficUsageAverageSectionResponseCodecJson: CodecJson[VpsTrafficUsageAverageSectionResponse] = CodecJson.derive[VpsTrafficUsageAverageSectionResponse]
  implicit val VpsTrafficUsageAverageSectionResponseDecoder: EntityDecoder[VpsTrafficUsageAverageSectionResponse] = jsonOf[VpsTrafficUsageAverageSectionResponse]
  implicit val VpsTrafficUsageAverageSectionResponseEncoder: EntityEncoder[VpsTrafficUsageAverageSectionResponse] = jsonEncoderOf[VpsTrafficUsageAverageSectionResponse]
}
