package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsTrafficHistoryResponse._

case class VpsTrafficHistoryResponse (
  hour: VpsTrafficHistorySectionResponse,
day: VpsTrafficHistorySectionResponse)

object VpsTrafficHistoryResponse {
  import DateTimeCodecs._

  implicit val VpsTrafficHistoryResponseCodecJson: CodecJson[VpsTrafficHistoryResponse] = CodecJson.derive[VpsTrafficHistoryResponse]
  implicit val VpsTrafficHistoryResponseDecoder: EntityDecoder[VpsTrafficHistoryResponse] = jsonOf[VpsTrafficHistoryResponse]
  implicit val VpsTrafficHistoryResponseEncoder: EntityEncoder[VpsTrafficHistoryResponse] = jsonEncoderOf[VpsTrafficHistoryResponse]
}
