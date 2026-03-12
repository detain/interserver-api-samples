package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import GetScrubIpDetails200ResponseExtraInfoTables._

case class GetScrubIpDetails200ResponseExtraInfoTables (
  scrub_ips: Option[GetScrubIpDetails200ResponseExtraInfoTablesScrubIps])

object GetScrubIpDetails200ResponseExtraInfoTables {
  import DateTimeCodecs._

  implicit val GetScrubIpDetails200ResponseExtraInfoTablesCodecJson: CodecJson[GetScrubIpDetails200ResponseExtraInfoTables] = CodecJson.derive[GetScrubIpDetails200ResponseExtraInfoTables]
  implicit val GetScrubIpDetails200ResponseExtraInfoTablesDecoder: EntityDecoder[GetScrubIpDetails200ResponseExtraInfoTables] = jsonOf[GetScrubIpDetails200ResponseExtraInfoTables]
  implicit val GetScrubIpDetails200ResponseExtraInfoTablesEncoder: EntityEncoder[GetScrubIpDetails200ResponseExtraInfoTables] = jsonEncoderOf[GetScrubIpDetails200ResponseExtraInfoTables]
}
