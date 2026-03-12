#' Create a new QuickserverOrderVersionCentosstream8
#'
#' @description
#' QuickserverOrderVersionCentosstream8 Class
#'
#' @docType class
#' @title QuickserverOrderVersionCentosstream8
#' @description QuickserverOrderVersionCentosstream8 Class
#' @format An \code{R6Class} generator object
#' @field centosstream-8 Version details of CentOS Stream 8. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
QuickserverOrderVersionCentosstream8 <- R6::R6Class(
  "QuickserverOrderVersionCentosstream8",
  public = list(
    `centosstream-8` = NULL,

    #' @description
    #' Initialize a new QuickserverOrderVersionCentosstream8 class.
    #'
    #' @param centosstream-8 Version details of CentOS Stream 8.
    #' @param ... Other optional arguments.
    initialize = function(`centosstream-8` = NULL, ...) {
      if (!is.null(`centosstream-8`)) {
        if (!(is.character(`centosstream-8`) && length(`centosstream-8`) == 1)) {
          stop(paste("Error! Invalid data for `centosstream-8`. Must be a string:", `centosstream-8`))
        }
        self$`centosstream-8` <- `centosstream-8`
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
    #' @return QuickserverOrderVersionCentosstream8 as a base R list.
    #' @examples
    #' # convert array of QuickserverOrderVersionCentosstream8 (x) to a data frame
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
    #' Convert QuickserverOrderVersionCentosstream8 to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      QuickserverOrderVersionCentosstream8Object <- list()
      if (!is.null(self$`centosstream-8`)) {
        QuickserverOrderVersionCentosstream8Object[["centosstream-8"]] <-
          self$`centosstream-8`
      }
      return(QuickserverOrderVersionCentosstream8Object)
    },

    #' @description
    #' Deserialize JSON string into an instance of QuickserverOrderVersionCentosstream8
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverOrderVersionCentosstream8
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`centosstream-8`)) {
        self$`centosstream-8` <- this_object$`centosstream-8`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return QuickserverOrderVersionCentosstream8 in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of QuickserverOrderVersionCentosstream8
    #'
    #' @param input_json the JSON input
    #' @return the instance of QuickserverOrderVersionCentosstream8
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`centosstream-8` <- this_object$`centosstream-8`
      self
    },

    #' @description
    #' Validate JSON input with respect to QuickserverOrderVersionCentosstream8 and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of QuickserverOrderVersionCentosstream8
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
# QuickserverOrderVersionCentosstream8$unlock()
#
## Below is an example to define the print function
# QuickserverOrderVersionCentosstream8$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# QuickserverOrderVersionCentosstream8$lock()

