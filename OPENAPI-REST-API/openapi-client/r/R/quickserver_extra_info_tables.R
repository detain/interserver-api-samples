#' Create a new QuickserverExtraInfoTables
#'
#' @description
#' QuickserverExtraInfoTables Class
#'
#' @docType class
#' @title QuickserverExtraInfoTables
#' @description QuickserverExtraInfoTables Class
#' @format An \code{R6Class} generator object
#' @field ip_info  \link{QuickserverIpInfo} [optional]
#' @field addons  \link{QuickserverAddons} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
QuickserverExtraInfoTables <- R6::R6Class(
  "QuickserverExtraInfoTables",
  public = list(
    `ip_info` = NULL,
    `addons` = NULL,

    #' @description
    #' Initialize a new QuickserverExtraInfoTables class.
    #'
    #' @param ip_info ip_info
    #' @param addons addons
    #' @param ... Other optional arguments.
    initialize = function(`ip_info` = NULL, `addons` = NULL, ...) {
      if (!is.null(`ip_info`)) {
        stopifnot(R6::is.R6(`ip_info`))
        self$`ip_info` <- `ip_info`
      }
      if (!is.null(`addons`)) {
        stopifnot(R6::is.R6(`addons`))
        self$`addons` <- `addons`
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
    #' @return QuickserverExtraInfoTables as a base R list.
    #' @examples
    #' # convert array of QuickserverExtraInfoTables (x) to a data frame
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
    #' Convert QuickserverExtraInfoTables to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      QuickserverExtraInfoTablesObject <- list()
      if (!is.null(self$`ip_info`)) {
        QuickserverExtraInfoTablesObject[["ip_info"]] <-
          self$extractSimpleType(self$`ip_info`)
      }
      if (!is.null(self$`addons`)) {
        QuickserverExtraInfoTablesObject[["addons"]] <-
          self$extractSimpleType(self$`addons`)
      }
      return(QuickserverExtraInfoTablesObject)
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
    #' Deserialize JSON string into an instance of QuickserverExtraInfoTables
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverExtraInfoTables
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`ip_info`)) {
        `ip_info_object` <- QuickserverIpInfo$new()
        `ip_info_object`$fromJSON(jsonlite::toJSON(this_object$`ip_info`, auto_unbox = TRUE, digits = NA))
        self$`ip_info` <- `ip_info_object`
      }
      if (!is.null(this_object$`addons`)) {
        `addons_object` <- QuickserverAddons$new()
        `addons_object`$fromJSON(jsonlite::toJSON(this_object$`addons`, auto_unbox = TRUE, digits = NA))
        self$`addons` <- `addons_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return QuickserverExtraInfoTables in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of QuickserverExtraInfoTables
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverExtraInfoTables
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`ip_info` <- QuickserverIpInfo$new()$fromJSON(jsonlite::toJSON(this_object$`ip_info`, auto_unbox = TRUE, digits = NA))
      self$`addons` <- QuickserverAddons$new()$fromJSON(jsonlite::toJSON(this_object$`addons`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to QuickserverExtraInfoTables and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of QuickserverExtraInfoTables
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
# QuickserverExtraInfoTables$unlock()
#
## Below is an example to define the print function
# QuickserverExtraInfoTables$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# QuickserverExtraInfoTables$lock()

