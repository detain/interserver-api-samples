#' Create a new DisableScrub400Response
#'
#' @description
#' DisableScrub400Response Class
#'
#' @docType class
#' @title DisableScrub400Response
#' @description DisableScrub400Response Class
#' @format An \code{R6Class} generator object
#' @field success  character
#' @field text  character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DisableScrub400Response <- R6::R6Class(
  "DisableScrub400Response",
  public = list(
    `success` = NULL,
    `text` = NULL,

    #' @description
    #' Initialize a new DisableScrub400Response class.
    #'
    #' @param success success
    #' @param text text
    #' @param ... Other optional arguments.
    initialize = function(`success`, `text`, ...) {
      if (!missing(`success`)) {
        if (!(is.logical(`success`) && length(`success`) == 1)) {
          stop(paste("Error! Invalid data for `success`. Must be a boolean:", `success`))
        }
        self$`success` <- `success`
      }
      if (!missing(`text`)) {
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
    #' @return DisableScrub400Response as a base R list.
    #' @examples
    #' # convert array of DisableScrub400Response (x) to a data frame
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
    #' Convert DisableScrub400Response to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DisableScrub400ResponseObject <- list()
      if (!is.null(self$`success`)) {
        DisableScrub400ResponseObject[["success"]] <-
          self$`success`
      }
      if (!is.null(self$`text`)) {
        DisableScrub400ResponseObject[["text"]] <-
          self$`text`
      }
      return(DisableScrub400ResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of DisableScrub400Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of DisableScrub400Response
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`success`)) {
        self$`success` <- this_object$`success`
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
    #' @return DisableScrub400Response in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DisableScrub400Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of DisableScrub400Response
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`success` <- this_object$`success`
      self$`text` <- this_object$`text`
      self
    },

    #' @description
    #' Validate JSON input with respect to DisableScrub400Response and throw an exception if invalid
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
        stop(paste("The JSON input `", input, "` is invalid for DisableScrub400Response: the required field `success` is missing."))
      }
      # check the required field `text`
      if (!is.null(input_json$`text`)) {
        if (!(is.character(input_json$`text`) && length(input_json$`text`) == 1)) {
          stop(paste("Error! Invalid data for `text`. Must be a string:", input_json$`text`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for DisableScrub400Response: the required field `text` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DisableScrub400Response
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

      # check if the required `text` is null
      if (is.null(self$`text`)) {
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

      # check if the required `text` is null
      if (is.null(self$`text`)) {
        invalid_fields["text"] <- "Non-nullable required field `text` cannot be null."
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
# DisableScrub400Response$unlock()
#
## Below is an example to define the print function
# DisableScrub400Response$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DisableScrub400Response$lock()

