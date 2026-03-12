package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BillingPaymentMethodRequest._

case class BillingPaymentMethodRequest (
  /* Payment method identifier (cc, paypal, or cc{index}). */
  payment_method: Option[String],
/* Whether automatic credit card payments are enabled. */
  cc_auto: Option[String])

object BillingPaymentMethodRequest {
  import DateTimeCodecs._

  implicit val BillingPaymentMethodRequestCodecJson: CodecJson[BillingPaymentMethodRequest] = CodecJson.derive[BillingPaymentMethodRequest]
  implicit val BillingPaymentMethodRequestDecoder: EntityDecoder[BillingPaymentMethodRequest] = jsonOf[BillingPaymentMethodRequest]
  implicit val BillingPaymentMethodRequestEncoder: EntityEncoder[BillingPaymentMethodRequest] = jsonEncoderOf[BillingPaymentMethodRequest]
}
