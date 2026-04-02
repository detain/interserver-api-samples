#' Create a new AffiliatePaymentSetup
#'
#' @description
#' Affiliate Payment Setup.  Here you can set if you want the payments to go to `prepay` or `paypal` and the PayPal email address.
#'
#' @docType class
#' @title AffiliatePaymentSetup
#' @description AffiliatePaymentSetup Class
#' @format An \code{R6Class} generator object
#' @field affiliate_paypal  character [optional]
#' @field affiliate_payment_method  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AffiliatePaymentSetup <- R6::R6Class(
  "AffiliatePaymentSetup",
  public = list(
    `affiliate_paypal` = NULL,
    `affiliate_payment_method` = NULL,

    #' @description
    #' Initialize a new AffiliatePaymentSetup class.
    #'
    #' @param affiliate_paypal affiliate_paypal
    #' @param affiliate_payment_method affiliate_payment_method
    #' @param ... Other optional arguments.
    initialize = function(`affiliate_paypal` = NULL, `affiliate_payment_method` = NULL, ...) {
      if (!is.null(`affiliate_paypal`)) {
        if (!(is.character(`affiliate_paypal`) && length(`affiliate_paypal`) == 1)) {
          stop(paste("Error! Invalid data for `affiliate_paypal`. Must be a string:", `affiliate_paypal`))
        }
        self$`affiliate_paypal` <- `affiliate_paypal`
      }
      if (!is.null(`affiliate_payment_method`)) {
        if (!(is.character(`affiliate_payment_method`) && length(`affiliate_payment_method`) == 1)) {
          stop(paste("Error! Invalid data for `affiliate_payment_method`. Must be a string:", `affiliate_payment_method`))
        }
        self$`affiliate_payment_method` <- `affiliate_payment_method`
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
    #' @return AffiliatePaymentSetup as a base R list.
    #' @examples
    #' # convert array of AffiliatePaymentSetup (x) to a data frame
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
    #' Convert AffiliatePaymentSetup to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      AffiliatePaymentSetupObject <- list()
      if (!is.null(self$`affiliate_paypal`)) {
        AffiliatePaymentSetupObject[["affiliate_paypal"]] <-
          self$`affiliate_paypal`
      }
      if (!is.null(self$`affiliate_payment_method`)) {
        AffiliatePaymentSetupObject[["affiliate_payment_method"]] <-
          self$`affiliate_payment_method`
      }
      return(AffiliatePaymentSetupObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of AffiliatePaymentSetup
    #'
    #' @param input_json the JSON input
    #' @return the instance of AffiliatePaymentSetup
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`affiliate_paypal`)) {
        self$`affiliate_paypal` <- this_object$`affiliate_paypal`
      }
      if (!is.null(this_object$`affiliate_payment_method`)) {
        self$`affiliate_payment_method` <- this_object$`affiliate_payment_method`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return AffiliatePaymentSetup in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of AffiliatePaymentSetup
    #'
    #' @param input_json the JSON input
    #' @return the instance of AffiliatePaymentSetup
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`affiliate_paypal` <- this_object$`affiliate_paypal`
      self$`affiliate_payment_method` <- this_object$`affiliate_payment_method`
      self
    },

    #' @description
    #' Validate JSON input with respect to AffiliatePaymentSetup and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of AffiliatePaymentSetup
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
# AffiliatePaymentSetup$unlock()
#
## Below is an example to define the print function
# AffiliatePaymentSetup$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# AffiliatePaymentSetup$lock()

