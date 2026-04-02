#' Create a new PlaceBuyNowServerRequest
#'
#' @description
#' PlaceBuyNowServerRequest Class
#'
#' @docType class
#' @title PlaceBuyNowServerRequest
#' @description PlaceBuyNowServerRequest Class
#' @format An \code{R6Class} generator object
#' @field server_id The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs. numeric [optional]
#' @field server_hostname The fully-qualified hostname to assign to the server. character [optional]
#' @field server_root_password The root or administrator password to set on the server. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
PlaceBuyNowServerRequest <- R6::R6Class(
  "PlaceBuyNowServerRequest",
  public = list(
    `server_id` = NULL,
    `server_hostname` = NULL,
    `server_root_password` = NULL,

    #' @description
    #' Initialize a new PlaceBuyNowServerRequest class.
    #'
    #' @param server_id The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs.
    #' @param server_hostname The fully-qualified hostname to assign to the server.
    #' @param server_root_password The root or administrator password to set on the server.
    #' @param ... Other optional arguments.
    initialize = function(`server_id` = NULL, `server_hostname` = NULL, `server_root_password` = NULL, ...) {
      if (!is.null(`server_id`)) {
        self$`server_id` <- `server_id`
      }
      if (!is.null(`server_hostname`)) {
        if (!(is.character(`server_hostname`) && length(`server_hostname`) == 1)) {
          stop(paste("Error! Invalid data for `server_hostname`. Must be a string:", `server_hostname`))
        }
        self$`server_hostname` <- `server_hostname`
      }
      if (!is.null(`server_root_password`)) {
        if (!(is.character(`server_root_password`) && length(`server_root_password`) == 1)) {
          stop(paste("Error! Invalid data for `server_root_password`. Must be a string:", `server_root_password`))
        }
        self$`server_root_password` <- `server_root_password`
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
    #' @return PlaceBuyNowServerRequest as a base R list.
    #' @examples
    #' # convert array of PlaceBuyNowServerRequest (x) to a data frame
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
    #' Convert PlaceBuyNowServerRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      PlaceBuyNowServerRequestObject <- list()
      if (!is.null(self$`server_id`)) {
        PlaceBuyNowServerRequestObject[["server_id"]] <-
          self$`server_id`
      }
      if (!is.null(self$`server_hostname`)) {
        PlaceBuyNowServerRequestObject[["server_hostname"]] <-
          self$`server_hostname`
      }
      if (!is.null(self$`server_root_password`)) {
        PlaceBuyNowServerRequestObject[["server_root_password"]] <-
          self$`server_root_password`
      }
      return(PlaceBuyNowServerRequestObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of PlaceBuyNowServerRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of PlaceBuyNowServerRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`server_id`)) {
        self$`server_id` <- this_object$`server_id`
      }
      if (!is.null(this_object$`server_hostname`)) {
        self$`server_hostname` <- this_object$`server_hostname`
      }
      if (!is.null(this_object$`server_root_password`)) {
        self$`server_root_password` <- this_object$`server_root_password`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return PlaceBuyNowServerRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of PlaceBuyNowServerRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of PlaceBuyNowServerRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`server_id` <- this_object$`server_id`
      self$`server_hostname` <- this_object$`server_hostname`
      self$`server_root_password` <- this_object$`server_root_password`
      self
    },

    #' @description
    #' Validate JSON input with respect to PlaceBuyNowServerRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of PlaceBuyNowServerRequest
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
# PlaceBuyNowServerRequest$unlock()
#
## Below is an example to define the print function
# PlaceBuyNowServerRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# PlaceBuyNowServerRequest$lock()

