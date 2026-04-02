#' Create a new AccountInfoData
#'
#' @description
#' Detailed account profile data including contact info, billing, API keys, and security settings.
#'
#' @docType class
#' @title AccountInfoData
#' @description AccountInfoData Class
#' @format An \code{R6Class} generator object
#' @field group  character [optional]
#' @field address  character [optional]
#' @field city  character [optional]
#' @field country  character [optional]
#' @field disable_cc  character [optional]
#' @field fraudrecord_score  character [optional]
#' @field ima  character [optional]
#' @field name  character [optional]
#' @field payment_method  character [optional]
#' @field phone  character [optional]
#' @field pin  character [optional]
#' @field state  character [optional]
#' @field status  character [optional]
#' @field zip  character [optional]
#' @field account_id  character [optional]
#' @field account_lid  character [optional]
#' @field address2  character [optional]
#' @field affiliate_dock_description  character [optional]
#' @field affiliate_dock_title  character [optional]
#' @field affiliate_payment_method  character [optional]
#' @field affiliate_paypal  character [optional]
#' @field cc  character [optional]
#' @field cc_auto  character [optional]
#' @field cc_exp  character [optional]
#' @field cc_type  character [optional]
#' @field cc_whitelist  character [optional]
#' @field ccs  \link{AccountInfoDataCcs} [optional]
#' @field ccs_added  character [optional]
#' @field company  character [optional]
#' @field currency  character [optional]
#' @field disable_reinstall  character [optional]
#' @field disable_reset  character [optional]
#' @field email  character [optional]
#' @field email_abuse  character [optional]
#' @field email_settings  \link{AccountInfoDataEmailSettings} [optional]
#' @field extra  \link{AccountInfoDataExtra} [optional]
#' @field facebook_id  character [optional]
#' @field facebook_url  character [optional]
#' @field firstname  character [optional]
#' @field fraudrecord  \link{AccountInfoDataFraudrecord} [optional]
#' @field github_id  character [optional]
#' @field github_url  character [optional]
#' @field google_id  character [optional]
#' @field google_url  character [optional]
#' @field innertell_id  character [optional]
#' @field lastname  character [optional]
#' @field locale  character [optional]
#' @field maxmind  \link{AccountInfoMaxMindResponse} [optional]
#' @field maxmind_score  character [optional]
#' @field mb_id  character [optional]
#' @field modernbill_id  character [optional]
#' @field picture  character [optional]
#' @field referrer_coupon  character [optional]
#' @field reseller_markup  character [optional]
#' @field username  character [optional]
#' @field ssh_key  character [optional]
#' @field ssh_key_wrapped  character [optional]
#' @field api_key  character [optional]
#' @field api_key_wrapped  character [optional]
#' @field 2fa_google_key  character [optional]
#' @field 2fa_google_enabled  character [optional]
#' @field 2fa_google  integer [optional]
#' @field 2fa_google_split  character [optional]
#' @field 2fa_google_qr  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AccountInfoData <- R6::R6Class(
  "AccountInfoData",
  public = list(
    `group` = NULL,
    `address` = NULL,
    `city` = NULL,
    `country` = NULL,
    `disable_cc` = NULL,
    `fraudrecord_score` = NULL,
    `ima` = NULL,
    `name` = NULL,
    `payment_method` = NULL,
    `phone` = NULL,
    `pin` = NULL,
    `state` = NULL,
    `status` = NULL,
    `zip` = NULL,
    `account_id` = NULL,
    `account_lid` = NULL,
    `address2` = NULL,
    `affiliate_dock_description` = NULL,
    `affiliate_dock_title` = NULL,
    `affiliate_payment_method` = NULL,
    `affiliate_paypal` = NULL,
    `cc` = NULL,
    `cc_auto` = NULL,
    `cc_exp` = NULL,
    `cc_type` = NULL,
    `cc_whitelist` = NULL,
    `ccs` = NULL,
    `ccs_added` = NULL,
    `company` = NULL,
    `currency` = NULL,
    `disable_reinstall` = NULL,
    `disable_reset` = NULL,
    `email` = NULL,
    `email_abuse` = NULL,
    `email_settings` = NULL,
    `extra` = NULL,
    `facebook_id` = NULL,
    `facebook_url` = NULL,
    `firstname` = NULL,
    `fraudrecord` = NULL,
    `github_id` = NULL,
    `github_url` = NULL,
    `google_id` = NULL,
    `google_url` = NULL,
    `innertell_id` = NULL,
    `lastname` = NULL,
    `locale` = NULL,
    `maxmind` = NULL,
    `maxmind_score` = NULL,
    `mb_id` = NULL,
    `modernbill_id` = NULL,
    `picture` = NULL,
    `referrer_coupon` = NULL,
    `reseller_markup` = NULL,
    `username` = NULL,
    `ssh_key` = NULL,
    `ssh_key_wrapped` = NULL,
    `api_key` = NULL,
    `api_key_wrapped` = NULL,
    `2fa_google_key` = NULL,
    `2fa_google_enabled` = NULL,
    `2fa_google` = NULL,
    `2fa_google_split` = NULL,
    `2fa_google_qr` = NULL,

    #' @description
    #' Initialize a new AccountInfoData class.
    #'
    #' @param group group
    #' @param address address
    #' @param city city
    #' @param country country
    #' @param disable_cc disable_cc
    #' @param fraudrecord_score fraudrecord_score
    #' @param ima ima
    #' @param name name
    #' @param payment_method payment_method
    #' @param phone phone
    #' @param pin pin
    #' @param state state
    #' @param status status
    #' @param zip zip
    #' @param account_id account_id
    #' @param account_lid account_lid
    #' @param address2 address2
    #' @param affiliate_dock_description affiliate_dock_description
    #' @param affiliate_dock_title affiliate_dock_title
    #' @param affiliate_payment_method affiliate_payment_method
    #' @param affiliate_paypal affiliate_paypal
    #' @param cc cc
    #' @param cc_auto cc_auto
    #' @param cc_exp cc_exp
    #' @param cc_type cc_type
    #' @param cc_whitelist cc_whitelist
    #' @param ccs ccs
    #' @param ccs_added ccs_added
    #' @param company company
    #' @param currency currency
    #' @param disable_reinstall disable_reinstall
    #' @param disable_reset disable_reset
    #' @param email email
    #' @param email_abuse email_abuse
    #' @param email_settings email_settings
    #' @param extra extra
    #' @param facebook_id facebook_id
    #' @param facebook_url facebook_url
    #' @param firstname firstname
    #' @param fraudrecord fraudrecord
    #' @param github_id github_id
    #' @param github_url github_url
    #' @param google_id google_id
    #' @param google_url google_url
    #' @param innertell_id innertell_id
    #' @param lastname lastname
    #' @param locale locale
    #' @param maxmind maxmind
    #' @param maxmind_score maxmind_score
    #' @param mb_id mb_id
    #' @param modernbill_id modernbill_id
    #' @param picture picture
    #' @param referrer_coupon referrer_coupon
    #' @param reseller_markup reseller_markup
    #' @param username username
    #' @param ssh_key ssh_key
    #' @param ssh_key_wrapped ssh_key_wrapped
    #' @param api_key api_key
    #' @param api_key_wrapped api_key_wrapped
    #' @param 2fa_google_key 2fa_google_key
    #' @param 2fa_google_enabled 2fa_google_enabled
    #' @param 2fa_google 2fa_google
    #' @param 2fa_google_split 2fa_google_split
    #' @param 2fa_google_qr 2fa_google_qr
    #' @param ... Other optional arguments.
    initialize = function(`group` = NULL, `address` = NULL, `city` = NULL, `country` = NULL, `disable_cc` = NULL, `fraudrecord_score` = NULL, `ima` = NULL, `name` = NULL, `payment_method` = NULL, `phone` = NULL, `pin` = NULL, `state` = NULL, `status` = NULL, `zip` = NULL, `account_id` = NULL, `account_lid` = NULL, `address2` = NULL, `affiliate_dock_description` = NULL, `affiliate_dock_title` = NULL, `affiliate_payment_method` = NULL, `affiliate_paypal` = NULL, `cc` = NULL, `cc_auto` = NULL, `cc_exp` = NULL, `cc_type` = NULL, `cc_whitelist` = NULL, `ccs` = NULL, `ccs_added` = NULL, `company` = NULL, `currency` = NULL, `disable_reinstall` = NULL, `disable_reset` = NULL, `email` = NULL, `email_abuse` = NULL, `email_settings` = NULL, `extra` = NULL, `facebook_id` = NULL, `facebook_url` = NULL, `firstname` = NULL, `fraudrecord` = NULL, `github_id` = NULL, `github_url` = NULL, `google_id` = NULL, `google_url` = NULL, `innertell_id` = NULL, `lastname` = NULL, `locale` = NULL, `maxmind` = NULL, `maxmind_score` = NULL, `mb_id` = NULL, `modernbill_id` = NULL, `picture` = NULL, `referrer_coupon` = NULL, `reseller_markup` = NULL, `username` = NULL, `ssh_key` = NULL, `ssh_key_wrapped` = NULL, `api_key` = NULL, `api_key_wrapped` = NULL, `2fa_google_key` = NULL, `2fa_google_enabled` = NULL, `2fa_google` = NULL, `2fa_google_split` = NULL, `2fa_google_qr` = NULL, ...) {
      if (!is.null(`group`)) {
        if (!(is.character(`group`) && length(`group`) == 1)) {
          stop(paste("Error! Invalid data for `group`. Must be a string:", `group`))
        }
        self$`group` <- `group`
      }
      if (!is.null(`address`)) {
        if (!(is.character(`address`) && length(`address`) == 1)) {
          stop(paste("Error! Invalid data for `address`. Must be a string:", `address`))
        }
        self$`address` <- `address`
      }
      if (!is.null(`city`)) {
        if (!(is.character(`city`) && length(`city`) == 1)) {
          stop(paste("Error! Invalid data for `city`. Must be a string:", `city`))
        }
        self$`city` <- `city`
      }
      if (!is.null(`country`)) {
        if (!(is.character(`country`) && length(`country`) == 1)) {
          stop(paste("Error! Invalid data for `country`. Must be a string:", `country`))
        }
        self$`country` <- `country`
      }
      if (!is.null(`disable_cc`)) {
        if (!(is.character(`disable_cc`) && length(`disable_cc`) == 1)) {
          stop(paste("Error! Invalid data for `disable_cc`. Must be a string:", `disable_cc`))
        }
        self$`disable_cc` <- `disable_cc`
      }
      if (!is.null(`fraudrecord_score`)) {
        if (!(is.character(`fraudrecord_score`) && length(`fraudrecord_score`) == 1)) {
          stop(paste("Error! Invalid data for `fraudrecord_score`. Must be a string:", `fraudrecord_score`))
        }
        self$`fraudrecord_score` <- `fraudrecord_score`
      }
      if (!is.null(`ima`)) {
        if (!(is.character(`ima`) && length(`ima`) == 1)) {
          stop(paste("Error! Invalid data for `ima`. Must be a string:", `ima`))
        }
        self$`ima` <- `ima`
      }
      if (!is.null(`name`)) {
        if (!(is.character(`name`) && length(`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", `name`))
        }
        self$`name` <- `name`
      }
      if (!is.null(`payment_method`)) {
        if (!(is.character(`payment_method`) && length(`payment_method`) == 1)) {
          stop(paste("Error! Invalid data for `payment_method`. Must be a string:", `payment_method`))
        }
        self$`payment_method` <- `payment_method`
      }
      if (!is.null(`phone`)) {
        if (!(is.character(`phone`) && length(`phone`) == 1)) {
          stop(paste("Error! Invalid data for `phone`. Must be a string:", `phone`))
        }
        self$`phone` <- `phone`
      }
      if (!is.null(`pin`)) {
        if (!(is.character(`pin`) && length(`pin`) == 1)) {
          stop(paste("Error! Invalid data for `pin`. Must be a string:", `pin`))
        }
        self$`pin` <- `pin`
      }
      if (!is.null(`state`)) {
        if (!(is.character(`state`) && length(`state`) == 1)) {
          stop(paste("Error! Invalid data for `state`. Must be a string:", `state`))
        }
        self$`state` <- `state`
      }
      if (!is.null(`status`)) {
        if (!(is.character(`status`) && length(`status`) == 1)) {
          stop(paste("Error! Invalid data for `status`. Must be a string:", `status`))
        }
        self$`status` <- `status`
      }
      if (!is.null(`zip`)) {
        if (!(is.character(`zip`) && length(`zip`) == 1)) {
          stop(paste("Error! Invalid data for `zip`. Must be a string:", `zip`))
        }
        self$`zip` <- `zip`
      }
      if (!is.null(`account_id`)) {
        if (!(is.character(`account_id`) && length(`account_id`) == 1)) {
          stop(paste("Error! Invalid data for `account_id`. Must be a string:", `account_id`))
        }
        self$`account_id` <- `account_id`
      }
      if (!is.null(`account_lid`)) {
        if (!(is.character(`account_lid`) && length(`account_lid`) == 1)) {
          stop(paste("Error! Invalid data for `account_lid`. Must be a string:", `account_lid`))
        }
        self$`account_lid` <- `account_lid`
      }
      if (!is.null(`address2`)) {
        if (!(is.character(`address2`) && length(`address2`) == 1)) {
          stop(paste("Error! Invalid data for `address2`. Must be a string:", `address2`))
        }
        self$`address2` <- `address2`
      }
      if (!is.null(`affiliate_dock_description`)) {
        if (!(is.character(`affiliate_dock_description`) && length(`affiliate_dock_description`) == 1)) {
          stop(paste("Error! Invalid data for `affiliate_dock_description`. Must be a string:", `affiliate_dock_description`))
        }
        self$`affiliate_dock_description` <- `affiliate_dock_description`
      }
      if (!is.null(`affiliate_dock_title`)) {
        if (!(is.character(`affiliate_dock_title`) && length(`affiliate_dock_title`) == 1)) {
          stop(paste("Error! Invalid data for `affiliate_dock_title`. Must be a string:", `affiliate_dock_title`))
        }
        self$`affiliate_dock_title` <- `affiliate_dock_title`
      }
      if (!is.null(`affiliate_payment_method`)) {
        if (!(is.character(`affiliate_payment_method`) && length(`affiliate_payment_method`) == 1)) {
          stop(paste("Error! Invalid data for `affiliate_payment_method`. Must be a string:", `affiliate_payment_method`))
        }
        self$`affiliate_payment_method` <- `affiliate_payment_method`
      }
      if (!is.null(`affiliate_paypal`)) {
        if (!(is.character(`affiliate_paypal`) && length(`affiliate_paypal`) == 1)) {
          stop(paste("Error! Invalid data for `affiliate_paypal`. Must be a string:", `affiliate_paypal`))
        }
        self$`affiliate_paypal` <- `affiliate_paypal`
      }
      if (!is.null(`cc`)) {
        if (!(is.character(`cc`) && length(`cc`) == 1)) {
          stop(paste("Error! Invalid data for `cc`. Must be a string:", `cc`))
        }
        self$`cc` <- `cc`
      }
      if (!is.null(`cc_auto`)) {
        if (!(is.character(`cc_auto`) && length(`cc_auto`) == 1)) {
          stop(paste("Error! Invalid data for `cc_auto`. Must be a string:", `cc_auto`))
        }
        self$`cc_auto` <- `cc_auto`
      }
      if (!is.null(`cc_exp`)) {
        if (!(is.character(`cc_exp`) && length(`cc_exp`) == 1)) {
          stop(paste("Error! Invalid data for `cc_exp`. Must be a string:", `cc_exp`))
        }
        self$`cc_exp` <- `cc_exp`
      }
      if (!is.null(`cc_type`)) {
        if (!(is.character(`cc_type`) && length(`cc_type`) == 1)) {
          stop(paste("Error! Invalid data for `cc_type`. Must be a string:", `cc_type`))
        }
        self$`cc_type` <- `cc_type`
      }
      if (!is.null(`cc_whitelist`)) {
        if (!(is.character(`cc_whitelist`) && length(`cc_whitelist`) == 1)) {
          stop(paste("Error! Invalid data for `cc_whitelist`. Must be a string:", `cc_whitelist`))
        }
        self$`cc_whitelist` <- `cc_whitelist`
      }
      if (!is.null(`ccs`)) {
        stopifnot(R6::is.R6(`ccs`))
        self$`ccs` <- `ccs`
      }
      if (!is.null(`ccs_added`)) {
        if (!(is.character(`ccs_added`) && length(`ccs_added`) == 1)) {
          stop(paste("Error! Invalid data for `ccs_added`. Must be a string:", `ccs_added`))
        }
        self$`ccs_added` <- `ccs_added`
      }
      if (!is.null(`company`)) {
        if (!(is.character(`company`) && length(`company`) == 1)) {
          stop(paste("Error! Invalid data for `company`. Must be a string:", `company`))
        }
        self$`company` <- `company`
      }
      if (!is.null(`currency`)) {
        if (!(is.character(`currency`) && length(`currency`) == 1)) {
          stop(paste("Error! Invalid data for `currency`. Must be a string:", `currency`))
        }
        self$`currency` <- `currency`
      }
      if (!is.null(`disable_reinstall`)) {
        if (!(is.character(`disable_reinstall`) && length(`disable_reinstall`) == 1)) {
          stop(paste("Error! Invalid data for `disable_reinstall`. Must be a string:", `disable_reinstall`))
        }
        self$`disable_reinstall` <- `disable_reinstall`
      }
      if (!is.null(`disable_reset`)) {
        if (!(is.character(`disable_reset`) && length(`disable_reset`) == 1)) {
          stop(paste("Error! Invalid data for `disable_reset`. Must be a string:", `disable_reset`))
        }
        self$`disable_reset` <- `disable_reset`
      }
      if (!is.null(`email`)) {
        if (!(is.character(`email`) && length(`email`) == 1)) {
          stop(paste("Error! Invalid data for `email`. Must be a string:", `email`))
        }
        self$`email` <- `email`
      }
      if (!is.null(`email_abuse`)) {
        if (!(is.character(`email_abuse`) && length(`email_abuse`) == 1)) {
          stop(paste("Error! Invalid data for `email_abuse`. Must be a string:", `email_abuse`))
        }
        self$`email_abuse` <- `email_abuse`
      }
      if (!is.null(`email_settings`)) {
        stopifnot(R6::is.R6(`email_settings`))
        self$`email_settings` <- `email_settings`
      }
      if (!is.null(`extra`)) {
        stopifnot(R6::is.R6(`extra`))
        self$`extra` <- `extra`
      }
      if (!is.null(`facebook_id`)) {
        if (!(is.character(`facebook_id`) && length(`facebook_id`) == 1)) {
          stop(paste("Error! Invalid data for `facebook_id`. Must be a string:", `facebook_id`))
        }
        self$`facebook_id` <- `facebook_id`
      }
      if (!is.null(`facebook_url`)) {
        if (!(is.character(`facebook_url`) && length(`facebook_url`) == 1)) {
          stop(paste("Error! Invalid data for `facebook_url`. Must be a string:", `facebook_url`))
        }
        self$`facebook_url` <- `facebook_url`
      }
      if (!is.null(`firstname`)) {
        if (!(is.character(`firstname`) && length(`firstname`) == 1)) {
          stop(paste("Error! Invalid data for `firstname`. Must be a string:", `firstname`))
        }
        self$`firstname` <- `firstname`
      }
      if (!is.null(`fraudrecord`)) {
        stopifnot(R6::is.R6(`fraudrecord`))
        self$`fraudrecord` <- `fraudrecord`
      }
      if (!is.null(`github_id`)) {
        if (!(is.character(`github_id`) && length(`github_id`) == 1)) {
          stop(paste("Error! Invalid data for `github_id`. Must be a string:", `github_id`))
        }
        self$`github_id` <- `github_id`
      }
      if (!is.null(`github_url`)) {
        if (!(is.character(`github_url`) && length(`github_url`) == 1)) {
          stop(paste("Error! Invalid data for `github_url`. Must be a string:", `github_url`))
        }
        self$`github_url` <- `github_url`
      }
      if (!is.null(`google_id`)) {
        if (!(is.character(`google_id`) && length(`google_id`) == 1)) {
          stop(paste("Error! Invalid data for `google_id`. Must be a string:", `google_id`))
        }
        self$`google_id` <- `google_id`
      }
      if (!is.null(`google_url`)) {
        if (!(is.character(`google_url`) && length(`google_url`) == 1)) {
          stop(paste("Error! Invalid data for `google_url`. Must be a string:", `google_url`))
        }
        self$`google_url` <- `google_url`
      }
      if (!is.null(`innertell_id`)) {
        if (!(is.character(`innertell_id`) && length(`innertell_id`) == 1)) {
          stop(paste("Error! Invalid data for `innertell_id`. Must be a string:", `innertell_id`))
        }
        self$`innertell_id` <- `innertell_id`
      }
      if (!is.null(`lastname`)) {
        if (!(is.character(`lastname`) && length(`lastname`) == 1)) {
          stop(paste("Error! Invalid data for `lastname`. Must be a string:", `lastname`))
        }
        self$`lastname` <- `lastname`
      }
      if (!is.null(`locale`)) {
        if (!(is.character(`locale`) && length(`locale`) == 1)) {
          stop(paste("Error! Invalid data for `locale`. Must be a string:", `locale`))
        }
        self$`locale` <- `locale`
      }
      if (!is.null(`maxmind`)) {
        stopifnot(R6::is.R6(`maxmind`))
        self$`maxmind` <- `maxmind`
      }
      if (!is.null(`maxmind_score`)) {
        if (!(is.character(`maxmind_score`) && length(`maxmind_score`) == 1)) {
          stop(paste("Error! Invalid data for `maxmind_score`. Must be a string:", `maxmind_score`))
        }
        self$`maxmind_score` <- `maxmind_score`
      }
      if (!is.null(`mb_id`)) {
        if (!(is.character(`mb_id`) && length(`mb_id`) == 1)) {
          stop(paste("Error! Invalid data for `mb_id`. Must be a string:", `mb_id`))
        }
        self$`mb_id` <- `mb_id`
      }
      if (!is.null(`modernbill_id`)) {
        if (!(is.character(`modernbill_id`) && length(`modernbill_id`) == 1)) {
          stop(paste("Error! Invalid data for `modernbill_id`. Must be a string:", `modernbill_id`))
        }
        self$`modernbill_id` <- `modernbill_id`
      }
      if (!is.null(`picture`)) {
        if (!(is.character(`picture`) && length(`picture`) == 1)) {
          stop(paste("Error! Invalid data for `picture`. Must be a string:", `picture`))
        }
        self$`picture` <- `picture`
      }
      if (!is.null(`referrer_coupon`)) {
        if (!(is.character(`referrer_coupon`) && length(`referrer_coupon`) == 1)) {
          stop(paste("Error! Invalid data for `referrer_coupon`. Must be a string:", `referrer_coupon`))
        }
        self$`referrer_coupon` <- `referrer_coupon`
      }
      if (!is.null(`reseller_markup`)) {
        if (!(is.character(`reseller_markup`) && length(`reseller_markup`) == 1)) {
          stop(paste("Error! Invalid data for `reseller_markup`. Must be a string:", `reseller_markup`))
        }
        self$`reseller_markup` <- `reseller_markup`
      }
      if (!is.null(`username`)) {
        if (!(is.character(`username`) && length(`username`) == 1)) {
          stop(paste("Error! Invalid data for `username`. Must be a string:", `username`))
        }
        self$`username` <- `username`
      }
      if (!is.null(`ssh_key`)) {
        if (!(is.character(`ssh_key`) && length(`ssh_key`) == 1)) {
          stop(paste("Error! Invalid data for `ssh_key`. Must be a string:", `ssh_key`))
        }
        self$`ssh_key` <- `ssh_key`
      }
      if (!is.null(`ssh_key_wrapped`)) {
        if (!(is.character(`ssh_key_wrapped`) && length(`ssh_key_wrapped`) == 1)) {
          stop(paste("Error! Invalid data for `ssh_key_wrapped`. Must be a string:", `ssh_key_wrapped`))
        }
        self$`ssh_key_wrapped` <- `ssh_key_wrapped`
      }
      if (!is.null(`api_key`)) {
        if (!(is.character(`api_key`) && length(`api_key`) == 1)) {
          stop(paste("Error! Invalid data for `api_key`. Must be a string:", `api_key`))
        }
        self$`api_key` <- `api_key`
      }
      if (!is.null(`api_key_wrapped`)) {
        if (!(is.character(`api_key_wrapped`) && length(`api_key_wrapped`) == 1)) {
          stop(paste("Error! Invalid data for `api_key_wrapped`. Must be a string:", `api_key_wrapped`))
        }
        self$`api_key_wrapped` <- `api_key_wrapped`
      }
      if (!is.null(`2fa_google_key`)) {
        if (!(is.character(`2fa_google_key`) && length(`2fa_google_key`) == 1)) {
          stop(paste("Error! Invalid data for `2fa_google_key`. Must be a string:", `2fa_google_key`))
        }
        self$`2fa_google_key` <- `2fa_google_key`
      }
      if (!is.null(`2fa_google_enabled`)) {
        if (!(is.logical(`2fa_google_enabled`) && length(`2fa_google_enabled`) == 1)) {
          stop(paste("Error! Invalid data for `2fa_google_enabled`. Must be a boolean:", `2fa_google_enabled`))
        }
        self$`2fa_google_enabled` <- `2fa_google_enabled`
      }
      if (!is.null(`2fa_google`)) {
        if (!(is.numeric(`2fa_google`) && length(`2fa_google`) == 1)) {
          stop(paste("Error! Invalid data for `2fa_google`. Must be an integer:", `2fa_google`))
        }
        self$`2fa_google` <- `2fa_google`
      }
      if (!is.null(`2fa_google_split`)) {
        if (!(is.character(`2fa_google_split`) && length(`2fa_google_split`) == 1)) {
          stop(paste("Error! Invalid data for `2fa_google_split`. Must be a string:", `2fa_google_split`))
        }
        self$`2fa_google_split` <- `2fa_google_split`
      }
      if (!is.null(`2fa_google_qr`)) {
        if (!(is.character(`2fa_google_qr`) && length(`2fa_google_qr`) == 1)) {
          stop(paste("Error! Invalid data for `2fa_google_qr`. Must be a string:", `2fa_google_qr`))
        }
        self$`2fa_google_qr` <- `2fa_google_qr`
      }
    },

    #' @description
    #' Convert to an R object. This method is deprecated. Use `toSimpleType()` instead.
    toJSON = function() {
      .Deprecated(new = "toSimpleType", msg = "Use the '$toSimpleType()' method instead since that is more clearly named. Use '$toJSONString()' to get a JSON string")
      return(self$toSimpleType())
    },

    #' @description
    #' Convert to a List
    #'
    #' Convert the R6 object to a list to work more easily with other tooling.
    #'
    #' @return AccountInfoData as a base R list.
    #' @examples
    #' # convert array of AccountInfoData (x) to a data frame
    #' \dontrun{
    #' library(purrr)
    #' library(tibble)
    #' df <- x |> map(\(y)y$toList()) |> map(as_tibble) |> list_rbind()
    #' df
    #' }
    toList = function() {
      return(self$toSimpleType())
    },

    #' @description
    #' Convert AccountInfoData to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      AccountInfoDataObject <- list()
      if (!is.null(self$`group`)) {
        AccountInfoDataObject[["group"]] <-
          self$`group`
      }
      if (!is.null(self$`address`)) {
        AccountInfoDataObject[["address"]] <-
          self$`address`
      }
      if (!is.null(self$`city`)) {
        AccountInfoDataObject[["city"]] <-
          self$`city`
      }
      if (!is.null(self$`country`)) {
        AccountInfoDataObject[["country"]] <-
          self$`country`
      }
      if (!is.null(self$`disable_cc`)) {
        AccountInfoDataObject[["disable_cc"]] <-
          self$`disable_cc`
      }
      if (!is.null(self$`fraudrecord_score`)) {
        AccountInfoDataObject[["fraudrecord_score"]] <-
          self$`fraudrecord_score`
      }
      if (!is.null(self$`ima`)) {
        AccountInfoDataObject[["ima"]] <-
          self$`ima`
      }
      if (!is.null(self$`name`)) {
        AccountInfoDataObject[["name"]] <-
          self$`name`
      }
      if (!is.null(self$`payment_method`)) {
        AccountInfoDataObject[["payment_method"]] <-
          self$`payment_method`
      }
      if (!is.null(self$`phone`)) {
        AccountInfoDataObject[["phone"]] <-
          self$`phone`
      }
      if (!is.null(self$`pin`)) {
        AccountInfoDataObject[["pin"]] <-
          self$`pin`
      }
      if (!is.null(self$`state`)) {
        AccountInfoDataObject[["state"]] <-
          self$`state`
      }
      if (!is.null(self$`status`)) {
        AccountInfoDataObject[["status"]] <-
          self$`status`
      }
      if (!is.null(self$`zip`)) {
        AccountInfoDataObject[["zip"]] <-
          self$`zip`
      }
      if (!is.null(self$`account_id`)) {
        AccountInfoDataObject[["account_id"]] <-
          self$`account_id`
      }
      if (!is.null(self$`account_lid`)) {
        AccountInfoDataObject[["account_lid"]] <-
          self$`account_lid`
      }
      if (!is.null(self$`address2`)) {
        AccountInfoDataObject[["address2"]] <-
          self$`address2`
      }
      if (!is.null(self$`affiliate_dock_description`)) {
        AccountInfoDataObject[["affiliate_dock_description"]] <-
          self$`affiliate_dock_description`
      }
      if (!is.null(self$`affiliate_dock_title`)) {
        AccountInfoDataObject[["affiliate_dock_title"]] <-
          self$`affiliate_dock_title`
      }
      if (!is.null(self$`affiliate_payment_method`)) {
        AccountInfoDataObject[["affiliate_payment_method"]] <-
          self$`affiliate_payment_method`
      }
      if (!is.null(self$`affiliate_paypal`)) {
        AccountInfoDataObject[["affiliate_paypal"]] <-
          self$`affiliate_paypal`
      }
      if (!is.null(self$`cc`)) {
        AccountInfoDataObject[["cc"]] <-
          self$`cc`
      }
      if (!is.null(self$`cc_auto`)) {
        AccountInfoDataObject[["cc_auto"]] <-
          self$`cc_auto`
      }
      if (!is.null(self$`cc_exp`)) {
        AccountInfoDataObject[["cc_exp"]] <-
          self$`cc_exp`
      }
      if (!is.null(self$`cc_type`)) {
        AccountInfoDataObject[["cc_type"]] <-
          self$`cc_type`
      }
      if (!is.null(self$`cc_whitelist`)) {
        AccountInfoDataObject[["cc_whitelist"]] <-
          self$`cc_whitelist`
      }
      if (!is.null(self$`ccs`)) {
        AccountInfoDataObject[["ccs"]] <-
          self$extractSimpleType(self$`ccs`)
      }
      if (!is.null(self$`ccs_added`)) {
        AccountInfoDataObject[["ccs_added"]] <-
          self$`ccs_added`
      }
      if (!is.null(self$`company`)) {
        AccountInfoDataObject[["company"]] <-
          self$`company`
      }
      if (!is.null(self$`currency`)) {
        AccountInfoDataObject[["currency"]] <-
          self$`currency`
      }
      if (!is.null(self$`disable_reinstall`)) {
        AccountInfoDataObject[["disable_reinstall"]] <-
          self$`disable_reinstall`
      }
      if (!is.null(self$`disable_reset`)) {
        AccountInfoDataObject[["disable_reset"]] <-
          self$`disable_reset`
      }
      if (!is.null(self$`email`)) {
        AccountInfoDataObject[["email"]] <-
          self$`email`
      }
      if (!is.null(self$`email_abuse`)) {
        AccountInfoDataObject[["email_abuse"]] <-
          self$`email_abuse`
      }
      if (!is.null(self$`email_settings`)) {
        AccountInfoDataObject[["email_settings"]] <-
          self$extractSimpleType(self$`email_settings`)
      }
      if (!is.null(self$`extra`)) {
        AccountInfoDataObject[["extra"]] <-
          self$extractSimpleType(self$`extra`)
      }
      if (!is.null(self$`facebook_id`)) {
        AccountInfoDataObject[["facebook_id"]] <-
          self$`facebook_id`
      }
      if (!is.null(self$`facebook_url`)) {
        AccountInfoDataObject[["facebook_url"]] <-
          self$`facebook_url`
      }
      if (!is.null(self$`firstname`)) {
        AccountInfoDataObject[["firstname"]] <-
          self$`firstname`
      }
      if (!is.null(self$`fraudrecord`)) {
        AccountInfoDataObject[["fraudrecord"]] <-
          self$extractSimpleType(self$`fraudrecord`)
      }
      if (!is.null(self$`github_id`)) {
        AccountInfoDataObject[["github_id"]] <-
          self$`github_id`
      }
      if (!is.null(self$`github_url`)) {
        AccountInfoDataObject[["github_url"]] <-
          self$`github_url`
      }
      if (!is.null(self$`google_id`)) {
        AccountInfoDataObject[["google_id"]] <-
          self$`google_id`
      }
      if (!is.null(self$`google_url`)) {
        AccountInfoDataObject[["google_url"]] <-
          self$`google_url`
      }
      if (!is.null(self$`innertell_id`)) {
        AccountInfoDataObject[["innertell_id"]] <-
          self$`innertell_id`
      }
      if (!is.null(self$`lastname`)) {
        AccountInfoDataObject[["lastname"]] <-
          self$`lastname`
      }
      if (!is.null(self$`locale`)) {
        AccountInfoDataObject[["locale"]] <-
          self$`locale`
      }
      if (!is.null(self$`maxmind`)) {
        AccountInfoDataObject[["maxmind"]] <-
          self$extractSimpleType(self$`maxmind`)
      }
      if (!is.null(self$`maxmind_score`)) {
        AccountInfoDataObject[["maxmind_score"]] <-
          self$`maxmind_score`
      }
      if (!is.null(self$`mb_id`)) {
        AccountInfoDataObject[["mb_id"]] <-
          self$`mb_id`
      }
      if (!is.null(self$`modernbill_id`)) {
        AccountInfoDataObject[["modernbill_id"]] <-
          self$`modernbill_id`
      }
      if (!is.null(self$`picture`)) {
        AccountInfoDataObject[["picture"]] <-
          self$`picture`
      }
      if (!is.null(self$`referrer_coupon`)) {
        AccountInfoDataObject[["referrer_coupon"]] <-
          self$`referrer_coupon`
      }
      if (!is.null(self$`reseller_markup`)) {
        AccountInfoDataObject[["reseller_markup"]] <-
          self$`reseller_markup`
      }
      if (!is.null(self$`username`)) {
        AccountInfoDataObject[["username"]] <-
          self$`username`
      }
      if (!is.null(self$`ssh_key`)) {
        AccountInfoDataObject[["ssh_key"]] <-
          self$`ssh_key`
      }
      if (!is.null(self$`ssh_key_wrapped`)) {
        AccountInfoDataObject[["ssh_key_wrapped"]] <-
          self$`ssh_key_wrapped`
      }
      if (!is.null(self$`api_key`)) {
        AccountInfoDataObject[["api_key"]] <-
          self$`api_key`
      }
      if (!is.null(self$`api_key_wrapped`)) {
        AccountInfoDataObject[["api_key_wrapped"]] <-
          self$`api_key_wrapped`
      }
      if (!is.null(self$`2fa_google_key`)) {
        AccountInfoDataObject[["2fa_google_key"]] <-
          self$`2fa_google_key`
      }
      if (!is.null(self$`2fa_google_enabled`)) {
        AccountInfoDataObject[["2fa_google_enabled"]] <-
          self$`2fa_google_enabled`
      }
      if (!is.null(self$`2fa_google`)) {
        AccountInfoDataObject[["2fa_google"]] <-
          self$`2fa_google`
      }
      if (!is.null(self$`2fa_google_split`)) {
        AccountInfoDataObject[["2fa_google_split"]] <-
          self$`2fa_google_split`
      }
      if (!is.null(self$`2fa_google_qr`)) {
        AccountInfoDataObject[["2fa_google_qr"]] <-
          self$`2fa_google_qr`
      }
      return(AccountInfoDataObject)
    },

    extractSimpleType = function(x) {
      if (R6::is.R6(x)) {
        return(x$toSimpleType())
      } else if (!self$hasNestedR6(x)) {
        return(x)
      }
      lapply(x, self$extractSimpleType)
    },

    hasNestedR6 = function(x) {
      if (R6::is.R6(x)) {
        return(TRUE)
      }
      if (is.list(x)) {
        for (item in x) {
          if (self$hasNestedR6(item)) {
            return(TRUE)
          }
        }
      }
      FALSE
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountInfoData
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountInfoData
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`group`)) {
        self$`group` <- this_object$`group`
      }
      if (!is.null(this_object$`address`)) {
        self$`address` <- this_object$`address`
      }
      if (!is.null(this_object$`city`)) {
        self$`city` <- this_object$`city`
      }
      if (!is.null(this_object$`country`)) {
        self$`country` <- this_object$`country`
      }
      if (!is.null(this_object$`disable_cc`)) {
        self$`disable_cc` <- this_object$`disable_cc`
      }
      if (!is.null(this_object$`fraudrecord_score`)) {
        self$`fraudrecord_score` <- this_object$`fraudrecord_score`
      }
      if (!is.null(this_object$`ima`)) {
        self$`ima` <- this_object$`ima`
      }
      if (!is.null(this_object$`name`)) {
        self$`name` <- this_object$`name`
      }
      if (!is.null(this_object$`payment_method`)) {
        self$`payment_method` <- this_object$`payment_method`
      }
      if (!is.null(this_object$`phone`)) {
        self$`phone` <- this_object$`phone`
      }
      if (!is.null(this_object$`pin`)) {
        self$`pin` <- this_object$`pin`
      }
      if (!is.null(this_object$`state`)) {
        self$`state` <- this_object$`state`
      }
      if (!is.null(this_object$`status`)) {
        self$`status` <- this_object$`status`
      }
      if (!is.null(this_object$`zip`)) {
        self$`zip` <- this_object$`zip`
      }
      if (!is.null(this_object$`account_id`)) {
        self$`account_id` <- this_object$`account_id`
      }
      if (!is.null(this_object$`account_lid`)) {
        self$`account_lid` <- this_object$`account_lid`
      }
      if (!is.null(this_object$`address2`)) {
        self$`address2` <- this_object$`address2`
      }
      if (!is.null(this_object$`affiliate_dock_description`)) {
        self$`affiliate_dock_description` <- this_object$`affiliate_dock_description`
      }
      if (!is.null(this_object$`affiliate_dock_title`)) {
        self$`affiliate_dock_title` <- this_object$`affiliate_dock_title`
      }
      if (!is.null(this_object$`affiliate_payment_method`)) {
        self$`affiliate_payment_method` <- this_object$`affiliate_payment_method`
      }
      if (!is.null(this_object$`affiliate_paypal`)) {
        self$`affiliate_paypal` <- this_object$`affiliate_paypal`
      }
      if (!is.null(this_object$`cc`)) {
        self$`cc` <- this_object$`cc`
      }
      if (!is.null(this_object$`cc_auto`)) {
        self$`cc_auto` <- this_object$`cc_auto`
      }
      if (!is.null(this_object$`cc_exp`)) {
        self$`cc_exp` <- this_object$`cc_exp`
      }
      if (!is.null(this_object$`cc_type`)) {
        self$`cc_type` <- this_object$`cc_type`
      }
      if (!is.null(this_object$`cc_whitelist`)) {
        self$`cc_whitelist` <- this_object$`cc_whitelist`
      }
      if (!is.null(this_object$`ccs`)) {
        `ccs_object` <- AccountInfoDataCcs$new()
        `ccs_object`$fromJSON(jsonlite::toJSON(this_object$`ccs`, auto_unbox = TRUE, digits = NA))
        self$`ccs` <- `ccs_object`
      }
      if (!is.null(this_object$`ccs_added`)) {
        self$`ccs_added` <- this_object$`ccs_added`
      }
      if (!is.null(this_object$`company`)) {
        self$`company` <- this_object$`company`
      }
      if (!is.null(this_object$`currency`)) {
        self$`currency` <- this_object$`currency`
      }
      if (!is.null(this_object$`disable_reinstall`)) {
        self$`disable_reinstall` <- this_object$`disable_reinstall`
      }
      if (!is.null(this_object$`disable_reset`)) {
        self$`disable_reset` <- this_object$`disable_reset`
      }
      if (!is.null(this_object$`email`)) {
        self$`email` <- this_object$`email`
      }
      if (!is.null(this_object$`email_abuse`)) {
        self$`email_abuse` <- this_object$`email_abuse`
      }
      if (!is.null(this_object$`email_settings`)) {
        `email_settings_object` <- AccountInfoDataEmailSettings$new()
        `email_settings_object`$fromJSON(jsonlite::toJSON(this_object$`email_settings`, auto_unbox = TRUE, digits = NA))
        self$`email_settings` <- `email_settings_object`
      }
      if (!is.null(this_object$`extra`)) {
        `extra_object` <- AccountInfoDataExtra$new()
        `extra_object`$fromJSON(jsonlite::toJSON(this_object$`extra`, auto_unbox = TRUE, digits = NA))
        self$`extra` <- `extra_object`
      }
      if (!is.null(this_object$`facebook_id`)) {
        self$`facebook_id` <- this_object$`facebook_id`
      }
      if (!is.null(this_object$`facebook_url`)) {
        self$`facebook_url` <- this_object$`facebook_url`
      }
      if (!is.null(this_object$`firstname`)) {
        self$`firstname` <- this_object$`firstname`
      }
      if (!is.null(this_object$`fraudrecord`)) {
        `fraudrecord_object` <- AccountInfoDataFraudrecord$new()
        `fraudrecord_object`$fromJSON(jsonlite::toJSON(this_object$`fraudrecord`, auto_unbox = TRUE, digits = NA))
        self$`fraudrecord` <- `fraudrecord_object`
      }
      if (!is.null(this_object$`github_id`)) {
        self$`github_id` <- this_object$`github_id`
      }
      if (!is.null(this_object$`github_url`)) {
        self$`github_url` <- this_object$`github_url`
      }
      if (!is.null(this_object$`google_id`)) {
        self$`google_id` <- this_object$`google_id`
      }
      if (!is.null(this_object$`google_url`)) {
        self$`google_url` <- this_object$`google_url`
      }
      if (!is.null(this_object$`innertell_id`)) {
        self$`innertell_id` <- this_object$`innertell_id`
      }
      if (!is.null(this_object$`lastname`)) {
        self$`lastname` <- this_object$`lastname`
      }
      if (!is.null(this_object$`locale`)) {
        self$`locale` <- this_object$`locale`
      }
      if (!is.null(this_object$`maxmind`)) {
        `maxmind_object` <- AccountInfoMaxMindResponse$new()
        `maxmind_object`$fromJSON(jsonlite::toJSON(this_object$`maxmind`, auto_unbox = TRUE, digits = NA))
        self$`maxmind` <- `maxmind_object`
      }
      if (!is.null(this_object$`maxmind_score`)) {
        self$`maxmind_score` <- this_object$`maxmind_score`
      }
      if (!is.null(this_object$`mb_id`)) {
        self$`mb_id` <- this_object$`mb_id`
      }
      if (!is.null(this_object$`modernbill_id`)) {
        self$`modernbill_id` <- this_object$`modernbill_id`
      }
      if (!is.null(this_object$`picture`)) {
        self$`picture` <- this_object$`picture`
      }
      if (!is.null(this_object$`referrer_coupon`)) {
        self$`referrer_coupon` <- this_object$`referrer_coupon`
      }
      if (!is.null(this_object$`reseller_markup`)) {
        self$`reseller_markup` <- this_object$`reseller_markup`
      }
      if (!is.null(this_object$`username`)) {
        self$`username` <- this_object$`username`
      }
      if (!is.null(this_object$`ssh_key`)) {
        self$`ssh_key` <- this_object$`ssh_key`
      }
      if (!is.null(this_object$`ssh_key_wrapped`)) {
        self$`ssh_key_wrapped` <- this_object$`ssh_key_wrapped`
      }
      if (!is.null(this_object$`api_key`)) {
        self$`api_key` <- this_object$`api_key`
      }
      if (!is.null(this_object$`api_key_wrapped`)) {
        self$`api_key_wrapped` <- this_object$`api_key_wrapped`
      }
      if (!is.null(this_object$`2fa_google_key`)) {
        self$`2fa_google_key` <- this_object$`2fa_google_key`
      }
      if (!is.null(this_object$`2fa_google_enabled`)) {
        self$`2fa_google_enabled` <- this_object$`2fa_google_enabled`
      }
      if (!is.null(this_object$`2fa_google`)) {
        self$`2fa_google` <- this_object$`2fa_google`
      }
      if (!is.null(this_object$`2fa_google_split`)) {
        self$`2fa_google_split` <- this_object$`2fa_google_split`
      }
      if (!is.null(this_object$`2fa_google_qr`)) {
        self$`2fa_google_qr` <- this_object$`2fa_google_qr`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return AccountInfoData in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of AccountInfoData
    #'
    #' @param input_json the JSON input
    #' @return the instance of AccountInfoData
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`group` <- this_object$`group`
      self$`address` <- this_object$`address`
      self$`city` <- this_object$`city`
      self$`country` <- this_object$`country`
      self$`disable_cc` <- this_object$`disable_cc`
      self$`fraudrecord_score` <- this_object$`fraudrecord_score`
      self$`ima` <- this_object$`ima`
      self$`name` <- this_object$`name`
      self$`payment_method` <- this_object$`payment_method`
      self$`phone` <- this_object$`phone`
      self$`pin` <- this_object$`pin`
      self$`state` <- this_object$`state`
      self$`status` <- this_object$`status`
      self$`zip` <- this_object$`zip`
      self$`account_id` <- this_object$`account_id`
      self$`account_lid` <- this_object$`account_lid`
      self$`address2` <- this_object$`address2`
      self$`affiliate_dock_description` <- this_object$`affiliate_dock_description`
      self$`affiliate_dock_title` <- this_object$`affiliate_dock_title`
      self$`affiliate_payment_method` <- this_object$`affiliate_payment_method`
      self$`affiliate_paypal` <- this_object$`affiliate_paypal`
      self$`cc` <- this_object$`cc`
      self$`cc_auto` <- this_object$`cc_auto`
      self$`cc_exp` <- this_object$`cc_exp`
      self$`cc_type` <- this_object$`cc_type`
      self$`cc_whitelist` <- this_object$`cc_whitelist`
      self$`ccs` <- AccountInfoDataCcs$new()$fromJSON(jsonlite::toJSON(this_object$`ccs`, auto_unbox = TRUE, digits = NA))
      self$`ccs_added` <- this_object$`ccs_added`
      self$`company` <- this_object$`company`
      self$`currency` <- this_object$`currency`
      self$`disable_reinstall` <- this_object$`disable_reinstall`
      self$`disable_reset` <- this_object$`disable_reset`
      self$`email` <- this_object$`email`
      self$`email_abuse` <- this_object$`email_abuse`
      self$`email_settings` <- AccountInfoDataEmailSettings$new()$fromJSON(jsonlite::toJSON(this_object$`email_settings`, auto_unbox = TRUE, digits = NA))
      self$`extra` <- AccountInfoDataExtra$new()$fromJSON(jsonlite::toJSON(this_object$`extra`, auto_unbox = TRUE, digits = NA))
      self$`facebook_id` <- this_object$`facebook_id`
      self$`facebook_url` <- this_object$`facebook_url`
      self$`firstname` <- this_object$`firstname`
      self$`fraudrecord` <- AccountInfoDataFraudrecord$new()$fromJSON(jsonlite::toJSON(this_object$`fraudrecord`, auto_unbox = TRUE, digits = NA))
      self$`github_id` <- this_object$`github_id`
      self$`github_url` <- this_object$`github_url`
      self$`google_id` <- this_object$`google_id`
      self$`google_url` <- this_object$`google_url`
      self$`innertell_id` <- this_object$`innertell_id`
      self$`lastname` <- this_object$`lastname`
      self$`locale` <- this_object$`locale`
      self$`maxmind` <- AccountInfoMaxMindResponse$new()$fromJSON(jsonlite::toJSON(this_object$`maxmind`, auto_unbox = TRUE, digits = NA))
      self$`maxmind_score` <- this_object$`maxmind_score`
      self$`mb_id` <- this_object$`mb_id`
      self$`modernbill_id` <- this_object$`modernbill_id`
      self$`picture` <- this_object$`picture`
      self$`referrer_coupon` <- this_object$`referrer_coupon`
      self$`reseller_markup` <- this_object$`reseller_markup`
      self$`username` <- this_object$`username`
      self$`ssh_key` <- this_object$`ssh_key`
      self$`ssh_key_wrapped` <- this_object$`ssh_key_wrapped`
      self$`api_key` <- this_object$`api_key`
      self$`api_key_wrapped` <- this_object$`api_key_wrapped`
      self$`2fa_google_key` <- this_object$`2fa_google_key`
      self$`2fa_google_enabled` <- this_object$`2fa_google_enabled`
      self$`2fa_google` <- this_object$`2fa_google`
      self$`2fa_google_split` <- this_object$`2fa_google_split`
      self$`2fa_google_qr` <- this_object$`2fa_google_qr`
      self
    },

    #' @description
    #' Validate JSON input with respect to AccountInfoData and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of AccountInfoData
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      TRUE
    },

    #' @description
    #' Return a list of invalid fields (if any).
    #'
    #' @return A list of invalid fields (if any).
    getInvalidFields = function() {
      invalid_fields <- list()
      invalid_fields
    },

    #' @description
    #' Print the object
    print = function() {
      print(jsonlite::prettify(self$toJSONString()))
      invisible(self)
    }
  ),
  # Lock the class to prevent modifications to the method or field
  lock_class = TRUE
)
## Uncomment below to unlock the class to allow modifications of the method or field
# AccountInfoData$unlock()
#
## Below is an example to define the print function
# AccountInfoData$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# AccountInfoData$lock()

