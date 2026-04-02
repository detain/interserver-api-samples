#' Create a new VpsTrafficUsageAverageResponse
#'
#' @description
#' VPS Traffic Usage Average Section
#'
#' @docType class
#' @title VpsTrafficUsageAverageResponse
#' @description VpsTrafficUsageAverageResponse Class
#' @format An \code{R6Class} generator object
#' @field in  \link{VpsTrafficUsageAverageSectionResponse}
#' @field out  \link{VpsTrafficUsageAverageSectionResponse}
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsTrafficUsageAverageResponse <- R6::R6Class(
  "VpsTrafficUsageAverageResponse",
  public = list(
    `in` = NULL,
    `out` = NULL,

    #' @description
    #' Initialize a new VpsTrafficUsageAverageResponse class.
    #'
    #' @param in in
    #' @param out out
    #' @param ... Other optional arguments.
    initialize = function(`in`, `out`, ...) {
      if (!missing(`in`)) {
        stopifnot(R6::is.R6(`in`))
        self$`in` <- `in`
      }
      if (!missing(`out`)) {
        stopifnot(R6::is.R6(`out`))
        self$`out` <- `out`
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
    #' @return VpsTrafficUsageAverageResponse as a base R list.
    #' @examples
    #' # convert array of VpsTrafficUsageAverageResponse (x) to a data frame
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
    #' Convert VpsTrafficUsageAverageResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsTrafficUsageAverageResponseObject <- list()
      if (!is.null(self$`in`)) {
        VpsTrafficUsageAverageResponseObject[["in"]] <-
          self$extractSimpleType(self$`in`)
      }
      if (!is.null(self$`out`)) {
        VpsTrafficUsageAverageResponseObject[["out"]] <-
          self$extractSimpleType(self$`out`)
      }
      return(VpsTrafficUsageAverageResponseObject)
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
    #' Deserialize JSON string into an instance of VpsTrafficUsageAverageResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsTrafficUsageAverageResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`in`)) {
        `In__object` <- VpsTrafficUsageAverageSectionResponse$new()
        `In__object`$fromJSON(jsonlite::toJSON(this_object$`in`, auto_unbox = TRUE, digits = NA))
        self$`in` <- `In__object`
      }
      if (!is.null(this_object$`out`)) {
        `out_object` <- VpsTrafficUsageAverageSectionResponse$new()
        `out_object`$fromJSON(jsonlite::toJSON(this_object$`out`, auto_unbox = TRUE, digits = NA))
        self$`out` <- `out_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsTrafficUsageAverageResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsTrafficUsageAverageResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsTrafficUsageAverageResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`in` <- VpsTrafficUsageAverageSectionResponse$new()$fromJSON(jsonlite::toJSON(this_object$`in`, auto_unbox = TRUE, digits = NA))
      self$`out` <- VpsTrafficUsageAverageSectionResponse$new()$fromJSON(jsonlite::toJSON(this_object$`out`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsTrafficUsageAverageResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `in`
      if (!is.null(input_json$`in`)) {
        stopifnot(R6::is.R6(input_json$`in`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsTrafficUsageAverageResponse: the required field `in` is missing."))
      }
      # check the required field `out`
      if (!is.null(input_json$`out`)) {
        stopifnot(R6::is.R6(input_json$`out`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsTrafficUsageAverageResponse: the required field `out` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsTrafficUsageAverageResponse
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `in` is null
      if (is.null(self$`in`)) {
        return(FALSE)
      }

      # check if the required `out` is null
      if (is.null(self$`out`)) {
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
      # check if the required `in` is null
      if (is.null(self$`in`)) {
        invalid_fields["in"] <- "Non-nullable required field `in` cannot be null."
      }

      # check if the required `out` is null
      if (is.null(self$`out`)) {
        invalid_fields["out"] <- "Non-nullable required field `out` cannot be null."
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
# VpsTrafficUsageAverageResponse$unlock()
#
## Below is an example to define the print function
# VpsTrafficUsageAverageResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsTrafficUsageAverageResponse$lock()

