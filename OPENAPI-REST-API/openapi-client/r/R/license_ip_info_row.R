#' Create a new LicenseIpInfoRow
#'
#' @description
#' A single row in the license IP information table.
#'
#' @docType class
#' @title LicenseIpInfoRow
#' @description LicenseIpInfoRow Class
#' @format An \code{R6Class} generator object
#' @field desc Row description character [optional]
#' @field value Row value character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
LicenseIpInfoRow <- R6::R6Class(
  "LicenseIpInfoRow",
  public = list(
    `desc` = NULL,
    `value` = NULL,

    #' @description
    #' Initialize a new LicenseIpInfoRow class.
    #'
    #' @param desc Row description
    #' @param value Row value
    #' @param ... Other optional arguments.
    initialize = function(`desc` = NULL, `value` = NULL, ...) {
      if (!is.null(`desc`)) {
        if (!(is.character(`desc`) && length(`desc`) == 1)) {
          stop(paste("Error! Invalid data for `desc`. Must be a string:", `desc`))
        }
        self$`desc` <- `desc`
      }
      if (!is.null(`value`)) {
        if (!(is.character(`value`) && length(`value`) == 1)) {
          stop(paste("Error! Invalid data for `value`. Must be a string:", `value`))
        }
        self$`value` <- `value`
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
    #' @return LicenseIpInfoRow as a base R list.
    #' @examples
    #' # convert array of LicenseIpInfoRow (x) to a data frame
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
    #' Convert LicenseIpInfoRow to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      LicenseIpInfoRowObject <- list()
      if (!is.null(self$`desc`)) {
        LicenseIpInfoRowObject[["desc"]] <-
          self$`desc`
      }
      if (!is.null(self$`value`)) {
        LicenseIpInfoRowObject[["value"]] <-
          self$`value`
      }
      return(LicenseIpInfoRowObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of LicenseIpInfoRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of LicenseIpInfoRow
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`desc`)) {
        self$`desc` <- this_object$`desc`
      }
      if (!is.null(this_object$`value`)) {
        self$`value` <- this_object$`value`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return LicenseIpInfoRow in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of LicenseIpInfoRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of LicenseIpInfoRow
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`desc` <- this_object$`desc`
      self$`value` <- this_object$`value`
      self
    },

    #' @description
    #' Validate JSON input with respect to LicenseIpInfoRow and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of LicenseIpInfoRow
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
# LicenseIpInfoRow$unlock()
#
## Below is an example to define the print function
# LicenseIpInfoRow$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# LicenseIpInfoRow$lock()

