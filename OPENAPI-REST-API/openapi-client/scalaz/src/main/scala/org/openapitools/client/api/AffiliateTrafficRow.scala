package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AffiliateTrafficRow._

case class AffiliateTrafficRow (
  traffic_id: Option[String],
traffic_ip: Option[String],
traffic_url: Option[String],
traffic_affiliate: Option[String],
traffic_referrer: Option[String],
traffic_timestamp: Option[String])

object AffiliateTrafficRow {
  import DateTimeCodecs._

  implicit val AffiliateTrafficRowCodecJson: CodecJson[AffiliateTrafficRow] = CodecJson.derive[AffiliateTrafficRow]
  implicit val AffiliateTrafficRowDecoder: EntityDecoder[AffiliateTrafficRow] = jsonOf[AffiliateTrafficRow]
  implicit val AffiliateTrafficRowEncoder: EntityEncoder[AffiliateTrafficRow] = jsonEncoderOf[AffiliateTrafficRow]
}
