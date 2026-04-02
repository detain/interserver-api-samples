#' Create a new PatchOauthTwoFactor200Response
#'
#' @description
#' PatchOauthTwoFactor200Response Class
#'
#' @docType class
#' @title PatchOauthTwoFactor200Response
#' @description PatchOauthTwoFactor200Response Class
#' @format An \code{R6Class} generator object
#' @field login Whether the 2FA verification succeeded and the user is now logged in. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
PatchOauthTwoFactor200Response <- R6::R6Class(
  "PatchOauthTwoFactor200Response",
  public = list(
    `login` = NULL,

    #' @description
    #' Initialize a new PatchOauthTwoFactor200Response class.
    #'
    #' @param login Whether the 2FA verification succeeded and the user is now logged in.
    #' @param ... Other optional arguments.
    initialize = function(`login` = NULL, ...) {
      if (!is.null(`login`)) {
        if (!(is.logical(`login`) && length(`login`) == 1)) {
          stop(paste("Error! Invalid data for `login`. Must be a boolean:", `login`))
        }
        self$`login` <- `login`
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
    #' @return PatchOauthTwoFactor200Response as a base R list.
    #' @examples
    #' # convert array of PatchOauthTwoFactor200Response (x) to a data frame
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
    #' Convert PatchOauthTwoFactor200Response to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      PatchOauthTwoFactor200ResponseObject <- list()
      if (!is.null(self$`login`)) {
        PatchOauthTwoFactor200ResponseObject[["login"]] <-
          self$`login`
      }
      return(PatchOauthTwoFactor200ResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of PatchOauthTwoFactor200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of PatchOauthTwoFactor200Response
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`login`)) {
        self$`login` <- this_object$`login`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return PatchOauthTwoFactor200Response in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of PatchOauthTwoFactor200Response
    #'
    #' @param input_json the JSON input
    #' @return the instance of PatchOauthTwoFactor200Response
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`login` <- this_object$`login`
      self
    },

    #' @description
    #' Validate JSON input with respect to PatchOauthTwoFactor200Response and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of PatchOauthTwoFactor200Response
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
# PatchOauthTwoFactor200Response$unlock()
#
## Below is an example to define the print function
# PatchOauthTwoFactor200Response$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# PatchOauthTwoFactor200Response$lock()

