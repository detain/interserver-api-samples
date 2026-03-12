package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import GetScrubIpDetails200ResponseExtraInfoTablesScrubIps._

case class GetScrubIpDetails200ResponseExtraInfoTablesScrubIps (
  title: Option[String],
rows: Option[List[GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner]])

object GetScrubIpDetails200ResponseExtraInfoTablesScrubIps {
  import DateTimeCodecs._

  implicit val GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsCodecJson: CodecJson[GetScrubIpDetails200ResponseExtraInfoTablesScrubIps] = CodecJson.derive[GetScrubIpDetails200ResponseExtraInfoTablesScrubIps]
  implicit val GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsDecoder: EntityDecoder[GetScrubIpDetails200ResponseExtraInfoTablesScrubIps] = jsonOf[GetScrubIpDetails200ResponseExtraInfoTablesScrubIps]
  implicit val GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsEncoder: EntityEncoder[GetScrubIpDetails200ResponseExtraInfoTablesScrubIps] = jsonEncoderOf[GetScrubIpDetails200ResponseExtraInfoTablesScrubIps]
}
