#' Create a new VpsTrafficUsageResponse
#'
#' @description
#' VPS Traffic Usage Section
#'
#' @docType class
#' @title VpsTrafficUsageResponse
#' @description VpsTrafficUsageResponse Class
#' @format An \code{R6Class} generator object
#' @field current  \link{VpsTrafficTotalsSectionResponse}
#' @field peak  \link{VpsTrafficTotalsSectionResponse}
#' @field average  \link{VpsTrafficUsageAverageResponse}
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsTrafficUsageResponse <- R6::R6Class(
  "VpsTrafficUsageResponse",
  public = list(
    `current` = NULL,
    `peak` = NULL,
    `average` = NULL,

    #' @description
    #' Initialize a new VpsTrafficUsageResponse class.
    #'
    #' @param current current
    #' @param peak peak
    #' @param average average
    #' @param ... Other optional arguments.
    initialize = function(`current`, `peak`, `average`, ...) {
      if (!missing(`current`)) {
        stopifnot(R6::is.R6(`current`))
        self$`current` <- `current`
      }
      if (!missing(`peak`)) {
        stopifnot(R6::is.R6(`peak`))
        self$`peak` <- `peak`
      }
      if (!missing(`average`)) {
        stopifnot(R6::is.R6(`average`))
        self$`average` <- `average`
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
    #' @return VpsTrafficUsageResponse as a base R list.
    #' @examples
    #' # convert array of VpsTrafficUsageResponse (x) to a data frame
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
    #' Convert VpsTrafficUsageResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsTrafficUsageResponseObject <- list()
      if (!is.null(self$`current`)) {
        VpsTrafficUsageResponseObject[["current"]] <-
          self$extractSimpleType(self$`current`)
      }
      if (!is.null(self$`peak`)) {
        VpsTrafficUsageResponseObject[["peak"]] <-
          self$extractSimpleType(self$`peak`)
      }
      if (!is.null(self$`average`)) {
        VpsTrafficUsageResponseObject[["average"]] <-
          self$extractSimpleType(self$`average`)
      }
      return(VpsTrafficUsageResponseObject)
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
    #' Deserialize JSON string into an instance of VpsTrafficUsageResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsTrafficUsageResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`current`)) {
        `current_object` <- VpsTrafficTotalsSectionResponse$new()
        `current_object`$fromJSON(jsonlite::toJSON(this_object$`current`, auto_unbox = TRUE, digits = NA))
        self$`current` <- `current_object`
      }
      if (!is.null(this_object$`peak`)) {
        `peak_object` <- VpsTrafficTotalsSectionResponse$new()
        `peak_object`$fromJSON(jsonlite::toJSON(this_object$`peak`, auto_unbox = TRUE, digits = NA))
        self$`peak` <- `peak_object`
      }
      if (!is.null(this_object$`average`)) {
        `average_object` <- VpsTrafficUsageAverageResponse$new()
        `average_object`$fromJSON(jsonlite::toJSON(this_object$`average`, auto_unbox = TRUE, digits = NA))
        self$`average` <- `average_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsTrafficUsageResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsTrafficUsageResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsTrafficUsageResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`current` <- VpsTrafficTotalsSectionResponse$new()$fromJSON(jsonlite::toJSON(this_object$`current`, auto_unbox = TRUE, digits = NA))
      self$`peak` <- VpsTrafficTotalsSectionResponse$new()$fromJSON(jsonlite::toJSON(this_object$`peak`, auto_unbox = TRUE, digits = NA))
      self$`average` <- VpsTrafficUsageAverageResponse$new()$fromJSON(jsonlite::toJSON(this_object$`average`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsTrafficUsageResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `current`
      if (!is.null(input_json$`current`)) {
        stopifnot(R6::is.R6(input_json$`current`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsTrafficUsageResponse: the required field `current` is missing."))
      }
      # check the required field `peak`
      if (!is.null(input_json$`peak`)) {
        stopifnot(R6::is.R6(input_json$`peak`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsTrafficUsageResponse: the required field `peak` is missing."))
      }
      # check the required field `average`
      if (!is.null(input_json$`average`)) {
        stopifnot(R6::is.R6(input_json$`average`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsTrafficUsageResponse: the required field `average` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsTrafficUsageResponse
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `current` is null
      if (is.null(self$`current`)) {
        return(FALSE)
      }

      # check if the required `peak` is null
      if (is.null(self$`peak`)) {
        return(FALSE)
      }

      # check if the required `average` is null
      if (is.null(self$`average`)) {
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
      # check if the required `current` is null
      if (is.null(self$`current`)) {
        invalid_fields["current"] <- "Non-nullable required field `current` cannot be null."
      }

      # check if the required `peak` is null
      if (is.null(self$`peak`)) {
        invalid_fields["peak"] <- "Non-nullable required field `peak` cannot be null."
      }

      # check if the required `average` is null
      if (is.null(self$`average`)) {
        invalid_fields["average"] <- "Non-nullable required field `average` cannot be null."
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
# VpsTrafficUsageResponse$unlock()
#
## Below is an example to define the print function
# VpsTrafficUsageResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsTrafficUsageResponse$lock()

