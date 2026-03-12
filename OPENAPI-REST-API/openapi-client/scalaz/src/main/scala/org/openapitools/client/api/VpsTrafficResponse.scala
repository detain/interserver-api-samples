package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import java.time.OffsetDateTime

import VpsTrafficResponse._

case class VpsTrafficResponse (
  name: String,
target: String,
interval: Integer,
history: VpsTrafficHistoryResponse,
last: OffsetDateTime,
times: List[OffsetDateTime],
totals: VpsTrafficTotalsResposne,
usage: VpsTrafficUsageResponse,
data: List[VpsTrafficDataSectionResponse])

object VpsTrafficResponse {
  import DateTimeCodecs._

  implicit val VpsTrafficResponseCodecJson: CodecJson[VpsTrafficResponse] = CodecJson.derive[VpsTrafficResponse]
  implicit val VpsTrafficResponseDecoder: EntityDecoder[VpsTrafficResponse] = jsonOf[VpsTrafficResponse]
  implicit val VpsTrafficResponseEncoder: EntityEncoder[VpsTrafficResponse] = jsonEncoderOf[VpsTrafficResponse]
}
