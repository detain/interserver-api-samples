package io.swagger.server.model


/**
 * = AccountInfoOauthConfig =
 *
 * OAuth integration configuration including callback URL and available providers.
 *
 * @param callback 
 * @param providers 
 */
case class AccountInfoOauthConfig (
  callback: String,
  providers: AccountInfoOauthConfigProviders
)

