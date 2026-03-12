package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import GetOrderDetail200ResponseServiceTypesInner._

case class GetOrderDetail200ResponseServiceTypesInner (
  services_id: Option[Integer],
services_name: Option[String],
services_cost: Option[Integer],
services_field1: Option[String],
services_field2: Option[String],
services_module: Option[String])

object GetOrderDetail200ResponseServiceTypesInner {
  import DateTimeCodecs._

  implicit val GetOrderDetail200ResponseServiceTypesInnerCodecJson: CodecJson[GetOrderDetail200ResponseServiceTypesInner] = CodecJson.derive[GetOrderDetail200ResponseServiceTypesInner]
  implicit val GetOrderDetail200ResponseServiceTypesInnerDecoder: EntityDecoder[GetOrderDetail200ResponseServiceTypesInner] = jsonOf[GetOrderDetail200ResponseServiceTypesInner]
  implicit val GetOrderDetail200ResponseServiceTypesInnerEncoder: EntityEncoder[GetOrderDetail200ResponseServiceTypesInner] = jsonEncoderOf[GetOrderDetail200ResponseServiceTypesInner]
}
