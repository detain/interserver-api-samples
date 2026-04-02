#' Create a new BillingPrepayRequest
#'
#' @description
#' Request payload for creating a new prepay balance.
#'
#' @docType class
#' @title BillingPrepayRequest
#' @description BillingPrepayRequest Class
#' @format An \code{R6Class} generator object
#' @field module Module the prepay should be applied to (for example `default`). character [optional]
#' @field amount Amount to add to prepay balance. Minimum is $10. numeric [optional]
#' @field automatic_use Whether the prepay balance should be used automatically. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
BillingPrepayRequest <- R6::R6Class(
  "BillingPrepayRequest",
  public = list(
    `module` = NULL,
    `amount` = NULL,
    `automatic_use` = NULL,

    #' @description
    #' Initialize a new BillingPrepayRequest class.
    #'
    #' @param module Module the prepay should be applied to (for example `default`).
    #' @param amount Amount to add to prepay balance. Minimum is $10.
    #' @param automatic_use Whether the prepay balance should be used automatically.
    #' @param ... Other optional arguments.
    initialize = function(`module` = NULL, `amount` = NULL, `automatic_use` = NULL, ...) {
      if (!is.null(`module`)) {
        if (!(is.character(`module`) && length(`module`) == 1)) {
          stop(paste("Error! Invalid data for `module`. Must be a string:", `module`))
        }
        self$`module` <- `module`
      }
      if (!is.null(`amount`)) {
        self$`amount` <- `amount`
      }
      if (!is.null(`automatic_use`)) {
        if (!(is.character(`automatic_use`) && length(`automatic_use`) == 1)) {
          stop(paste("Error! Invalid data for `automatic_use`. Must be a string:", `automatic_use`))
        }
        self$`automatic_use` <- `automatic_use`
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
    #' @return BillingPrepayRequest as a base R list.
    #' @examples
    #' # convert array of BillingPrepayRequest (x) to a data frame
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
    #' Convert BillingPrepayRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      BillingPrepayRequestObject <- list()
      if (!is.null(self$`module`)) {
        BillingPrepayRequestObject[["module"]] <-
          self$`module`
      }
      if (!is.null(self$`amount`)) {
        BillingPrepayRequestObject[["amount"]] <-
          self$`amount`
      }
      if (!is.null(self$`automatic_use`)) {
        BillingPrepayRequestObject[["automatic_use"]] <-
          self$`automatic_use`
      }
      return(BillingPrepayRequestObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of BillingPrepayRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of BillingPrepayRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`module`)) {
        self$`module` <- this_object$`module`
      }
      if (!is.null(this_object$`amount`)) {
        self$`amount` <- this_object$`amount`
      }
      if (!is.null(this_object$`automatic_use`)) {
        self$`automatic_use` <- this_object$`automatic_use`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return BillingPrepayRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of BillingPrepayRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of BillingPrepayRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`module` <- this_object$`module`
      self$`amount` <- this_object$`amount`
      self$`automatic_use` <- this_object$`automatic_use`
      self
    },

    #' @description
    #' Validate JSON input with respect to BillingPrepayRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of BillingPrepayRequest
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
# BillingPrepayRequest$unlock()
#
## Below is an example to define the print function
# BillingPrepayRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# BillingPrepayRequest$lock()

