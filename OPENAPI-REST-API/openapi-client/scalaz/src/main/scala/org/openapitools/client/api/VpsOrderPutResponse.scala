package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsOrderPutResponse._

case class VpsOrderPutResponse (
  continue: Option[Boolean],
errors: Option[List[AnyType]],
coupon_code: Option[Integer],
service_cost: Option[Integer],
slice_cost: Option[Integer],
service_type: Option[Integer],
repeat_slice_cost: Option[Integer],
original_slice_cost: Option[Integer],
original_cost: Option[Integer],
repeat_service_cost: Option[Integer],
monthly_service_cost: Option[Integer],
custid: Option[String],
os: Option[String],
slices: Option[String],
platform: Option[String],
controlpanel: Option[String],
period: Option[Integer],
location: Option[Integer],
version: Option[String],
hostname: Option[String],
coupon: Option[String],
rootpass: Option[String])

object VpsOrderPutResponse {
  import DateTimeCodecs._

  implicit val VpsOrderPutResponseCodecJson: CodecJson[VpsOrderPutResponse] = CodecJson.derive[VpsOrderPutResponse]
  implicit val VpsOrderPutResponseDecoder: EntityDecoder[VpsOrderPutResponse] = jsonOf[VpsOrderPutResponse]
  implicit val VpsOrderPutResponseEncoder: EntityEncoder[VpsOrderPutResponse] = jsonEncoderOf[VpsOrderPutResponse]
}
