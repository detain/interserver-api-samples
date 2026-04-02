#' Create a new QuickserverOrderDistroSel
#'
#' @description
#' Distribution selection.
#'
#' @docType class
#' @title QuickserverOrderDistroSel
#' @description QuickserverOrderDistroSel Class
#' @format An \code{R6Class} generator object
#' @field Ubuntu  \link{QuickserverOrderDistroSelUbuntu} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
QuickserverOrderDistroSel <- R6::R6Class(
  "QuickserverOrderDistroSel",
  public = list(
    `Ubuntu` = NULL,

    #' @description
    #' Initialize a new QuickserverOrderDistroSel class.
    #'
    #' @param Ubuntu Ubuntu
    #' @param ... Other optional arguments.
    initialize = function(`Ubuntu` = NULL, ...) {
      if (!is.null(`Ubuntu`)) {
        stopifnot(R6::is.R6(`Ubuntu`))
        self$`Ubuntu` <- `Ubuntu`
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
    #' @return QuickserverOrderDistroSel as a base R list.
    #' @examples
    #' # convert array of QuickserverOrderDistroSel (x) to a data frame
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
    #' Convert QuickserverOrderDistroSel to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      QuickserverOrderDistroSelObject <- list()
      if (!is.null(self$`Ubuntu`)) {
        QuickserverOrderDistroSelObject[["Ubuntu"]] <-
          self$extractSimpleType(self$`Ubuntu`)
      }
      return(QuickserverOrderDistroSelObject)
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
    #' Deserialize JSON string into an instance of QuickserverOrderDistroSel
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverOrderDistroSel
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`Ubuntu`)) {
        `ubuntu_object` <- QuickserverOrderDistroSelUbuntu$new()
        `ubuntu_object`$fromJSON(jsonlite::toJSON(this_object$`Ubuntu`, auto_unbox = TRUE, digits = NA))
        self$`Ubuntu` <- `ubuntu_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return QuickserverOrderDistroSel in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of QuickserverOrderDistroSel
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverOrderDistroSel
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`Ubuntu` <- QuickserverOrderDistroSelUbuntu$new()$fromJSON(jsonlite::toJSON(this_object$`Ubuntu`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to QuickserverOrderDistroSel and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of QuickserverOrderDistroSel
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
# QuickserverOrderDistroSel$unlock()
#
## Below is an example to define the print function
# QuickserverOrderDistroSel$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# QuickserverOrderDistroSel$lock()

