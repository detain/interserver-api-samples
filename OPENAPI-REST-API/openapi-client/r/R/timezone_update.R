#' Create a new TimezoneUpdate
#'
#' @description
#' The request to update the time zone of a vps.
#'
#' @docType class
#' @title TimezoneUpdate
#' @description TimezoneUpdate Class
#' @format An \code{R6Class} generator object
#' @field timezone The time zone character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
TimezoneUpdate <- R6::R6Class(
  "TimezoneUpdate",
  public = list(
    `timezone` = NULL,

    #' @description
    #' Initialize a new TimezoneUpdate class.
    #'
    #' @param timezone The time zone
    #' @param ... Other optional arguments.
    initialize = function(`timezone`, ...) {
      if (!missing(`timezone`)) {
        if (!(is.character(`timezone`) && length(`timezone`) == 1)) {
          stop(paste("Error! Invalid data for `timezone`. Must be a string:", `timezone`))
        }
        self$`timezone` <- `timezone`
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
    #' @return TimezoneUpdate as a base R list.
    #' @examples
    #' # convert array of TimezoneUpdate (x) to a data frame
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
    #' Convert TimezoneUpdate to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      TimezoneUpdateObject <- list()
      if (!is.null(self$`timezone`)) {
        TimezoneUpdateObject[["timezone"]] <-
          self$`timezone`
      }
      return(TimezoneUpdateObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of TimezoneUpdate
    #'
    #' @param input_json the JSON input
    #' @return the instance of TimezoneUpdate
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`timezone`)) {
        self$`timezone` <- this_object$`timezone`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return TimezoneUpdate in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of TimezoneUpdate
    #'
    #' @param input_json the JSON input
    #' @return the instance of TimezoneUpdate
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`timezone` <- this_object$`timezone`
      self
    },

    #' @description
    #' Validate JSON input with respect to TimezoneUpdate and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `timezone`
      if (!is.null(input_json$`timezone`)) {
        if (!(is.character(input_json$`timezone`) && length(input_json$`timezone`) == 1)) {
          stop(paste("Error! Invalid data for `timezone`. Must be a string:", input_json$`timezone`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for TimezoneUpdate: the required field `timezone` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of TimezoneUpdate
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `timezone` is null
      if (is.null(self$`timezone`)) {
        return(FALSE)
      }

      TRUE
    },

    #' @description
    #' Return a list of invalid fields (if any).
    #'
    #' @return A list of invalid fields (if any).
    getInvalidFields = function() {
      invalid_fields <- list()
      # check if the required `timezone` is null
      if (is.null(self$`timezone`)) {
        invalid_fields["timezone"] <- "Non-nullable required field `timezone` cannot be null."
      }

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
# TimezoneUpdate$unlock()
#
## Below is an example to define the print function
# TimezoneUpdate$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# TimezoneUpdate$lock()

