#' Create a new IpLimitRange
#'
#' @description
#' The lower and upper bounds of an ip range.
#'
#' @docType class
#' @title IpLimitRange
#' @description IpLimitRange Class
#' @format An \code{R6Class} generator object
#' @field start The begining (or first) IP address in the range. character
#' @field end The ending (or last) IP address in the range. character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
IpLimitRange <- R6::R6Class(
  "IpLimitRange",
  public = list(
    `start` = NULL,
    `end` = NULL,

    #' @description
    #' Initialize a new IpLimitRange class.
    #'
    #' @param start The begining (or first) IP address in the range.
    #' @param end The ending (or last) IP address in the range.
    #' @param ... Other optional arguments.
    initialize = function(`start`, `end`, ...) {
      if (!missing(`start`)) {
        if (!(is.character(`start`) && length(`start`) == 1)) {
          stop(paste("Error! Invalid data for `start`. Must be a string:", `start`))
        }
        self$`start` <- `start`
      }
      if (!missing(`end`)) {
        if (!(is.character(`end`) && length(`end`) == 1)) {
          stop(paste("Error! Invalid data for `end`. Must be a string:", `end`))
        }
        self$`end` <- `end`
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
    #' @return IpLimitRange as a base R list.
    #' @examples
    #' # convert array of IpLimitRange (x) to a data frame
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
    #' Convert IpLimitRange to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      IpLimitRangeObject <- list()
      if (!is.null(self$`start`)) {
        IpLimitRangeObject[["start"]] <-
          self$`start`
      }
      if (!is.null(self$`end`)) {
        IpLimitRangeObject[["end"]] <-
          self$`end`
      }
      return(IpLimitRangeObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of IpLimitRange
    #'
    #' @param input_json the JSON input
    #' @return the instance of IpLimitRange
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`start`)) {
        self$`start` <- this_object$`start`
      }
      if (!is.null(this_object$`end`)) {
        self$`end` <- this_object$`end`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return IpLimitRange in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of IpLimitRange
    #'
    #' @param input_json the JSON input
    #' @return the instance of IpLimitRange
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`start` <- this_object$`start`
      self$`end` <- this_object$`end`
      self
    },

    #' @description
    #' Validate JSON input with respect to IpLimitRange and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `start`
      if (!is.null(input_json$`start`)) {
        if (!(is.character(input_json$`start`) && length(input_json$`start`) == 1)) {
          stop(paste("Error! Invalid data for `start`. Must be a string:", input_json$`start`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for IpLimitRange: the required field `start` is missing."))
      }
      # check the required field `end`
      if (!is.null(input_json$`end`)) {
        if (!(is.character(input_json$`end`) && length(input_json$`end`) == 1)) {
          stop(paste("Error! Invalid data for `end`. Must be a string:", input_json$`end`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for IpLimitRange: the required field `end` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of IpLimitRange
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `start` is null
      if (is.null(self$`start`)) {
        return(FALSE)
      }

      # check if the required `end` is null
      if (is.null(self$`end`)) {
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
      # check if the required `start` is null
      if (is.null(self$`start`)) {
        invalid_fields["start"] <- "Non-nullable required field `start` cannot be null."
      }

      # check if the required `end` is null
      if (is.null(self$`end`)) {
        invalid_fields["end"] <- "Non-nullable required field `end` cannot be null."
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
# IpLimitRange$unlock()
#
## Below is an example to define the print function
# IpLimitRange$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# IpLimitRange$lock()

