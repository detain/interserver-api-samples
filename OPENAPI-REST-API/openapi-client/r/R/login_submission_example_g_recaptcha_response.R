#' Create a new LoginSubmissionExampleGRecaptchaResponse
#'
#' @description
#' LoginSubmissionExampleGRecaptchaResponse Class
#'
#' @docType class
#' @title LoginSubmissionExampleGRecaptchaResponse
#' @description LoginSubmissionExampleGRecaptchaResponse Class
#' @format An \code{R6Class} generator object
#' @field __v_isShallow  character [optional]
#' @field dep  \link{LoginSubmissionExampleGRecaptchaResponseDep} [optional]
#' @field __v_isRef  character [optional]
#' @field _rawValue  character [optional]
#' @field _value  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
LoginSubmissionExampleGRecaptchaResponse <- R6::R6Class(
  "LoginSubmissionExampleGRecaptchaResponse",
  public = list(
    `__v_isShallow` = NULL,
    `dep` = NULL,
    `__v_isRef` = NULL,
    `_rawValue` = NULL,
    `_value` = NULL,

    #' @description
    #' Initialize a new LoginSubmissionExampleGRecaptchaResponse class.
    #'
    #' @param __v_isShallow __v_isShallow
    #' @param dep dep
    #' @param __v_isRef __v_isRef
    #' @param _rawValue _rawValue
    #' @param _value _value
    #' @param ... Other optional arguments.
    initialize = function(`__v_isShallow` = NULL, `dep` = NULL, `__v_isRef` = NULL, `_rawValue` = NULL, `_value` = NULL, ...) {
      if (!is.null(`__v_isShallow`)) {
        if (!(is.logical(`__v_isShallow`) && length(`__v_isShallow`) == 1)) {
          stop(paste("Error! Invalid data for `__v_isShallow`. Must be a boolean:", `__v_isShallow`))
        }
        self$`__v_isShallow` <- `__v_isShallow`
      }
      if (!is.null(`dep`)) {
        stopifnot(R6::is.R6(`dep`))
        self$`dep` <- `dep`
      }
      if (!is.null(`__v_isRef`)) {
        if (!(is.logical(`__v_isRef`) && length(`__v_isRef`) == 1)) {
          stop(paste("Error! Invalid data for `__v_isRef`. Must be a boolean:", `__v_isRef`))
        }
        self$`__v_isRef` <- `__v_isRef`
      }
      if (!is.null(`_rawValue`)) {
        if (!(is.character(`_rawValue`) && length(`_rawValue`) == 1)) {
          stop(paste("Error! Invalid data for `_rawValue`. Must be a string:", `_rawValue`))
        }
        self$`_rawValue` <- `_rawValue`
      }
      if (!is.null(`_value`)) {
        if (!(is.character(`_value`) && length(`_value`) == 1)) {
          stop(paste("Error! Invalid data for `_value`. Must be a string:", `_value`))
        }
        self$`_value` <- `_value`
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
    #' @return LoginSubmissionExampleGRecaptchaResponse as a base R list.
    #' @examples
    #' # convert array of LoginSubmissionExampleGRecaptchaResponse (x) to a data frame
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
    #' Convert LoginSubmissionExampleGRecaptchaResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      LoginSubmissionExampleGRecaptchaResponseObject <- list()
      if (!is.null(self$`__v_isShallow`)) {
        LoginSubmissionExampleGRecaptchaResponseObject[["__v_isShallow"]] <-
          self$`__v_isShallow`
      }
      if (!is.null(self$`dep`)) {
        LoginSubmissionExampleGRecaptchaResponseObject[["dep"]] <-
          self$extractSimpleType(self$`dep`)
      }
      if (!is.null(self$`__v_isRef`)) {
        LoginSubmissionExampleGRecaptchaResponseObject[["__v_isRef"]] <-
          self$`__v_isRef`
      }
      if (!is.null(self$`_rawValue`)) {
        LoginSubmissionExampleGRecaptchaResponseObject[["_rawValue"]] <-
          self$`_rawValue`
      }
      if (!is.null(self$`_value`)) {
        LoginSubmissionExampleGRecaptchaResponseObject[["_value"]] <-
          self$`_value`
      }
      return(LoginSubmissionExampleGRecaptchaResponseObject)
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
    #' Deserialize JSON string into an instance of LoginSubmissionExampleGRecaptchaResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of LoginSubmissionExampleGRecaptchaResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`__v_isShallow`)) {
        self$`__v_isShallow` <- this_object$`__v_isShallow`
      }
      if (!is.null(this_object$`dep`)) {
        `dep_object` <- LoginSubmissionExampleGRecaptchaResponseDep$new()
        `dep_object`$fromJSON(jsonlite::toJSON(this_object$`dep`, auto_unbox = TRUE, digits = NA))
        self$`dep` <- `dep_object`
      }
      if (!is.null(this_object$`__v_isRef`)) {
        self$`__v_isRef` <- this_object$`__v_isRef`
      }
      if (!is.null(this_object$`_rawValue`)) {
        self$`_rawValue` <- this_object$`_rawValue`
      }
      if (!is.null(this_object$`_value`)) {
        self$`_value` <- this_object$`_value`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return LoginSubmissionExampleGRecaptchaResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of LoginSubmissionExampleGRecaptchaResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of LoginSubmissionExampleGRecaptchaResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`__v_isShallow` <- this_object$`__v_isShallow`
      self$`dep` <- LoginSubmissionExampleGRecaptchaResponseDep$new()$fromJSON(jsonlite::toJSON(this_object$`dep`, auto_unbox = TRUE, digits = NA))
      self$`__v_isRef` <- this_object$`__v_isRef`
      self$`_rawValue` <- this_object$`_rawValue`
      self$`_value` <- this_object$`_value`
      self
    },

    #' @description
    #' Validate JSON input with respect to LoginSubmissionExampleGRecaptchaResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of LoginSubmissionExampleGRecaptchaResponse
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
# LoginSubmissionExampleGRecaptchaResponse$unlock()
#
## Below is an example to define the print function
# LoginSubmissionExampleGRecaptchaResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# LoginSubmissionExampleGRecaptchaResponse$lock()

