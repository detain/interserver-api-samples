package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeDetailsModules._

case class HomeDetailsModules (
  domains: Option[HomeDetailsModulesDomains],
webhosting: Option[HomeDetailsModulesWebhosting],
vps: Option[HomeDetailsModulesVps],
licenses: Option[HomeDetailsModulesLicenses],
backups: Option[HomeDetailsModulesBackups],
servers: Option[HomeDetailsModulesServers],
quickservers: Option[HomeDetailsModulesQuickservers])

object HomeDetailsModules {
  import DateTimeCodecs._

  implicit val HomeDetailsModulesCodecJson: CodecJson[HomeDetailsModules] = CodecJson.derive[HomeDetailsModules]
  implicit val HomeDetailsModulesDecoder: EntityDecoder[HomeDetailsModules] = jsonOf[HomeDetailsModules]
  implicit val HomeDetailsModulesEncoder: EntityEncoder[HomeDetailsModules] = jsonEncoderOf[HomeDetailsModules]
}
