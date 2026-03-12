#' Create a new LoginSubmissionExampleGRecaptchaResponseDep
#'
#' @description
#' LoginSubmissionExampleGRecaptchaResponseDep Class
#'
#' @docType class
#' @title LoginSubmissionExampleGRecaptchaResponseDep
#' @description LoginSubmissionExampleGRecaptchaResponseDep Class
#' @format An \code{R6Class} generator object
#' @field w  integer [optional]
#' @field n  integer [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
LoginSubmissionExampleGRecaptchaResponseDep <- R6::R6Class(
  "LoginSubmissionExampleGRecaptchaResponseDep",
  public = list(
    `w` = NULL,
    `n` = NULL,

    #' @description
    #' Initialize a new LoginSubmissionExampleGRecaptchaResponseDep class.
    #'
    #' @param w w
    #' @param n n
    #' @param ... Other optional arguments.
    initialize = function(`w` = NULL, `n` = NULL, ...) {
      if (!is.null(`w`)) {
        if (!(is.numeric(`w`) && length(`w`) == 1)) {
          stop(paste("Error! Invalid data for `w`. Must be an integer:", `w`))
        }
        self$`w` <- `w`
      }
      if (!is.null(`n`)) {
        if (!(is.numeric(`n`) && length(`n`) == 1)) {
          stop(paste("Error! Invalid data for `n`. Must be an integer:", `n`))
        }
        self$`n` <- `n`
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
    #' @return LoginSubmissionExampleGRecaptchaResponseDep as a base R list.
    #' @examples
    #' # convert array of LoginSubmissionExampleGRecaptchaResponseDep (x) to a data frame
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
    #' Convert LoginSubmissionExampleGRecaptchaResponseDep to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      LoginSubmissionExampleGRecaptchaResponseDepObject <- list()
      if (!is.null(self$`w`)) {
        LoginSubmissionExampleGRecaptchaResponseDepObject[["w"]] <-
          self$`w`
      }
      if (!is.null(self$`n`)) {
        LoginSubmissionExampleGRecaptchaResponseDepObject[["n"]] <-
          self$`n`
      }
      return(LoginSubmissionExampleGRecaptchaResponseDepObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of LoginSubmissionExampleGRecaptchaResponseDep
    #'
    #' @param input_json the JSON input
    #' @return the instance of LoginSubmissionExampleGRecaptchaResponseDep
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`w`)) {
        self$`w` <- this_object$`w`
      }
      if (!is.null(this_object$`n`)) {
        self$`n` <- this_object$`n`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return LoginSubmissionExampleGRecaptchaResponseDep in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of LoginSubmissionExampleGRecaptchaResponseDep
    #'
    #' @param input_json the JSON input
    #' @return the instance of LoginSubmissionExampleGRecaptchaResponseDep
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`w` <- this_object$`w`
      self$`n` <- this_object$`n`
      self
    },

    #' @description
    #' Validate JSON input with respect to LoginSubmissionExampleGRecaptchaResponseDep and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of LoginSubmissionExampleGRecaptchaResponseDep
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
# LoginSubmissionExampleGRecaptchaResponseDep$unlock()
#
## Below is an example to define the print function
# LoginSubmissionExampleGRecaptchaResponseDep$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# LoginSubmissionExampleGRecaptchaResponseDep$lock()

