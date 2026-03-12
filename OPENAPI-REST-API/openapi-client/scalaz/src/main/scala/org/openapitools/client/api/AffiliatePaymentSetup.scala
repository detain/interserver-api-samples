package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AffiliatePaymentSetup._

case class AffiliatePaymentSetup (
  affiliate_paypal: Option[String],
affiliate_payment_method: Option[String])

object AffiliatePaymentSetup {
  import DateTimeCodecs._

  implicit val AffiliatePaymentSetupCodecJson: CodecJson[AffiliatePaymentSetup] = CodecJson.derive[AffiliatePaymentSetup]
  implicit val AffiliatePaymentSetupDecoder: EntityDecoder[AffiliatePaymentSetup] = jsonOf[AffiliatePaymentSetup]
  implicit val AffiliatePaymentSetupEncoder: EntityEncoder[AffiliatePaymentSetup] = jsonEncoderOf[AffiliatePaymentSetup]
}
