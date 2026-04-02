#' Create a new VpsTrafficTotalsSectionResponse
#'
#' @description
#' VPS Traffic Totals Secttions Data
#'
#' @docType class
#' @title VpsTrafficTotalsSectionResponse
#' @description VpsTrafficTotalsSectionResponse Class
#' @format An \code{R6Class} generator object
#' @field in  integer
#' @field out  integer
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsTrafficTotalsSectionResponse <- R6::R6Class(
  "VpsTrafficTotalsSectionResponse",
  public = list(
    `in` = NULL,
    `out` = NULL,

    #' @description
    #' Initialize a new VpsTrafficTotalsSectionResponse class.
    #'
    #' @param in in
    #' @param out out
    #' @param ... Other optional arguments.
    initialize = function(`in`, `out`, ...) {
      if (!missing(`in`)) {
        if (!(is.numeric(`in`) && length(`in`) == 1)) {
          stop(paste("Error! Invalid data for `in`. Must be an integer:", `in`))
        }
        self$`in` <- `in`
      }
      if (!missing(`out`)) {
        if (!(is.numeric(`out`) && length(`out`) == 1)) {
          stop(paste("Error! Invalid data for `out`. Must be an integer:", `out`))
        }
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
    #' @return VpsTrafficTotalsSectionResponse as a base R list.
    #' @examples
    #' # convert array of VpsTrafficTotalsSectionResponse (x) to a data frame
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
    #' Convert VpsTrafficTotalsSectionResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsTrafficTotalsSectionResponseObject <- list()
      if (!is.null(self$`in`)) {
        VpsTrafficTotalsSectionResponseObject[["in"]] <-
          self$`in`
      }
      if (!is.null(self$`out`)) {
        VpsTrafficTotalsSectionResponseObject[["out"]] <-
          self$`out`
      }
      return(VpsTrafficTotalsSectionResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsTrafficTotalsSectionResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsTrafficTotalsSectionResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`in`)) {
        self$`in` <- this_object$`in`
      }
      if (!is.null(this_object$`out`)) {
        self$`out` <- this_object$`out`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsTrafficTotalsSectionResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsTrafficTotalsSectionResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsTrafficTotalsSectionResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`in` <- this_object$`in`
      self$`out` <- this_object$`out`
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsTrafficTotalsSectionResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `in`
      if (!is.null(input_json$`in`)) {
        if (!(is.numeric(input_json$`in`) && length(input_json$`in`) == 1)) {
          stop(paste("Error! Invalid data for `in`. Must be an integer:", input_json$`in`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsTrafficTotalsSectionResponse: the required field `in` is missing."))
      }
      # check the required field `out`
      if (!is.null(input_json$`out`)) {
        if (!(is.numeric(input_json$`out`) && length(input_json$`out`) == 1)) {
          stop(paste("Error! Invalid data for `out`. Must be an integer:", input_json$`out`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsTrafficTotalsSectionResponse: the required field `out` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsTrafficTotalsSectionResponse
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
# VpsTrafficTotalsSectionResponse$unlock()
#
## Below is an example to define the print function
# VpsTrafficTotalsSectionResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsTrafficTotalsSectionResponse$lock()

