package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import GetOrderDetail200Response._

case class GetOrderDetail200Response (
  packageCosts: Option[GetOrderDetail200ResponsePackageCosts],
serviceTypes: Option[List[GetOrderDetail200ResponseServiceTypesInner]],
ips: Option[List[GetOrderDetail200ResponseIpsInner]])

object GetOrderDetail200Response {
  import DateTimeCodecs._

  implicit val GetOrderDetail200ResponseCodecJson: CodecJson[GetOrderDetail200Response] = CodecJson.derive[GetOrderDetail200Response]
  implicit val GetOrderDetail200ResponseDecoder: EntityDecoder[GetOrderDetail200Response] = jsonOf[GetOrderDetail200Response]
  implicit val GetOrderDetail200ResponseEncoder: EntityEncoder[GetOrderDetail200Response] = jsonEncoderOf[GetOrderDetail200Response]
}
