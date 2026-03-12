#' Create a new VpsOrderTemplatesHyperv
#'
#' @description
#' VpsOrderTemplatesHyperv Class
#'
#' @docType class
#' @title VpsOrderTemplatesHyperv
#' @description VpsOrderTemplatesHyperv Class
#' @format An \code{R6Class} generator object
#' @field windows  \link{VpsOrderTemplatesHypervWindows} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsOrderTemplatesHyperv <- R6::R6Class(
  "VpsOrderTemplatesHyperv",
  public = list(
    `windows` = NULL,

    #' @description
    #' Initialize a new VpsOrderTemplatesHyperv class.
    #'
    #' @param windows windows
    #' @param ... Other optional arguments.
    initialize = function(`windows` = NULL, ...) {
      if (!is.null(`windows`)) {
        stopifnot(R6::is.R6(`windows`))
        self$`windows` <- `windows`
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
    #' @return VpsOrderTemplatesHyperv as a base R list.
    #' @examples
    #' # convert array of VpsOrderTemplatesHyperv (x) to a data frame
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
    #' Convert VpsOrderTemplatesHyperv to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsOrderTemplatesHypervObject <- list()
      if (!is.null(self$`windows`)) {
        VpsOrderTemplatesHypervObject[["windows"]] <-
          self$extractSimpleType(self$`windows`)
      }
      return(VpsOrderTemplatesHypervObject)
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
    #' Deserialize JSON string into an instance of VpsOrderTemplatesHyperv
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsOrderTemplatesHyperv
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`windows`)) {
        `windows_object` <- VpsOrderTemplatesHypervWindows$new()
        `windows_object`$fromJSON(jsonlite::toJSON(this_object$`windows`, auto_unbox = TRUE, digits = NA))
        self$`windows` <- `windows_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsOrderTemplatesHyperv in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsOrderTemplatesHyperv
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsOrderTemplatesHyperv
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`windows` <- VpsOrderTemplatesHypervWindows$new()$fromJSON(jsonlite::toJSON(this_object$`windows`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsOrderTemplatesHyperv and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsOrderTemplatesHyperv
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
# VpsOrderTemplatesHyperv$unlock()
#
## Below is an example to define the print function
# VpsOrderTemplatesHyperv$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsOrderTemplatesHyperv$lock()

