package io.swagger.server.model


/**
 * = SendMail =
 *
 * Details for an Email
 *
 * @param to The Contact whom is the primary recipient of this email. for example: ''johndoe@company.com''
 * @param from The contact whom is the this email is from. for example: ''janedoe@company.com''
 * @param subject The subject or title of the email for example: ''Attention Client''
 * @param body The main email contents. for example: ''This is an email to inform you that something noteworthy happened.''
 */
case class SendMail (
  to: String,
  from: String,
  subject: String,
  body: String
)

