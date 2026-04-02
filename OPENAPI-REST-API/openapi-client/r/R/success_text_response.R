#' Create a new SuccessTextResponse
#'
#' @description
#' Response with success flag and text description.
#'
#' @docType class
#' @title SuccessTextResponse
#' @description SuccessTextResponse Class
#' @format An \code{R6Class} generator object
#' @field success Indicates whether or not the command was successful or not. character
#' @field text Text associated with the response. character [optional]
#' @field action Optional Action relating to the response. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
SuccessTextResponse <- R6::R6Class(
  "SuccessTextResponse",
  public = list(
    `success` = NULL,
    `text` = NULL,
    `action` = NULL,

    #' @description
    #' Initialize a new SuccessTextResponse class.
    #'
    #' @param success Indicates whether or not the command was successful or not.
    #' @param text Text associated with the response.
    #' @param action Optional Action relating to the response.
    #' @param ... Other optional arguments.
    initialize = function(`success`, `text` = NULL, `action` = NULL, ...) {
      if (!missing(`success`)) {
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
      if (!is.null(`action`)) {
        if (!(is.character(`action`) && length(`action`) == 1)) {
          stop(paste("Error! Invalid data for `action`. Must be a string:", `action`))
        }
        self$`action` <- `action`
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
    #' @return SuccessTextResponse as a base R list.
    #' @examples
    #' # convert array of SuccessTextResponse (x) to a data frame
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
    #' Convert SuccessTextResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      SuccessTextResponseObject <- list()
      if (!is.null(self$`success`)) {
        SuccessTextResponseObject[["success"]] <-
          self$`success`
      }
      if (!is.null(self$`text`)) {
        SuccessTextResponseObject[["text"]] <-
          self$`text`
      }
      if (!is.null(self$`action`)) {
        SuccessTextResponseObject[["action"]] <-
          self$`action`
      }
      return(SuccessTextResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of SuccessTextResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of SuccessTextResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`success`)) {
        self$`success` <- this_object$`success`
      }
      if (!is.null(this_object$`text`)) {
        self$`text` <- this_object$`text`
      }
      if (!is.null(this_object$`action`)) {
        self$`action` <- this_object$`action`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return SuccessTextResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of SuccessTextResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of SuccessTextResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`success` <- this_object$`success`
      self$`text` <- this_object$`text`
      self$`action` <- this_object$`action`
      self
    },

    #' @description
    #' Validate JSON input with respect to SuccessTextResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `success`
      if (!is.null(input_json$`success`)) {
        if (!(is.logical(input_json$`success`) && length(input_json$`success`) == 1)) {
          stop(paste("Error! Invalid data for `success`. Must be a boolean:", input_json$`success`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for SuccessTextResponse: the required field `success` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of SuccessTextResponse
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `success` is null
      if (is.null(self$`success`)) {
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
      # check if the required `success` is null
      if (is.null(self$`success`)) {
        invalid_fields["success"] <- "Non-nullable required field `success` cannot be null."
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
# SuccessTextResponse$unlock()
#
## Below is an example to define the print function
# SuccessTextResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# SuccessTextResponse$lock()

