package io.swagger.server.model


/**
 * = TemplateRequest =
 *
 * VPS OS Template Request
 *
 * @param template OS Template Filename for example: ''ubuntu24''
 * @param password Password for Root / Administrator Account. for example: ''myUserPassword''
 * @param localPassword Password for this account.
 */
case class TemplateRequest (
  template: String,
  password: Option[String],
  localPassword: String
)

