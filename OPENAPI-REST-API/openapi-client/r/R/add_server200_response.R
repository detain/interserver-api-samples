#' Create a new AddServer200Response
#'
#' @description
#' AddServer200Response Class
#'
#' @docType class
#' @title AddServer200Response
#' @description AddServer200Response Class
#' @format An \code{R6Class} generator object
#' @field text Status message. character [optional]
#' @field invoice Invoice ID for payment. integer [optional]
#' @field order Server order ID. integer [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AddServer200Response <- R6::R6Class(
  "AddServer200Response",
  public = list(
    `text` = NULL,
    `invoice` = NULL,
    `order` = NULL,

    #' @description
    #' Initialize a new AddServer200Response class.
    #'
    #' @param text Status message.
    #' @param invoice Invoice ID for payment.
    #' @param order Server order ID.
    #' @param ... Other optional arguments.
    initialize = function(`text` = NULL, `invoice` = NULL, `order` = NULL, ...) {
      if (!is.null(`text`)) {
        if (!(is.character(`text`) && length(`text`) == 1)) {
          stop(paste("Error! Invalid data for `text`. Must be a string:", `text`))
        }
        self$`text` <- `text`
      }
      if (!is.null(`invoice`)) {
        if (!(is.numeric(`invoice`) && length(`invoice`) == 1)) {
          stop(paste("Error! Invalid data for `invoice`. Must be an integer:", `invoice`))
        }
        self$`invoice` <- `invoice`
      }
      if (!is.null(`order`)) {
        if (!(is.numeric(`order`) && length(`order`) == 1)) {
          stop(paste("Error! Invalid data for `order`. Must be an integer:", `order`))
        }
        self$`order` <- `order`
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
    #' @return AddServer200Response as a base R list.
    #' @examples
    #' # convert array of AddServer200Response (x) to a data frame
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
    #' Convert AddServer200Response to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      AddServer200ResponseObject <- list()
      if (!is.null(self$`text`)) {
        AddServer200ResponseObject[["text"]] <-
          self$`text`
      }
      if (!is.null(self$`invoice`)) {
        AddServer200ResponseObject[["invoice"]] <-
          self$`invoice`
      }
      if (!is.null(self$`order`)) {
        AddServer200ResponseObject[["order"]] <-
          self$`order`
      }
      return(AddServer200ResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of AddServer200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of AddServer200Response
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`text`)) {
        self$`text` <- this_object$`text`
      }
      if (!is.null(this_object$`invoice`)) {
        self$`invoice` <- this_object$`invoice`
      }
      if (!is.null(this_object$`order`)) {
        self$`order` <- this_object$`order`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return AddServer200Response in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of AddServer200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of AddServer200Response
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`text` <- this_object$`text`
      self$`invoice` <- this_object$`invoice`
      self$`order` <- this_object$`order`
      self
    },

    #' @description
    #' Validate JSON input with respect to AddServer200Response and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of AddServer200Response
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
# AddServer200Response$unlock()
#
## Below is an example to define the print function
# AddServer200Response$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# AddServer200Response$lock()

