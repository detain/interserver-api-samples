package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsTrafficDataSectionResponse._

case class VpsTrafficDataSectionResponse (
  name: String,
data: List[VPSTrafficDataDataSectionResponse])

object VpsTrafficDataSectionResponse {
  import DateTimeCodecs._

  implicit val VpsTrafficDataSectionResponseCodecJson: CodecJson[VpsTrafficDataSectionResponse] = CodecJson.derive[VpsTrafficDataSectionResponse]
  implicit val VpsTrafficDataSectionResponseDecoder: EntityDecoder[VpsTrafficDataSectionResponse] = jsonOf[VpsTrafficDataSectionResponse]
  implicit val VpsTrafficDataSectionResponseEncoder: EntityEncoder[VpsTrafficDataSectionResponse] = jsonEncoderOf[VpsTrafficDataSectionResponse]
}
