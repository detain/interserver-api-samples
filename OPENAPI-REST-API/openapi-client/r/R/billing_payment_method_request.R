#' Create a new BillingPaymentMethodRequest
#'
#' @description
#' Payload for updating the default account payment method.
#'
#' @docType class
#' @title BillingPaymentMethodRequest
#' @description BillingPaymentMethodRequest Class
#' @format An \code{R6Class} generator object
#' @field payment_method Payment method identifier (cc, paypal, or cc{index}). character [optional]
#' @field cc_auto Whether automatic credit card payments are enabled. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
BillingPaymentMethodRequest <- R6::R6Class(
  "BillingPaymentMethodRequest",
  public = list(
    `payment_method` = NULL,
    `cc_auto` = NULL,

    #' @description
    #' Initialize a new BillingPaymentMethodRequest class.
    #'
    #' @param payment_method Payment method identifier (cc, paypal, or cc{index}).
    #' @param cc_auto Whether automatic credit card payments are enabled.
    #' @param ... Other optional arguments.
    initialize = function(`payment_method` = NULL, `cc_auto` = NULL, ...) {
      if (!is.null(`payment_method`)) {
        if (!(is.character(`payment_method`) && length(`payment_method`) == 1)) {
          stop(paste("Error! Invalid data for `payment_method`. Must be a string:", `payment_method`))
        }
        self$`payment_method` <- `payment_method`
      }
      if (!is.null(`cc_auto`)) {
        if (!(is.character(`cc_auto`) && length(`cc_auto`) == 1)) {
          stop(paste("Error! Invalid data for `cc_auto`. Must be a string:", `cc_auto`))
        }
        self$`cc_auto` <- `cc_auto`
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
    #' @return BillingPaymentMethodRequest as a base R list.
    #' @examples
    #' # convert array of BillingPaymentMethodRequest (x) to a data frame
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
    #' Convert BillingPaymentMethodRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      BillingPaymentMethodRequestObject <- list()
      if (!is.null(self$`payment_method`)) {
        BillingPaymentMethodRequestObject[["payment_method"]] <-
          self$`payment_method`
      }
      if (!is.null(self$`cc_auto`)) {
        BillingPaymentMethodRequestObject[["cc_auto"]] <-
          self$`cc_auto`
      }
      return(BillingPaymentMethodRequestObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of BillingPaymentMethodRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of BillingPaymentMethodRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`payment_method`)) {
        self$`payment_method` <- this_object$`payment_method`
      }
      if (!is.null(this_object$`cc_auto`)) {
        self$`cc_auto` <- this_object$`cc_auto`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return BillingPaymentMethodRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of BillingPaymentMethodRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of BillingPaymentMethodRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`payment_method` <- this_object$`payment_method`
      self$`cc_auto` <- this_object$`cc_auto`
      self
    },

    #' @description
    #' Validate JSON input with respect to BillingPaymentMethodRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of BillingPaymentMethodRequest
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
# BillingPaymentMethodRequest$unlock()
#
## Below is an example to define the print function
# BillingPaymentMethodRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# BillingPaymentMethodRequest$lock()

