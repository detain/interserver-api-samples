#' Create a new UpdateAccountTfaRequest
#'
#' @description
#' UpdateAccountTfaRequest Class
#'
#' @docType class
#' @title UpdateAccountTfaRequest
#' @description UpdateAccountTfaRequest Class
#' @format An \code{R6Class} generator object
#' @field 2fa_google_code The 6-digit verification code from your authenticator app. character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
UpdateAccountTfaRequest <- R6::R6Class(
  "UpdateAccountTfaRequest",
  public = list(
    `2fa_google_code` = NULL,

    #' @description
    #' Initialize a new UpdateAccountTfaRequest class.
    #'
    #' @param 2fa_google_code The 6-digit verification code from your authenticator app.
    #' @param ... Other optional arguments.
    initialize = function(`2fa_google_code`, ...) {
      if (!missing(`2fa_google_code`)) {
        if (!(is.character(`2fa_google_code`) && length(`2fa_google_code`) == 1)) {
          stop(paste("Error! Invalid data for `2fa_google_code`. Must be a string:", `2fa_google_code`))
        }
        self$`2fa_google_code` <- `2fa_google_code`
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
    #' @return UpdateAccountTfaRequest as a base R list.
    #' @examples
    #' # convert array of UpdateAccountTfaRequest (x) to a data frame
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
    #' Convert UpdateAccountTfaRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      UpdateAccountTfaRequestObject <- list()
      if (!is.null(self$`2fa_google_code`)) {
        UpdateAccountTfaRequestObject[["2fa_google_code"]] <-
          self$`2fa_google_code`
      }
      return(UpdateAccountTfaRequestObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of UpdateAccountTfaRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of UpdateAccountTfaRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`2fa_google_code`)) {
        self$`2fa_google_code` <- this_object$`2fa_google_code`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return UpdateAccountTfaRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of UpdateAccountTfaRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of UpdateAccountTfaRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`2fa_google_code` <- this_object$`2fa_google_code`
      self
    },

    #' @description
    #' Validate JSON input with respect to UpdateAccountTfaRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `2fa_google_code`
      if (!is.null(input_json$`2fa_google_code`)) {
        if (!(is.character(input_json$`2fa_google_code`) && length(input_json$`2fa_google_code`) == 1)) {
          stop(paste("Error! Invalid data for `2fa_google_code`. Must be a string:", input_json$`2fa_google_code`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for UpdateAccountTfaRequest: the required field `2fa_google_code` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of UpdateAccountTfaRequest
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `2fa_google_code` is null
      if (is.null(self$`2fa_google_code`)) {
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
      # check if the required `2fa_google_code` is null
      if (is.null(self$`2fa_google_code`)) {
        invalid_fields["2fa_google_code"] <- "Non-nullable required field `2fa_google_code` cannot be null."
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
# UpdateAccountTfaRequest$unlock()
#
## Below is an example to define the print function
# UpdateAccountTfaRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# UpdateAccountTfaRequest$lock()

