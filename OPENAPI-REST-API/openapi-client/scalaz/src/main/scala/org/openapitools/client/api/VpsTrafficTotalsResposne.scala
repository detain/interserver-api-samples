package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsTrafficTotalsResposne._

case class VpsTrafficTotalsResposne (
  day: VpsTrafficTotalsSectionResponse,
month: VpsTrafficTotalsSectionResponse,
year: VpsTrafficTotalsSectionResponse,
all: VpsTrafficTotalsSectionResponse)

object VpsTrafficTotalsResposne {
  import DateTimeCodecs._

  implicit val VpsTrafficTotalsResposneCodecJson: CodecJson[VpsTrafficTotalsResposne] = CodecJson.derive[VpsTrafficTotalsResposne]
  implicit val VpsTrafficTotalsResposneDecoder: EntityDecoder[VpsTrafficTotalsResposne] = jsonOf[VpsTrafficTotalsResposne]
  implicit val VpsTrafficTotalsResposneEncoder: EntityEncoder[VpsTrafficTotalsResposne] = jsonEncoderOf[VpsTrafficTotalsResposne]
}
