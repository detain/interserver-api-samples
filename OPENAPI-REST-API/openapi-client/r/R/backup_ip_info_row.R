#' Create a new BackupIPInfoRow
#'
#' @description
#' A single row in the backup IP information table.
#'
#' @docType class
#' @title BackupIPInfoRow
#' @description BackupIPInfoRow Class
#' @format An \code{R6Class} generator object
#' @field desc Description of the IP information. character [optional]
#' @field value Value of the IP information. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
BackupIPInfoRow <- R6::R6Class(
  "BackupIPInfoRow",
  public = list(
    `desc` = NULL,
    `value` = NULL,

    #' @description
    #' Initialize a new BackupIPInfoRow class.
    #'
    #' @param desc Description of the IP information.
    #' @param value Value of the IP information.
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
    #' @return BackupIPInfoRow as a base R list.
    #' @examples
    #' # convert array of BackupIPInfoRow (x) to a data frame
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
    #' Convert BackupIPInfoRow to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      BackupIPInfoRowObject <- list()
      if (!is.null(self$`desc`)) {
        BackupIPInfoRowObject[["desc"]] <-
          self$`desc`
      }
      if (!is.null(self$`value`)) {
        BackupIPInfoRowObject[["value"]] <-
          self$`value`
      }
      return(BackupIPInfoRowObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of BackupIPInfoRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of BackupIPInfoRow
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
    #' @return BackupIPInfoRow in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of BackupIPInfoRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of BackupIPInfoRow
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`desc` <- this_object$`desc`
      self$`value` <- this_object$`value`
      self
    },

    #' @description
    #' Validate JSON input with respect to BackupIPInfoRow and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of BackupIPInfoRow
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
# BackupIPInfoRow$unlock()
#
## Below is an example to define the print function
# BackupIPInfoRow$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# BackupIPInfoRow$lock()

