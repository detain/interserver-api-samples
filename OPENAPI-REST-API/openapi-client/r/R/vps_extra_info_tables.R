#' Create a new VpsExtraInfoTables
#'
#' @description
#' Additional informational tables displayed for a VPS service.
#'
#' @docType class
#' @title VpsExtraInfoTables
#' @description VpsExtraInfoTables Class
#' @format An \code{R6Class} generator object
#' @field ip_info  \link{VpsIPInfo} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsExtraInfoTables <- R6::R6Class(
  "VpsExtraInfoTables",
  public = list(
    `ip_info` = NULL,

    #' @description
    #' Initialize a new VpsExtraInfoTables class.
    #'
    #' @param ip_info ip_info
    #' @param ... Other optional arguments.
    initialize = function(`ip_info` = NULL, ...) {
      if (!is.null(`ip_info`)) {
        stopifnot(R6::is.R6(`ip_info`))
        self$`ip_info` <- `ip_info`
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
    #' @return VpsExtraInfoTables as a base R list.
    #' @examples
    #' # convert array of VpsExtraInfoTables (x) to a data frame
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
    #' Convert VpsExtraInfoTables to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsExtraInfoTablesObject <- list()
      if (!is.null(self$`ip_info`)) {
        VpsExtraInfoTablesObject[["ip_info"]] <-
          self$extractSimpleType(self$`ip_info`)
      }
      return(VpsExtraInfoTablesObject)
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
    #' Deserialize JSON string into an instance of VpsExtraInfoTables
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsExtraInfoTables
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`ip_info`)) {
        `ip_info_object` <- VpsIPInfo$new()
        `ip_info_object`$fromJSON(jsonlite::toJSON(this_object$`ip_info`, auto_unbox = TRUE, digits = NA))
        self$`ip_info` <- `ip_info_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsExtraInfoTables in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsExtraInfoTables
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsExtraInfoTables
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`ip_info` <- VpsIPInfo$new()$fromJSON(jsonlite::toJSON(this_object$`ip_info`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsExtraInfoTables and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsExtraInfoTables
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
# VpsExtraInfoTables$unlock()
#
## Below is an example to define the print function
# VpsExtraInfoTables$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsExtraInfoTables$lock()

