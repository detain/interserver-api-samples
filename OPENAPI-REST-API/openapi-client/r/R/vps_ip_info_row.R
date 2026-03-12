#' Create a new VpsIPInfoRow
#'
#' @description
#' VpsIPInfoRow Class
#'
#' @docType class
#' @title VpsIPInfoRow
#' @description VpsIPInfoRow Class
#' @format An \code{R6Class} generator object
#' @field desc Description character [optional]
#' @field value Value character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsIPInfoRow <- R6::R6Class(
  "VpsIPInfoRow",
  public = list(
    `desc` = NULL,
    `value` = NULL,

    #' @description
    #' Initialize a new VpsIPInfoRow class.
    #'
    #' @param desc Description
    #' @param value Value
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
    #' @return VpsIPInfoRow as a base R list.
    #' @examples
    #' # convert array of VpsIPInfoRow (x) to a data frame
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
    #' Convert VpsIPInfoRow to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsIPInfoRowObject <- list()
      if (!is.null(self$`desc`)) {
        VpsIPInfoRowObject[["desc"]] <-
          self$`desc`
      }
      if (!is.null(self$`value`)) {
        VpsIPInfoRowObject[["value"]] <-
          self$`value`
      }
      return(VpsIPInfoRowObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsIPInfoRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsIPInfoRow
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
    #' @return VpsIPInfoRow in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsIPInfoRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsIPInfoRow
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`desc` <- this_object$`desc`
      self$`value` <- this_object$`value`
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsIPInfoRow and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsIPInfoRow
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
# VpsIPInfoRow$unlock()
#
## Below is an example to define the print function
# VpsIPInfoRow$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsIPInfoRow$lock()

