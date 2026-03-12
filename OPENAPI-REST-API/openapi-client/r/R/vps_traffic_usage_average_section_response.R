#' Create a new VpsTrafficUsageAverageSectionResponse
#'
#' @description
#' VPS Traffic Usage Average Section Response
#'
#' @docType class
#' @title VpsTrafficUsageAverageSectionResponse
#' @description VpsTrafficUsageAverageSectionResponse Class
#' @format An \code{R6Class} generator object
#' @field total  integer
#' @field count  integer
#' @field value  integer
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsTrafficUsageAverageSectionResponse <- R6::R6Class(
  "VpsTrafficUsageAverageSectionResponse",
  public = list(
    `total` = NULL,
    `count` = NULL,
    `value` = NULL,

    #' @description
    #' Initialize a new VpsTrafficUsageAverageSectionResponse class.
    #'
    #' @param total total
    #' @param count count
    #' @param value value
    #' @param ... Other optional arguments.
    initialize = function(`total`, `count`, `value`, ...) {
      if (!missing(`total`)) {
        if (!(is.numeric(`total`) && length(`total`) == 1)) {
          stop(paste("Error! Invalid data for `total`. Must be an integer:", `total`))
        }
        self$`total` <- `total`
      }
      if (!missing(`count`)) {
        if (!(is.numeric(`count`) && length(`count`) == 1)) {
          stop(paste("Error! Invalid data for `count`. Must be an integer:", `count`))
        }
        self$`count` <- `count`
      }
      if (!missing(`value`)) {
        if (!(is.numeric(`value`) && length(`value`) == 1)) {
          stop(paste("Error! Invalid data for `value`. Must be an integer:", `value`))
        }
        self$`value` <- `value`
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
    #' @return VpsTrafficUsageAverageSectionResponse as a base R list.
    #' @examples
    #' # convert array of VpsTrafficUsageAverageSectionResponse (x) to a data frame
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
    #' Convert VpsTrafficUsageAverageSectionResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsTrafficUsageAverageSectionResponseObject <- list()
      if (!is.null(self$`total`)) {
        VpsTrafficUsageAverageSectionResponseObject[["total"]] <-
          self$`total`
      }
      if (!is.null(self$`count`)) {
        VpsTrafficUsageAverageSectionResponseObject[["count"]] <-
          self$`count`
      }
      if (!is.null(self$`value`)) {
        VpsTrafficUsageAverageSectionResponseObject[["value"]] <-
          self$`value`
      }
      return(VpsTrafficUsageAverageSectionResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsTrafficUsageAverageSectionResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsTrafficUsageAverageSectionResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`total`)) {
        self$`total` <- this_object$`total`
      }
      if (!is.null(this_object$`count`)) {
        self$`count` <- this_object$`count`
      }
      if (!is.null(this_object$`value`)) {
        self$`value` <- this_object$`value`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsTrafficUsageAverageSectionResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsTrafficUsageAverageSectionResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsTrafficUsageAverageSectionResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`total` <- this_object$`total`
      self$`count` <- this_object$`count`
      self$`value` <- this_object$`value`
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsTrafficUsageAverageSectionResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `total`
      if (!is.null(input_json$`total`)) {
        if (!(is.numeric(input_json$`total`) && length(input_json$`total`) == 1)) {
          stop(paste("Error! Invalid data for `total`. Must be an integer:", input_json$`total`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsTrafficUsageAverageSectionResponse: the required field `total` is missing."))
      }
      # check the required field `count`
      if (!is.null(input_json$`count`)) {
        if (!(is.numeric(input_json$`count`) && length(input_json$`count`) == 1)) {
          stop(paste("Error! Invalid data for `count`. Must be an integer:", input_json$`count`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsTrafficUsageAverageSectionResponse: the required field `count` is missing."))
      }
      # check the required field `value`
      if (!is.null(input_json$`value`)) {
        if (!(is.numeric(input_json$`value`) && length(input_json$`value`) == 1)) {
          stop(paste("Error! Invalid data for `value`. Must be an integer:", input_json$`value`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsTrafficUsageAverageSectionResponse: the required field `value` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsTrafficUsageAverageSectionResponse
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `total` is null
      if (is.null(self$`total`)) {
        return(FALSE)
      }

      # check if the required `count` is null
      if (is.null(self$`count`)) {
        return(FALSE)
      }

      # check if the required `value` is null
      if (is.null(self$`value`)) {
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
      # check if the required `total` is null
      if (is.null(self$`total`)) {
        invalid_fields["total"] <- "Non-nullable required field `total` cannot be null."
      }

      # check if the required `count` is null
      if (is.null(self$`count`)) {
        invalid_fields["count"] <- "Non-nullable required field `count` cannot be null."
      }

      # check if the required `value` is null
      if (is.null(self$`value`)) {
        invalid_fields["value"] <- "Non-nullable required field `value` cannot be null."
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
# VpsTrafficUsageAverageSectionResponse$unlock()
#
## Below is an example to define the print function
# VpsTrafficUsageAverageSectionResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsTrafficUsageAverageSectionResponse$lock()

