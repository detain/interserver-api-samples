#' Create a new ServersBuyNowResponseOrderDetails
#'
#' @description
#' Details of the placed order.
#'
#' @docType class
#' @title ServersBuyNowResponseOrderDetails
#' @description ServersBuyNowResponseOrderDetails Class
#' @format An \code{R6Class} generator object
#' @field service_id The newly created service ID for the ordered server. numeric [optional]
#' @field invoice_id The invoice ID generated for the order. numeric [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServersBuyNowResponseOrderDetails <- R6::R6Class(
  "ServersBuyNowResponseOrderDetails",
  public = list(
    `service_id` = NULL,
    `invoice_id` = NULL,

    #' @description
    #' Initialize a new ServersBuyNowResponseOrderDetails class.
    #'
    #' @param service_id The newly created service ID for the ordered server.
    #' @param invoice_id The invoice ID generated for the order.
    #' @param ... Other optional arguments.
    initialize = function(`service_id` = NULL, `invoice_id` = NULL, ...) {
      if (!is.null(`service_id`)) {
        self$`service_id` <- `service_id`
      }
      if (!is.null(`invoice_id`)) {
        self$`invoice_id` <- `invoice_id`
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
    #' @return ServersBuyNowResponseOrderDetails as a base R list.
    #' @examples
    #' # convert array of ServersBuyNowResponseOrderDetails (x) to a data frame
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
    #' Convert ServersBuyNowResponseOrderDetails to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServersBuyNowResponseOrderDetailsObject <- list()
      if (!is.null(self$`service_id`)) {
        ServersBuyNowResponseOrderDetailsObject[["service_id"]] <-
          self$`service_id`
      }
      if (!is.null(self$`invoice_id`)) {
        ServersBuyNowResponseOrderDetailsObject[["invoice_id"]] <-
          self$`invoice_id`
      }
      return(ServersBuyNowResponseOrderDetailsObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of ServersBuyNowResponseOrderDetails
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServersBuyNowResponseOrderDetails
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`service_id`)) {
        self$`service_id` <- this_object$`service_id`
      }
      if (!is.null(this_object$`invoice_id`)) {
        self$`invoice_id` <- this_object$`invoice_id`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ServersBuyNowResponseOrderDetails in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServersBuyNowResponseOrderDetails
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServersBuyNowResponseOrderDetails
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`service_id` <- this_object$`service_id`
      self$`invoice_id` <- this_object$`invoice_id`
      self
    },

    #' @description
    #' Validate JSON input with respect to ServersBuyNowResponseOrderDetails and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServersBuyNowResponseOrderDetails
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
# ServersBuyNowResponseOrderDetails$unlock()
#
## Below is an example to define the print function
# ServersBuyNowResponseOrderDetails$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServersBuyNowResponseOrderDetails$lock()

