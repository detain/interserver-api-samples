#' Create a new ServerLocations
#'
#' @description
#' ServerLocations Class
#'
#' @docType class
#' @title ServerLocations
#' @description ServerLocations Class
#' @format An \code{R6Class} generator object
#' @field 1  \link{ServerLocation1} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServerLocations <- R6::R6Class(
  "ServerLocations",
  public = list(
    `1` = NULL,

    #' @description
    #' Initialize a new ServerLocations class.
    #'
    #' @param 1 1
    #' @param ... Other optional arguments.
    initialize = function(`1` = NULL, ...) {
      if (!is.null(`1`)) {
        stopifnot(R6::is.R6(`1`))
        self$`1` <- `1`
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
    #' @return ServerLocations as a base R list.
    #' @examples
    #' # convert array of ServerLocations (x) to a data frame
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
    #' Convert ServerLocations to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServerLocationsObject <- list()
      if (!is.null(self$`1`)) {
        ServerLocationsObject[["1"]] <-
          self$extractSimpleType(self$`1`)
      }
      return(ServerLocationsObject)
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
    #' Deserialize JSON string into an instance of ServerLocations
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerLocations
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`1`)) {
        `1_object` <- ServerLocation1$new()
        `1_object`$fromJSON(jsonlite::toJSON(this_object$`1`, auto_unbox = TRUE, digits = NA))
        self$`1` <- `1_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ServerLocations in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServerLocations
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServerLocations
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`1` <- ServerLocation1$new()$fromJSON(jsonlite::toJSON(this_object$`1`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to ServerLocations and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServerLocations
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
# ServerLocations$unlock()
#
## Below is an example to define the print function
# ServerLocations$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServerLocations$lock()

