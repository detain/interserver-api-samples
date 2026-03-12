package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import PostWebsiteMigrationRequest._

case class PostWebsiteMigrationRequest (
  /* URL of the customer's current hosting portal. */
  custPortal: Option[String],
/* Registered email address at the current host. */
  regEmail: Option[String],
/* Password for the current hosting account. */
  password: Option[String],
/* URL of the current control panel. */
  ctrlPanel: Option[String],
/* FTP username at the current host. */
  ftpUsername: Option[String],
/* FTP password at the current host. */
  ftpPassword: Option[String],
/* Information about site traffic during migration. */
  siteBusyMig: Option[String],
/* Special requirements for the migration. */
  splReqMig: Option[String],
/* Whether domain registration assistance is needed. */
  domainReg: Option[String],
/* Data migration timing preference. */
  dataMig: Option[String],
/* Domain registrar portal URL. */
  domainRegPortal: Option[String],
/* Email for the domain registrar account. */
  domainRegEmail: Option[String],
/* Password for the domain registrar account. */
  domainRegPassword: Option[String])

object PostWebsiteMigrationRequest {
  import DateTimeCodecs._

  implicit val PostWebsiteMigrationRequestCodecJson: CodecJson[PostWebsiteMigrationRequest] = CodecJson.derive[PostWebsiteMigrationRequest]
  implicit val PostWebsiteMigrationRequestDecoder: EntityDecoder[PostWebsiteMigrationRequest] = jsonOf[PostWebsiteMigrationRequest]
  implicit val PostWebsiteMigrationRequestEncoder: EntityEncoder[PostWebsiteMigrationRequest] = jsonEncoderOf[PostWebsiteMigrationRequest]
}
