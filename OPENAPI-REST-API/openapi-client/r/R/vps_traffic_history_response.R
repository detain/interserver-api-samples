#' Create a new VpsTrafficHistoryResponse
#'
#' @description
#' VPS Traffic Data History Section
#'
#' @docType class
#' @title VpsTrafficHistoryResponse
#' @description VpsTrafficHistoryResponse Class
#' @format An \code{R6Class} generator object
#' @field hour  \link{VpsTrafficHistorySectionResponse}
#' @field day  \link{VpsTrafficHistorySectionResponse}
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsTrafficHistoryResponse <- R6::R6Class(
  "VpsTrafficHistoryResponse",
  public = list(
    `hour` = NULL,
    `day` = NULL,

    #' @description
    #' Initialize a new VpsTrafficHistoryResponse class.
    #'
    #' @param hour hour
    #' @param day day
    #' @param ... Other optional arguments.
    initialize = function(`hour`, `day`, ...) {
      if (!missing(`hour`)) {
        stopifnot(R6::is.R6(`hour`))
        self$`hour` <- `hour`
      }
      if (!missing(`day`)) {
        stopifnot(R6::is.R6(`day`))
        self$`day` <- `day`
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
    #' @return VpsTrafficHistoryResponse as a base R list.
    #' @examples
    #' # convert array of VpsTrafficHistoryResponse (x) to a data frame
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
    #' Convert VpsTrafficHistoryResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsTrafficHistoryResponseObject <- list()
      if (!is.null(self$`hour`)) {
        VpsTrafficHistoryResponseObject[["hour"]] <-
          self$extractSimpleType(self$`hour`)
      }
      if (!is.null(self$`day`)) {
        VpsTrafficHistoryResponseObject[["day"]] <-
          self$extractSimpleType(self$`day`)
      }
      return(VpsTrafficHistoryResponseObject)
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
    #' Deserialize JSON string into an instance of VpsTrafficHistoryResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsTrafficHistoryResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`hour`)) {
        `hour_object` <- VpsTrafficHistorySectionResponse$new()
        `hour_object`$fromJSON(jsonlite::toJSON(this_object$`hour`, auto_unbox = TRUE, digits = NA))
        self$`hour` <- `hour_object`
      }
      if (!is.null(this_object$`day`)) {
        `day_object` <- VpsTrafficHistorySectionResponse$new()
        `day_object`$fromJSON(jsonlite::toJSON(this_object$`day`, auto_unbox = TRUE, digits = NA))
        self$`day` <- `day_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsTrafficHistoryResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsTrafficHistoryResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsTrafficHistoryResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`hour` <- VpsTrafficHistorySectionResponse$new()$fromJSON(jsonlite::toJSON(this_object$`hour`, auto_unbox = TRUE, digits = NA))
      self$`day` <- VpsTrafficHistorySectionResponse$new()$fromJSON(jsonlite::toJSON(this_object$`day`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsTrafficHistoryResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `hour`
      if (!is.null(input_json$`hour`)) {
        stopifnot(R6::is.R6(input_json$`hour`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsTrafficHistoryResponse: the required field `hour` is missing."))
      }
      # check the required field `day`
      if (!is.null(input_json$`day`)) {
        stopifnot(R6::is.R6(input_json$`day`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsTrafficHistoryResponse: the required field `day` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsTrafficHistoryResponse
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `hour` is null
      if (is.null(self$`hour`)) {
        return(FALSE)
      }

      # check if the required `day` is null
      if (is.null(self$`day`)) {
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
      # check if the required `hour` is null
      if (is.null(self$`hour`)) {
        invalid_fields["hour"] <- "Non-nullable required field `hour` cannot be null."
      }

      # check if the required `day` is null
      if (is.null(self$`day`)) {
        invalid_fields["day"] <- "Non-nullable required field `day` cannot be null."
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
# VpsTrafficHistoryResponse$unlock()
#
## Below is an example to define the print function
# VpsTrafficHistoryResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsTrafficHistoryResponse$lock()

