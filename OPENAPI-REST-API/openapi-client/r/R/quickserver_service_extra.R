#' Create a new QuickserverServiceExtra
#'
#' @description
#' QuickserverServiceExtra Class
#'
#' @docType class
#' @title QuickserverServiceExtra
#' @description QuickserverServiceExtra Class
#' @format An \code{R6Class} generator object
#' @field platform Platform information character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
QuickserverServiceExtra <- R6::R6Class(
  "QuickserverServiceExtra",
  public = list(
    `platform` = NULL,

    #' @description
    #' Initialize a new QuickserverServiceExtra class.
    #'
    #' @param platform Platform information
    #' @param ... Other optional arguments.
    initialize = function(`platform` = NULL, ...) {
      if (!is.null(`platform`)) {
        if (!(is.character(`platform`) && length(`platform`) == 1)) {
          stop(paste("Error! Invalid data for `platform`. Must be a string:", `platform`))
        }
        self$`platform` <- `platform`
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
    #' @return QuickserverServiceExtra as a base R list.
    #' @examples
    #' # convert array of QuickserverServiceExtra (x) to a data frame
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
    #' Convert QuickserverServiceExtra to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      QuickserverServiceExtraObject <- list()
      if (!is.null(self$`platform`)) {
        QuickserverServiceExtraObject[["platform"]] <-
          self$`platform`
      }
      return(QuickserverServiceExtraObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of QuickserverServiceExtra
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverServiceExtra
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`platform`)) {
        self$`platform` <- this_object$`platform`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return QuickserverServiceExtra in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of QuickserverServiceExtra
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverServiceExtra
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`platform` <- this_object$`platform`
      self
    },

    #' @description
    #' Validate JSON input with respect to QuickserverServiceExtra and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of QuickserverServiceExtra
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
# QuickserverServiceExtra$unlock()
#
## Below is an example to define the print function
# QuickserverServiceExtra$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# QuickserverServiceExtra$lock()

