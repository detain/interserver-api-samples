package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AffiliateDockSetup._

case class AffiliateDockSetup (
  affiliate_dock_title: Option[String],
affiliate_dock_description: Option[String],
referrer_coupon: Option[String])

object AffiliateDockSetup {
  import DateTimeCodecs._

  implicit val AffiliateDockSetupCodecJson: CodecJson[AffiliateDockSetup] = CodecJson.derive[AffiliateDockSetup]
  implicit val AffiliateDockSetupDecoder: EntityDecoder[AffiliateDockSetup] = jsonOf[AffiliateDockSetup]
  implicit val AffiliateDockSetupEncoder: EntityEncoder[AffiliateDockSetup] = jsonEncoderOf[AffiliateDockSetup]
}
