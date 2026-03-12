package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BillingVerifyCcRequest._

case class BillingVerifyCcRequest (
  /* Card index to verify. */
  idx: Option[Integer],
/* CVV code for verification. */
  cc_ccv2: Option[String],
/* First micro-charge amount for verification. */
  cc_amount1: Option[String],
/* Second micro-charge amount for verification. */
  cc_amount2: Option[String],
/* Whether terms were accepted for verification. */
  terms: Option[Boolean])

object BillingVerifyCcRequest {
  import DateTimeCodecs._

  implicit val BillingVerifyCcRequestCodecJson: CodecJson[BillingVerifyCcRequest] = CodecJson.derive[BillingVerifyCcRequest]
  implicit val BillingVerifyCcRequestDecoder: EntityDecoder[BillingVerifyCcRequest] = jsonOf[BillingVerifyCcRequest]
  implicit val BillingVerifyCcRequestEncoder: EntityEncoder[BillingVerifyCcRequest] = jsonEncoderOf[BillingVerifyCcRequest]
}
