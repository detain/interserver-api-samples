package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainAllInfoAttributes._

case class DomainAllInfoAttributes (
  contact_set: Option[DomainAllInfoAttributesContactSet],
registry_createdate: Option[String],
registry_expiredate: Option[String],
tld_data: Option[String],
let_expire: Option[String],
auto_renew: Option[String],
sponsoring_rsp: Option[String],
gdpr_consent_status: Option[String],
nameserver_list: Option[List[DomainNameServer]],
registry_updatedate: Option[String],
affiliate_id: Option[String],
expiredate: Option[String])

object DomainAllInfoAttributes {
  import DateTimeCodecs._

  implicit val DomainAllInfoAttributesCodecJson: CodecJson[DomainAllInfoAttributes] = CodecJson.derive[DomainAllInfoAttributes]
  implicit val DomainAllInfoAttributesDecoder: EntityDecoder[DomainAllInfoAttributes] = jsonOf[DomainAllInfoAttributes]
  implicit val DomainAllInfoAttributesEncoder: EntityEncoder[DomainAllInfoAttributes] = jsonEncoderOf[DomainAllInfoAttributes]
}
