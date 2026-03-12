package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import GetOrderDetail200ResponseIpsInner._

case class GetOrderDetail200ResponseIpsInner (
  service_id: Option[BigDecimal],
service_module: Option[String],
service_hostname: Option[String])

object GetOrderDetail200ResponseIpsInner {
  import DateTimeCodecs._

  implicit val GetOrderDetail200ResponseIpsInnerCodecJson: CodecJson[GetOrderDetail200ResponseIpsInner] = CodecJson.derive[GetOrderDetail200ResponseIpsInner]
  implicit val GetOrderDetail200ResponseIpsInnerDecoder: EntityDecoder[GetOrderDetail200ResponseIpsInner] = jsonOf[GetOrderDetail200ResponseIpsInner]
  implicit val GetOrderDetail200ResponseIpsInnerEncoder: EntityEncoder[GetOrderDetail200ResponseIpsInner] = jsonEncoderOf[GetOrderDetail200ResponseIpsInner]
}
