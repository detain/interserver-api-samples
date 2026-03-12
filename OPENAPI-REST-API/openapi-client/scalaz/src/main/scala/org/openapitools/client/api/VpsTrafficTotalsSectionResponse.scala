package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsTrafficTotalsSectionResponse._

case class VpsTrafficTotalsSectionResponse (
  in: Long,
out: Long)

object VpsTrafficTotalsSectionResponse {
  import DateTimeCodecs._

  implicit val VpsTrafficTotalsSectionResponseCodecJson: CodecJson[VpsTrafficTotalsSectionResponse] = CodecJson.derive[VpsTrafficTotalsSectionResponse]
  implicit val VpsTrafficTotalsSectionResponseDecoder: EntityDecoder[VpsTrafficTotalsSectionResponse] = jsonOf[VpsTrafficTotalsSectionResponse]
  implicit val VpsTrafficTotalsSectionResponseEncoder: EntityEncoder[VpsTrafficTotalsSectionResponse] = jsonEncoderOf[VpsTrafficTotalsSectionResponse]
}
