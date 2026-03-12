package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import java.time.OffsetDateTime

import VpsTrafficHistorySectionResponse._

case class VpsTrafficHistorySectionResponse (
  data: List[VpsTrafficHistorySectionDataResponse],
times: List[OffsetDateTime])

object VpsTrafficHistorySectionResponse {
  import DateTimeCodecs._

  implicit val VpsTrafficHistorySectionResponseCodecJson: CodecJson[VpsTrafficHistorySectionResponse] = CodecJson.derive[VpsTrafficHistorySectionResponse]
  implicit val VpsTrafficHistorySectionResponseDecoder: EntityDecoder[VpsTrafficHistorySectionResponse] = jsonOf[VpsTrafficHistorySectionResponse]
  implicit val VpsTrafficHistorySectionResponseEncoder: EntityEncoder[VpsTrafficHistorySectionResponse] = jsonEncoderOf[VpsTrafficHistorySectionResponse]
}
