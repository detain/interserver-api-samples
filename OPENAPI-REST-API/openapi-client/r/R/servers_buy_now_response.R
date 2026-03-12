#' Create a new ServersBuyNowResponse
#'
#' @description
#' Success response after placing a buy-it-now dedicated server order.
#'
#' @docType class
#' @title ServersBuyNowResponse
#' @description ServersBuyNowResponse Class
#' @format An \code{R6Class} generator object
#' @field success Whether the order was placed successfully. character [optional]
#' @field text Human-readable status message. character [optional]
#' @field order_details  \link{ServersBuyNowResponseOrderDetails} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServersBuyNowResponse <- R6::R6Class(
  "ServersBuyNowResponse",
  public = list(
    `success` = NULL,
    `text` = NULL,
    `order_details` = NULL,

    #' @description
    #' Initialize a new ServersBuyNowResponse class.
    #'
    #' @param success Whether the order was placed successfully.
    #' @param text Human-readable status message.
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
    #' @return ServersBuyNowResponse as a base R list.
    #' @examples
    #' # convert array of ServersBuyNowResponse (x) to a data frame
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
    #' Convert ServersBuyNowResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServersBuyNowResponseObject <- list()
      if (!is.null(self$`success`)) {
        ServersBuyNowResponseObject[["success"]] <-
          self$`success`
      }
      if (!is.null(self$`text`)) {
        ServersBuyNowResponseObject[["text"]] <-
          self$`text`
      }
      if (!is.null(self$`order_details`)) {
        ServersBuyNowResponseObject[["order_details"]] <-
          self$extractSimpleType(self$`order_details`)
      }
      return(ServersBuyNowResponseObject)
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
    #' Deserialize JSON string into an instance of ServersBuyNowResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServersBuyNowResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`success`)) {
        self$`success` <- this_object$`success`
      }
      if (!is.null(this_object$`text`)) {
        self$`text` <- this_object$`text`
      }
      if (!is.null(this_object$`order_details`)) {
        `order_details_object` <- ServersBuyNowResponseOrderDetails$new()
        `order_details_object`$fromJSON(jsonlite::toJSON(this_object$`order_details`, auto_unbox = TRUE, digits = NA))
        self$`order_details` <- `order_details_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ServersBuyNowResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServersBuyNowResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServersBuyNowResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`success` <- this_object$`success`
      self$`text` <- this_object$`text`
      self$`order_details` <- ServersBuyNowResponseOrderDetails$new()$fromJSON(jsonlite::toJSON(this_object$`order_details`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to ServersBuyNowResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServersBuyNowResponse
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
# ServersBuyNowResponse$unlock()
#
## Below is an example to define the print function
# ServersBuyNowResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServersBuyNowResponse$lock()

