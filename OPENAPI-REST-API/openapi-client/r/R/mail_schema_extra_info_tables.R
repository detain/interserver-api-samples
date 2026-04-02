#' Create a new MailSchemaExtraInfoTables
#'
#' @description
#' Additional information tables for the mail service.
#'
#' @docType class
#' @title MailSchemaExtraInfoTables
#' @description MailSchemaExtraInfoTables Class
#' @format An \code{R6Class} generator object
#' @field mail  \link{MailExtraInfoTable} [optional]
#' @field tutorials  \link{MailTutorialsTable} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
MailSchemaExtraInfoTables <- R6::R6Class(
  "MailSchemaExtraInfoTables",
  public = list(
    `mail` = NULL,
    `tutorials` = NULL,

    #' @description
    #' Initialize a new MailSchemaExtraInfoTables class.
    #'
    #' @param mail mail
    #' @param tutorials tutorials
    #' @param ... Other optional arguments.
    initialize = function(`mail` = NULL, `tutorials` = NULL, ...) {
      if (!is.null(`mail`)) {
        stopifnot(R6::is.R6(`mail`))
        self$`mail` <- `mail`
      }
      if (!is.null(`tutorials`)) {
        stopifnot(R6::is.R6(`tutorials`))
        self$`tutorials` <- `tutorials`
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
    #' @return MailSchemaExtraInfoTables as a base R list.
    #' @examples
    #' # convert array of MailSchemaExtraInfoTables (x) to a data frame
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
    #' Convert MailSchemaExtraInfoTables to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      MailSchemaExtraInfoTablesObject <- list()
      if (!is.null(self$`mail`)) {
        MailSchemaExtraInfoTablesObject[["mail"]] <-
          self$extractSimpleType(self$`mail`)
      }
      if (!is.null(self$`tutorials`)) {
        MailSchemaExtraInfoTablesObject[["tutorials"]] <-
          self$extractSimpleType(self$`tutorials`)
      }
      return(MailSchemaExtraInfoTablesObject)
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
    #' Deserialize JSON string into an instance of MailSchemaExtraInfoTables
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailSchemaExtraInfoTables
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`mail`)) {
        `mail_object` <- MailExtraInfoTable$new()
        `mail_object`$fromJSON(jsonlite::toJSON(this_object$`mail`, auto_unbox = TRUE, digits = NA))
        self$`mail` <- `mail_object`
      }
      if (!is.null(this_object$`tutorials`)) {
        `tutorials_object` <- MailTutorialsTable$new()
        `tutorials_object`$fromJSON(jsonlite::toJSON(this_object$`tutorials`, auto_unbox = TRUE, digits = NA))
        self$`tutorials` <- `tutorials_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return MailSchemaExtraInfoTables in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of MailSchemaExtraInfoTables
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailSchemaExtraInfoTables
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`mail` <- MailExtraInfoTable$new()$fromJSON(jsonlite::toJSON(this_object$`mail`, auto_unbox = TRUE, digits = NA))
      self$`tutorials` <- MailTutorialsTable$new()$fromJSON(jsonlite::toJSON(this_object$`tutorials`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to MailSchemaExtraInfoTables and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of MailSchemaExtraInfoTables
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
# MailSchemaExtraInfoTables$unlock()
#
## Below is an example to define the print function
# MailSchemaExtraInfoTables$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# MailSchemaExtraInfoTables$lock()

