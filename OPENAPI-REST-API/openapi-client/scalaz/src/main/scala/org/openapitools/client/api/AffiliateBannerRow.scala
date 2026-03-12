package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AffiliateBannerRow._

case class AffiliateBannerRow (
  image: Option[String],
width: Option[String],
height: Option[String])

object AffiliateBannerRow {
  import DateTimeCodecs._

  implicit val AffiliateBannerRowCodecJson: CodecJson[AffiliateBannerRow] = CodecJson.derive[AffiliateBannerRow]
  implicit val AffiliateBannerRowDecoder: EntityDecoder[AffiliateBannerRow] = jsonOf[AffiliateBannerRow]
  implicit val AffiliateBannerRowEncoder: EntityEncoder[AffiliateBannerRow] = jsonEncoderOf[AffiliateBannerRow]
}
