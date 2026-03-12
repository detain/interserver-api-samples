#' Create a new CaptchaResponse
#'
#' @description
#' A base-64 encoded captcha image.
#'
#' @docType class
#' @title CaptchaResponse
#' @description CaptchaResponse Class
#' @format An \code{R6Class} generator object
#' @field captcha The base64 encoded captcha image. character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
CaptchaResponse <- R6::R6Class(
  "CaptchaResponse",
  public = list(
    `captcha` = NULL,

    #' @description
    #' Initialize a new CaptchaResponse class.
    #'
    #' @param captcha The base64 encoded captcha image.
    #' @param ... Other optional arguments.
    initialize = function(`captcha`, ...) {
      if (!missing(`captcha`)) {
        if (!(is.character(`captcha`) && length(`captcha`) == 1)) {
          stop(paste("Error! Invalid data for `captcha`. Must be a string:", `captcha`))
        }
        self$`captcha` <- `captcha`
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
    #' @return CaptchaResponse as a base R list.
    #' @examples
    #' # convert array of CaptchaResponse (x) to a data frame
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
    #' Convert CaptchaResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      CaptchaResponseObject <- list()
      if (!is.null(self$`captcha`)) {
        CaptchaResponseObject[["captcha"]] <-
          self$`captcha`
      }
      return(CaptchaResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of CaptchaResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of CaptchaResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`captcha`)) {
        self$`captcha` <- this_object$`captcha`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return CaptchaResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of CaptchaResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of CaptchaResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`captcha` <- this_object$`captcha`
      self
    },

    #' @description
    #' Validate JSON input with respect to CaptchaResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `captcha`
      if (!is.null(input_json$`captcha`)) {
        if (!(is.character(input_json$`captcha`) && length(input_json$`captcha`) == 1)) {
          stop(paste("Error! Invalid data for `captcha`. Must be a string:", input_json$`captcha`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for CaptchaResponse: the required field `captcha` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of CaptchaResponse
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `captcha` is null
      if (is.null(self$`captcha`)) {
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
      # check if the required `captcha` is null
      if (is.null(self$`captcha`)) {
        invalid_fields["captcha"] <- "Non-nullable required field `captcha` cannot be null."
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
# CaptchaResponse$unlock()
#
## Below is an example to define the print function
# CaptchaResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# CaptchaResponse$lock()

