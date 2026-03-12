package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerOrderGetResponse._

case class ServerOrderGetResponse (
  form_values: FormValues,
config_ids: ConfigIds,
cpu: Integer,
cpu_li: Map[String, Cpu],
config_li: ConfigLists,
frequency: Integer,
currency: String,
country: String,
step: String,
field_label: Option[Map[String, FieldLabel]],
cpu_cores: Option[Map[String, Map[String, CpuWithDefaults]]],
currencySymbol: Option[String],
custid: Option[Integer],
ima: Option[String],
regions: Option[List[Region]],
asset_servers: Option[List[AssetServer]],
buy_it_servers: Option[List[Any]],
display_showmore: Option[String],
cust_discount: Option[BigDecimal])

object ServerOrderGetResponse {
  import DateTimeCodecs._

  implicit val ServerOrderGetResponseCodecJson: CodecJson[ServerOrderGetResponse] = CodecJson.derive[ServerOrderGetResponse]
  implicit val ServerOrderGetResponseDecoder: EntityDecoder[ServerOrderGetResponse] = jsonOf[ServerOrderGetResponse]
  implicit val ServerOrderGetResponseEncoder: EntityEncoder[ServerOrderGetResponse] = jsonEncoderOf[ServerOrderGetResponse]
}
