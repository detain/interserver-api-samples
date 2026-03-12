#' Create a new PlaceScrubOrder201Response
#'
#' @description
#' PlaceScrubOrder201Response Class
#'
#' @docType class
#' @title PlaceScrubOrder201Response
#' @description PlaceScrubOrder201Response Class
#' @format An \code{R6Class} generator object
#' @field success  character [optional]
#' @field text  character [optional]
#' @field order_details  \link{PlaceScrubOrder201ResponseOrderDetails} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
PlaceScrubOrder201Response <- R6::R6Class(
  "PlaceScrubOrder201Response",
  public = list(
    `success` = NULL,
    `text` = NULL,
    `order_details` = NULL,

    #' @description
    #' Initialize a new PlaceScrubOrder201Response class.
    #'
    #' @param success success
    #' @param text text
    #' @param order_details order_details
    #' @param ... Other optional arguments.
    initialize = function(`success` = NULL, `text` = NULL, `order_details` = NULL, ...) {
      if (!is.null(`success`)) {
        if (!(is.logical(`success`) && length(`success`) == 1)) {
          stop(paste("Error! Invalid data for `success`. Must be a boolean:", `success`))
        }
        self$`success` <- `success`
      }
      if (!is.null(`text`)) {
        if (!(is.character(`text`) && length(`text`) == 1)) {
          stop(paste("Error! Invalid data for `text`. Must be a string:", `text`))
        }
        self$`text` <- `text`
      }
      if (!is.null(`order_details`)) {
        stopifnot(R6::is.R6(`order_details`))
        self$`order_details` <- `order_details`
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
    #' @return PlaceScrubOrder201Response as a base R list.
    #' @examples
    #' # convert array of PlaceScrubOrder201Response (x) to a data frame
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
    #' Convert PlaceScrubOrder201Response to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      PlaceScrubOrder201ResponseObject <- list()
      if (!is.null(self$`success`)) {
        PlaceScrubOrder201ResponseObject[["success"]] <-
          self$`success`
      }
      if (!is.null(self$`text`)) {
        PlaceScrubOrder201ResponseObject[["text"]] <-
          self$`text`
      }
      if (!is.null(self$`order_details`)) {
        PlaceScrubOrder201ResponseObject[["order_details"]] <-
          self$extractSimpleType(self$`order_details`)
      }
      return(PlaceScrubOrder201ResponseObject)
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
    #' Deserialize JSON string into an instance of PlaceScrubOrder201Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of PlaceScrubOrder201Response
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`success`)) {
        self$`success` <- this_object$`success`
      }
      if (!is.null(this_object$`text`)) {
        self$`text` <- this_object$`text`
      }
      if (!is.null(this_object$`order_details`)) {
        `order_details_object` <- PlaceScrubOrder201ResponseOrderDetails$new()
        `order_details_object`$fromJSON(jsonlite::toJSON(this_object$`order_details`, auto_unbox = TRUE, digits = NA))
        self$`order_details` <- `order_details_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return PlaceScrubOrder201Response in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of PlaceScrubOrder201Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of PlaceScrubOrder201Response
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`success` <- this_object$`success`
      self$`text` <- this_object$`text`
      self$`order_details` <- PlaceScrubOrder201ResponseOrderDetails$new()$fromJSON(jsonlite::toJSON(this_object$`order_details`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to PlaceScrubOrder201Response and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of PlaceScrubOrder201Response
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
# PlaceScrubOrder201Response$unlock()
#
## Below is an example to define the print function
# PlaceScrubOrder201Response$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# PlaceScrubOrder201Response$lock()

