#' Create a new BackupOrderPutRequest
#'
#' @description
#' Parameters to submit to validate your backup order
#'
#' @docType class
#' @title BackupOrderPutRequest
#' @description BackupOrderPutRequest Class
#' @format An \code{R6Class} generator object
#' @field validateOnly  character [optional]
#' @field serviceType  integer [optional]
#' @field coupon  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
BackupOrderPutRequest <- R6::R6Class(
  "BackupOrderPutRequest",
  public = list(
    `validateOnly` = NULL,
    `serviceType` = NULL,
    `coupon` = NULL,

    #' @description
    #' Initialize a new BackupOrderPutRequest class.
    #'
    #' @param validateOnly validateOnly
    #' @param serviceType serviceType
    #' @param coupon coupon
    #' @param ... Other optional arguments.
    initialize = function(`validateOnly` = NULL, `serviceType` = NULL, `coupon` = NULL, ...) {
      if (!is.null(`validateOnly`)) {
        if (!(is.logical(`validateOnly`) && length(`validateOnly`) == 1)) {
          stop(paste("Error! Invalid data for `validateOnly`. Must be a boolean:", `validateOnly`))
        }
        self$`validateOnly` <- `validateOnly`
      }
      if (!is.null(`serviceType`)) {
        if (!(is.numeric(`serviceType`) && length(`serviceType`) == 1)) {
          stop(paste("Error! Invalid data for `serviceType`. Must be an integer:", `serviceType`))
        }
        self$`serviceType` <- `serviceType`
      }
      if (!is.null(`coupon`)) {
        if (!(is.character(`coupon`) && length(`coupon`) == 1)) {
          stop(paste("Error! Invalid data for `coupon`. Must be a string:", `coupon`))
        }
        self$`coupon` <- `coupon`
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
    #' @return BackupOrderPutRequest as a base R list.
    #' @examples
    #' # convert array of BackupOrderPutRequest (x) to a data frame
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
    #' Convert BackupOrderPutRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      BackupOrderPutRequestObject <- list()
      if (!is.null(self$`validateOnly`)) {
        BackupOrderPutRequestObject[["validateOnly"]] <-
          self$`validateOnly`
      }
      if (!is.null(self$`serviceType`)) {
        BackupOrderPutRequestObject[["serviceType"]] <-
          self$`serviceType`
      }
      if (!is.null(self$`coupon`)) {
        BackupOrderPutRequestObject[["coupon"]] <-
          self$`coupon`
      }
      return(BackupOrderPutRequestObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of BackupOrderPutRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of BackupOrderPutRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`validateOnly`)) {
        self$`validateOnly` <- this_object$`validateOnly`
      }
      if (!is.null(this_object$`serviceType`)) {
        self$`serviceType` <- this_object$`serviceType`
      }
      if (!is.null(this_object$`coupon`)) {
        self$`coupon` <- this_object$`coupon`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return BackupOrderPutRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of BackupOrderPutRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of BackupOrderPutRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`validateOnly` <- this_object$`validateOnly`
      self$`serviceType` <- this_object$`serviceType`
      self$`coupon` <- this_object$`coupon`
      self
    },

    #' @description
    #' Validate JSON input with respect to BackupOrderPutRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of BackupOrderPutRequest
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
# BackupOrderPutRequest$unlock()
#
## Below is an example to define the print function
# BackupOrderPutRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# BackupOrderPutRequest$lock()

