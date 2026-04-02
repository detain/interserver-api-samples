#' Create a new ScrubIpPlaceOrder
#'
#' @description
#' Place ScrubIP Order
#'
#' @docType class
#' @title ScrubIpPlaceOrder
#' @description ScrubIpPlaceOrder Class
#' @format An \code{R6Class} generator object
#' @field service_type  integer
#' @field ip  character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ScrubIpPlaceOrder <- R6::R6Class(
  "ScrubIpPlaceOrder",
  public = list(
    `service_type` = NULL,
    `ip` = NULL,

    #' @description
    #' Initialize a new ScrubIpPlaceOrder class.
    #'
    #' @param service_type service_type
    #' @param ip ip
    #' @param ... Other optional arguments.
    initialize = function(`service_type`, `ip`, ...) {
      if (!missing(`service_type`)) {
        if (!(is.numeric(`service_type`) && length(`service_type`) == 1)) {
          stop(paste("Error! Invalid data for `service_type`. Must be an integer:", `service_type`))
        }
        self$`service_type` <- `service_type`
      }
      if (!missing(`ip`)) {
        if (!(is.character(`ip`) && length(`ip`) == 1)) {
          stop(paste("Error! Invalid data for `ip`. Must be a string:", `ip`))
        }
        self$`ip` <- `ip`
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
    #' @return ScrubIpPlaceOrder as a base R list.
    #' @examples
    #' # convert array of ScrubIpPlaceOrder (x) to a data frame
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
    #' Convert ScrubIpPlaceOrder to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ScrubIpPlaceOrderObject <- list()
      if (!is.null(self$`service_type`)) {
        ScrubIpPlaceOrderObject[["service_type"]] <-
          self$`service_type`
      }
      if (!is.null(self$`ip`)) {
        ScrubIpPlaceOrderObject[["ip"]] <-
          self$`ip`
      }
      return(ScrubIpPlaceOrderObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of ScrubIpPlaceOrder
    #'
    #' @param input_json the JSON input
    #' @return the instance of ScrubIpPlaceOrder
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`service_type`)) {
        self$`service_type` <- this_object$`service_type`
      }
      if (!is.null(this_object$`ip`)) {
        self$`ip` <- this_object$`ip`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ScrubIpPlaceOrder in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ScrubIpPlaceOrder
    #'
    #' @param input_json the JSON input
    #' @return the instance of ScrubIpPlaceOrder
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`service_type` <- this_object$`service_type`
      self$`ip` <- this_object$`ip`
      self
    },

    #' @description
    #' Validate JSON input with respect to ScrubIpPlaceOrder and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `service_type`
      if (!is.null(input_json$`service_type`)) {
        if (!(is.numeric(input_json$`service_type`) && length(input_json$`service_type`) == 1)) {
          stop(paste("Error! Invalid data for `service_type`. Must be an integer:", input_json$`service_type`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ScrubIpPlaceOrder: the required field `service_type` is missing."))
      }
      # check the required field `ip`
      if (!is.null(input_json$`ip`)) {
        if (!(is.character(input_json$`ip`) && length(input_json$`ip`) == 1)) {
          stop(paste("Error! Invalid data for `ip`. Must be a string:", input_json$`ip`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ScrubIpPlaceOrder: the required field `ip` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ScrubIpPlaceOrder
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `service_type` is null
      if (is.null(self$`service_type`)) {
        return(FALSE)
      }

      # check if the required `ip` is null
      if (is.null(self$`ip`)) {
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
      # check if the required `service_type` is null
      if (is.null(self$`service_type`)) {
        invalid_fields["service_type"] <- "Non-nullable required field `service_type` cannot be null."
      }

      # check if the required `ip` is null
      if (is.null(self$`ip`)) {
        invalid_fields["ip"] <- "Non-nullable required field `ip` cannot be null."
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
# ScrubIpPlaceOrder$unlock()
#
## Below is an example to define the print function
# ScrubIpPlaceOrder$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ScrubIpPlaceOrder$lock()

