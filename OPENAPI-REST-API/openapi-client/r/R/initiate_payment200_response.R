#' Create a new InitiatePayment200Response
#'
#' @description
#' InitiatePayment200Response Class
#'
#' @docType class
#' @title InitiatePayment200Response
#' @description InitiatePayment200Response Class
#' @format An \code{R6Class} generator object
#' @field type The response type indicating how to handle the payment. Possible values: `redirect` (redirect user to a URL), `submit` (submit a form to a URL), `single` (immediate result). character [optional]
#' @field redirect URL to redirect the user to for payment (when type is `redirect`). character [optional]
#' @field action Form action URL (when type is `submit`). character [optional]
#' @field method HTTP method for the form submission (when type is `submit`). character [optional]
#' @field items Form field name-value pairs to submit (when type is `submit`). object [optional]
#' @field text Status or result text. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
InitiatePayment200Response <- R6::R6Class(
  "InitiatePayment200Response",
  public = list(
    `type` = NULL,
    `redirect` = NULL,
    `action` = NULL,
    `method` = NULL,
    `items` = NULL,
    `text` = NULL,

    #' @description
    #' Initialize a new InitiatePayment200Response class.
    #'
    #' @param type The response type indicating how to handle the payment. Possible values: `redirect` (redirect user to a URL), `submit` (submit a form to a URL), `single` (immediate result).
    #' @param redirect URL to redirect the user to for payment (when type is `redirect`).
    #' @param action Form action URL (when type is `submit`).
    #' @param method HTTP method for the form submission (when type is `submit`).
    #' @param items Form field name-value pairs to submit (when type is `submit`).
    #' @param text Status or result text.
    #' @param ... Other optional arguments.
    initialize = function(`type` = NULL, `redirect` = NULL, `action` = NULL, `method` = NULL, `items` = NULL, `text` = NULL, ...) {
      if (!is.null(`type`)) {
        if (!(`type` %in% c("redirect", "submit", "single"))) {
          stop(paste("Error! \"", `type`, "\" cannot be assigned to `type`. Must be \"redirect\", \"submit\", \"single\".", sep = ""))
        }
        if (!(is.character(`type`) && length(`type`) == 1)) {
          stop(paste("Error! Invalid data for `type`. Must be a string:", `type`))
        }
        self$`type` <- `type`
      }
      if (!is.null(`redirect`)) {
        if (!(is.character(`redirect`) && length(`redirect`) == 1)) {
          stop(paste("Error! Invalid data for `redirect`. Must be a string:", `redirect`))
        }
        self$`redirect` <- `redirect`
      }
      if (!is.null(`action`)) {
        if (!(is.character(`action`) && length(`action`) == 1)) {
          stop(paste("Error! Invalid data for `action`. Must be a string:", `action`))
        }
        self$`action` <- `action`
      }
      if (!is.null(`method`)) {
        if (!(is.character(`method`) && length(`method`) == 1)) {
          stop(paste("Error! Invalid data for `method`. Must be a string:", `method`))
        }
        self$`method` <- `method`
      }
      if (!is.null(`items`)) {
        self$`items` <- `items`
      }
      if (!is.null(`text`)) {
        if (!(is.character(`text`) && length(`text`) == 1)) {
          stop(paste("Error! Invalid data for `text`. Must be a string:", `text`))
        }
        self$`text` <- `text`
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
    #' @return InitiatePayment200Response as a base R list.
    #' @examples
    #' # convert array of InitiatePayment200Response (x) to a data frame
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
    #' Convert InitiatePayment200Response to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      InitiatePayment200ResponseObject <- list()
      if (!is.null(self$`type`)) {
        InitiatePayment200ResponseObject[["type"]] <-
          self$`type`
      }
      if (!is.null(self$`redirect`)) {
        InitiatePayment200ResponseObject[["redirect"]] <-
          self$`redirect`
      }
      if (!is.null(self$`action`)) {
        InitiatePayment200ResponseObject[["action"]] <-
          self$`action`
      }
      if (!is.null(self$`method`)) {
        InitiatePayment200ResponseObject[["method"]] <-
          self$`method`
      }
      if (!is.null(self$`items`)) {
        InitiatePayment200ResponseObject[["items"]] <-
          self$`items`
      }
      if (!is.null(self$`text`)) {
        InitiatePayment200ResponseObject[["text"]] <-
          self$`text`
      }
      return(InitiatePayment200ResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of InitiatePayment200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of InitiatePayment200Response
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`type`)) {
        if (!is.null(this_object$`type`) && !(this_object$`type` %in% c("redirect", "submit", "single"))) {
          stop(paste("Error! \"", this_object$`type`, "\" cannot be assigned to `type`. Must be \"redirect\", \"submit\", \"single\".", sep = ""))
        }
        self$`type` <- this_object$`type`
      }
      if (!is.null(this_object$`redirect`)) {
        self$`redirect` <- this_object$`redirect`
      }
      if (!is.null(this_object$`action`)) {
        self$`action` <- this_object$`action`
      }
      if (!is.null(this_object$`method`)) {
        self$`method` <- this_object$`method`
      }
      if (!is.null(this_object$`items`)) {
        self$`items` <- this_object$`items`
      }
      if (!is.null(this_object$`text`)) {
        self$`text` <- this_object$`text`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return InitiatePayment200Response in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of InitiatePayment200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of InitiatePayment200Response
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`type`) && !(this_object$`type` %in% c("redirect", "submit", "single"))) {
        stop(paste("Error! \"", this_object$`type`, "\" cannot be assigned to `type`. Must be \"redirect\", \"submit\", \"single\".", sep = ""))
      }
      self$`type` <- this_object$`type`
      self$`redirect` <- this_object$`redirect`
      self$`action` <- this_object$`action`
      self$`method` <- this_object$`method`
      self$`items` <- this_object$`items`
      self$`text` <- this_object$`text`
      self
    },

    #' @description
    #' Validate JSON input with respect to InitiatePayment200Response and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of InitiatePayment200Response
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
# InitiatePayment200Response$unlock()
#
## Below is an example to define the print function
# InitiatePayment200Response$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# InitiatePayment200Response$lock()

