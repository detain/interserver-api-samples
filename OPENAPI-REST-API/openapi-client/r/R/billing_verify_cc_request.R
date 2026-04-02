#' Create a new BillingVerifyCcRequest
#'
#' @description
#' Payload for verifying a credit card through the verification flow.
#'
#' @docType class
#' @title BillingVerifyCcRequest
#' @description BillingVerifyCcRequest Class
#' @format An \code{R6Class} generator object
#' @field idx Card index to verify. integer [optional]
#' @field cc_ccv2 CVV code for verification. character [optional]
#' @field cc_amount1 First micro-charge amount for verification. character [optional]
#' @field cc_amount2 Second micro-charge amount for verification. character [optional]
#' @field terms Whether terms were accepted for verification. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
BillingVerifyCcRequest <- R6::R6Class(
  "BillingVerifyCcRequest",
  public = list(
    `idx` = NULL,
    `cc_ccv2` = NULL,
    `cc_amount1` = NULL,
    `cc_amount2` = NULL,
    `terms` = NULL,

    #' @description
    #' Initialize a new BillingVerifyCcRequest class.
    #'
    #' @param idx Card index to verify.
    #' @param cc_ccv2 CVV code for verification.
    #' @param cc_amount1 First micro-charge amount for verification.
    #' @param cc_amount2 Second micro-charge amount for verification.
    #' @param terms Whether terms were accepted for verification.
    #' @param ... Other optional arguments.
    initialize = function(`idx` = NULL, `cc_ccv2` = NULL, `cc_amount1` = NULL, `cc_amount2` = NULL, `terms` = NULL, ...) {
      if (!is.null(`idx`)) {
        if (!(is.numeric(`idx`) && length(`idx`) == 1)) {
          stop(paste("Error! Invalid data for `idx`. Must be an integer:", `idx`))
        }
        self$`idx` <- `idx`
      }
      if (!is.null(`cc_ccv2`)) {
        if (!(is.character(`cc_ccv2`) && length(`cc_ccv2`) == 1)) {
          stop(paste("Error! Invalid data for `cc_ccv2`. Must be a string:", `cc_ccv2`))
        }
        self$`cc_ccv2` <- `cc_ccv2`
      }
      if (!is.null(`cc_amount1`)) {
        if (!(is.character(`cc_amount1`) && length(`cc_amount1`) == 1)) {
          stop(paste("Error! Invalid data for `cc_amount1`. Must be a string:", `cc_amount1`))
        }
        self$`cc_amount1` <- `cc_amount1`
      }
      if (!is.null(`cc_amount2`)) {
        if (!(is.character(`cc_amount2`) && length(`cc_amount2`) == 1)) {
          stop(paste("Error! Invalid data for `cc_amount2`. Must be a string:", `cc_amount2`))
        }
        self$`cc_amount2` <- `cc_amount2`
      }
      if (!is.null(`terms`)) {
        if (!(is.logical(`terms`) && length(`terms`) == 1)) {
          stop(paste("Error! Invalid data for `terms`. Must be a boolean:", `terms`))
        }
        self$`terms` <- `terms`
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
    #' @return BillingVerifyCcRequest as a base R list.
    #' @examples
    #' # convert array of BillingVerifyCcRequest (x) to a data frame
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
    #' Convert BillingVerifyCcRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      BillingVerifyCcRequestObject <- list()
      if (!is.null(self$`idx`)) {
        BillingVerifyCcRequestObject[["idx"]] <-
          self$`idx`
      }
      if (!is.null(self$`cc_ccv2`)) {
        BillingVerifyCcRequestObject[["cc_ccv2"]] <-
          self$`cc_ccv2`
      }
      if (!is.null(self$`cc_amount1`)) {
        BillingVerifyCcRequestObject[["cc_amount1"]] <-
          self$`cc_amount1`
      }
      if (!is.null(self$`cc_amount2`)) {
        BillingVerifyCcRequestObject[["cc_amount2"]] <-
          self$`cc_amount2`
      }
      if (!is.null(self$`terms`)) {
        BillingVerifyCcRequestObject[["terms"]] <-
          self$`terms`
      }
      return(BillingVerifyCcRequestObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of BillingVerifyCcRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of BillingVerifyCcRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`idx`)) {
        self$`idx` <- this_object$`idx`
      }
      if (!is.null(this_object$`cc_ccv2`)) {
        self$`cc_ccv2` <- this_object$`cc_ccv2`
      }
      if (!is.null(this_object$`cc_amount1`)) {
        self$`cc_amount1` <- this_object$`cc_amount1`
      }
      if (!is.null(this_object$`cc_amount2`)) {
        self$`cc_amount2` <- this_object$`cc_amount2`
      }
      if (!is.null(this_object$`terms`)) {
        self$`terms` <- this_object$`terms`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return BillingVerifyCcRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of BillingVerifyCcRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of BillingVerifyCcRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`idx` <- this_object$`idx`
      self$`cc_ccv2` <- this_object$`cc_ccv2`
      self$`cc_amount1` <- this_object$`cc_amount1`
      self$`cc_amount2` <- this_object$`cc_amount2`
      self$`terms` <- this_object$`terms`
      self
    },

    #' @description
    #' Validate JSON input with respect to BillingVerifyCcRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of BillingVerifyCcRequest
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
# BillingVerifyCcRequest$unlock()
#
## Below is an example to define the print function
# BillingVerifyCcRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# BillingVerifyCcRequest$lock()

